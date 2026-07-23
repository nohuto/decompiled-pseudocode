/*
 * XREFs of KiGetSystemServiceTraceTable @ 0x14073B234
 * Callers:
 *     KeSetSystemServiceCallback @ 0x14073B060 (KeSetSystemServiceCallback.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     KiSystemServiceTraceTableCompareFunction @ 0x14073B374 (KiSystemServiceTraceTableCompareFunction.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 KiGetSystemServiceTraceTable()
{
  __int64 Pool2; // rax
  __int64 v1; // r8
  signed __int64 v2; // rdi
  __int64 (__usercall **v3)@<rax>(void *@<rcx>, void *@<rdx>, void *@<r8>, PVOID, PULONG); // r14
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 (__usercall *v6)@<rax>(void *@<rcx>, void *@<rdx>, void *@<r8>, PVOID, PULONG); // r15
  unsigned __int64 v7; // rbx
  int v8; // ebp
  unsigned __int64 v9; // rax

  if ( !KiSystemServiceTraceCallbackTable )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x7A50uLL, 0x7454694Bu);
    v2 = Pool2;
    if ( Pool2 )
    {
      v3 = &off_140B43758;
      v4 = 489LL;
      v5 = Pool2 + 40;
      do
      {
        *(_DWORD *)(v5 + 12) = *((_DWORD *)v3 - 2);
        v6 = *v3;
        *(_QWORD *)v5 = *v3;
        *(_DWORD *)(v5 + 8) = *((_DWORD *)v3 - 1);
        v7 = *(_QWORD *)v2;
        if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v7 )
          v7 ^= v2;
        LOBYTE(v1) = 0;
        v8 = *(_BYTE *)(v2 + 8) & 1;
        if ( v7 )
        {
          while ( 1 )
          {
            if ( (int)KiSystemServiceTraceTableCompareFunction(v6, v7, v1) < 0 )
            {
              v9 = *(_QWORD *)v7;
              if ( v8 )
              {
                if ( !v9 )
                  goto LABEL_19;
                v9 ^= v7;
              }
              if ( !v9 )
              {
LABEL_19:
                LOBYTE(v1) = 0;
                break;
              }
            }
            else
            {
              v9 = *(_QWORD *)(v7 + 8);
              if ( v8 )
              {
                if ( !v9 )
                  goto LABEL_13;
                v9 ^= v7;
              }
              if ( !v9 )
              {
LABEL_13:
                LOBYTE(v1) = 1;
                break;
              }
            }
            v7 = v9;
          }
        }
        RtlRbInsertNodeEx((PRTL_RB_TREE)v2, (PRTL_BALANCED_NODE)v7, v1, (PRTL_BALANCED_NODE)(v5 - 24));
        v5 += 64LL;
        v3 += 2;
        --v4;
      }
      while ( v4 );
      if ( _InterlockedCompareExchange64(&KiSystemServiceTraceCallbackTable, v2, 0LL) )
        ExFreePoolWithTag((PVOID)v2, 0x7454694Bu);
    }
  }
  return KiSystemServiceTraceCallbackTable;
}
