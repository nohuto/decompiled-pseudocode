/*
 * XREFs of EtwpLogPmcCounterRundown @ 0x140A7BA54
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1409902C0 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A118E4 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpLogPmcCounterRundown(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // ebp
  unsigned int *v5; // rdi
  struct _KTHREAD *Pool2; // rbx
  void *v7; // r15
  __int64 v8; // r14
  unsigned int v9; // esi
  unsigned int v10; // r9d
  __int64 v11; // r12
  __int64 v12; // rbp
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // r14
  unsigned int *v17; // r10
  unsigned int v18; // r9d
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+38h] [rbp-40h]
  unsigned int v25; // [rsp+90h] [rbp+18h] BYREF
  int v26; // [rsp+98h] [rbp+20h]

  v2 = KeNumberProcessors_0;
  v3 = 0;
  v25 = 0;
  v22 = KeNumberProcessors_0;
  v26 = 0;
  v5 = 0LL;
  Pool2 = (struct _KTHREAD *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    v23 = ExAllocatePool2(0x40uLL);
    v7 = (void *)v23;
    if ( v23 )
    {
      v8 = *(_QWORD *)(a1 + 1064);
      if ( *(_DWORD *)(v8 + 20) )
      {
        v9 = 0;
        v25 = *(_DWORD *)(v8 + 20);
        *(_QWORD *)&Pool2->Header.Lock = &v25;
        Pool2->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)4;
        v10 = v25;
        if ( v25 )
        {
          do
          {
            v26 = 0;
            v11 = v9;
            v12 = v23 + 24LL * v9;
            *(_DWORD *)v12 = *(_DWORD *)(*(_QWORD *)v8 + 4LL * v9);
            if ( (int)guard_dispatch_icall_no_overrides(1LL) < 0 )
              v13 = L"Unknown";
            else
              v13 = *(const WCHAR **)(v12 + 16);
            v14 = -1LL;
            v3 = 0;
            do
              ++v14;
            while ( v13[v14] );
            ++v9;
            v15 = 2 * (v11 + 1);
            *((_QWORD *)&Pool2->Header.Lock + v15) = v13;
            (&Pool2->Header.WaitListHead.Flink)[v15] = (struct _LIST_ENTRY *)(unsigned int)(2 * v14 + 2);
            v10 = v25;
          }
          while ( v9 < v25 );
          v2 = v22;
        }
        EtwpLogKernelEvent(Pool2, EtwpHostSiloState, a2, v10 + 1, 0xF30u, 0x501802u);
        if ( *(_QWORD *)(a1 + 24) == 1LL )
        {
          v5 = (unsigned int *)ExAllocatePool2(0x40uLL);
          if ( v5 )
          {
            if ( v2 )
            {
              v16 = (_QWORD *)(v8 + 24);
              do
              {
                if ( *v16 )
                {
                  *(_QWORD *)v5 = *v16;
                  if ( (int)guard_dispatch_icall_no_overrides(52LL) >= 0 )
                  {
                    Pool2->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)4;
                    *(_QWORD *)&Pool2->Header.Lock = v5 + 2;
                    v17 = v5 + 4;
                    Pool2->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)(v5 + 4);
                    v18 = 0;
                    Pool2->SListFaultAddress = (void *)4;
                    while ( v18 < *v17 )
                    {
                      v19 = 4LL * v18;
                      if ( !BYTE1(v5[v19 + 9]) )
                        goto LABEL_18;
                      v20 = 2 * (2 * v18 + 2LL);
                      *((_QWORD *)&Pool2->Header.Lock + v20) = &v5[4 * v18 + 8];
                      (&Pool2->Header.WaitListHead.Flink)[v20] = (struct _LIST_ENTRY *)4;
                      v21 = 2 * (2 * v18++ + 3LL);
                      *((_QWORD *)&Pool2->Header.Lock + v21) = &v5[v19 + 6];
                      (&Pool2->Header.WaitListHead.Flink)[v21] = (struct _LIST_ENTRY *)8;
                    }
                    EtwpLogKernelEvent(Pool2, EtwpHostSiloState, a2, 2 * *v17 + 2, 0xF31u, 0x501802u);
                  }
                }
                ++v3;
                ++v16;
              }
              while ( v3 < v2 );
LABEL_18:
              v7 = (void *)v23;
            }
          }
        }
      }
    }
    ExFreePoolWithTag(Pool2, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
}
