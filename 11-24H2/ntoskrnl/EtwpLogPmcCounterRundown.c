/*
 * XREFs of EtwpLogPmcCounterRundown @ 0x140A7871C
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1409D3C74 (EtwpStopLoggerInstance.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x140A0EEA0 (EtwpCheckLoggerAccessAndDoRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpLogPmcCounterRundown(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // ebp
  unsigned int *v5; // rdi
  unsigned int **Pool2; // rbx
  void *v7; // r15
  __int64 v8; // r14
  unsigned int v9; // esi
  unsigned int v10; // r9d
  __int64 v11; // r12
  __int64 v12; // rbp
  const WCHAR *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // esi
  _QWORD *v17; // r14
  unsigned int *v18; // r10
  unsigned int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // [rsp+30h] [rbp-48h]
  __int64 v24; // [rsp+38h] [rbp-40h]
  unsigned int v26; // [rsp+90h] [rbp+18h] BYREF
  int v27; // [rsp+98h] [rbp+20h]

  v2 = KeNumberProcessors_0;
  v3 = 0;
  v26 = 0;
  v23 = KeNumberProcessors_0;
  v27 = 0;
  v5 = 0LL;
  Pool2 = (unsigned int **)ExAllocatePool2(0x40uLL, (unsigned int)(32 * (EtwpMaxPmcCounter + 1)), 0x74777445u);
  if ( Pool2 )
  {
    v24 = ExAllocatePool2(0x40uLL, (unsigned int)(24 * EtwpMaxPmcCounter), 0x74777445u);
    v7 = (void *)v24;
    if ( v24 )
    {
      v8 = *(_QWORD *)(a1 + 1064);
      if ( *(_DWORD *)(v8 + 20) )
      {
        v9 = 0;
        v26 = *(_DWORD *)(v8 + 20);
        *Pool2 = &v26;
        Pool2[1] = (unsigned int *)4;
        v10 = v26;
        if ( v26 )
        {
          do
          {
            v27 = 0;
            v11 = v9;
            v12 = v24 + 24LL * v9;
            *(_DWORD *)v12 = *(_DWORD *)(*(_QWORD *)v8 + 4LL * v9);
            if ( (int)guard_dispatch_icall_no_overrides(1LL, 24LL) < 0 )
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
            Pool2[v15] = (unsigned int *)v13;
            Pool2[v15 + 1] = (unsigned int *)(unsigned int)(2 * v14 + 2);
            v10 = v26;
          }
          while ( v9 < v26 );
          v2 = v23;
        }
        EtwpLogKernelEvent((__int64)Pool2, EtwpHostSiloState, a2, v10 + 1, 3888, 0x501802u);
        if ( *(_QWORD *)(a1 + 24) == 1LL )
        {
          v16 = 16 * v26 + 24;
          v5 = (unsigned int *)ExAllocatePool2(0x40uLL, v16, 0x74777445u);
          if ( v5 )
          {
            if ( v2 )
            {
              v17 = (_QWORD *)(v8 + 24);
              do
              {
                if ( *v17 )
                {
                  *(_QWORD *)v5 = *v17;
                  if ( (int)guard_dispatch_icall_no_overrides(52LL, v16) >= 0 )
                  {
                    Pool2[1] = (unsigned int *)4;
                    *Pool2 = v5 + 2;
                    v18 = v5 + 4;
                    Pool2[2] = v5 + 4;
                    v19 = 0;
                    Pool2[3] = (unsigned int *)4;
                    while ( v19 < *v18 )
                    {
                      v20 = 4LL * v19;
                      if ( !BYTE1(v5[v20 + 9]) )
                        goto LABEL_18;
                      v21 = 2 * (2 * v19 + 2LL);
                      Pool2[v21] = &v5[4 * v19 + 8];
                      Pool2[v21 + 1] = (unsigned int *)4;
                      v22 = 2 * (2 * v19++ + 3LL);
                      Pool2[v22] = &v5[v20 + 6];
                      Pool2[v22 + 1] = (unsigned int *)8;
                    }
                    EtwpLogKernelEvent((__int64)Pool2, EtwpHostSiloState, a2, 2 * *v18 + 2, 3889, 0x501802u);
                  }
                }
                ++v3;
                ++v17;
              }
              while ( v3 < v2 );
LABEL_18:
              v7 = (void *)v24;
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
