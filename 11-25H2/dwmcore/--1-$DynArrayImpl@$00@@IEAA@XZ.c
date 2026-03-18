/*
 * XREFs of ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1801843B0
 * Callers:
 *     ??1CRenderData@@MEAA@XZ @ 0x1801841CC (--1CRenderData@@MEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180264D94 (--1CComposition@@MEAA@XZ.c)
 *     ??1?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x180297DF0 (--1-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??1CExpressionManager@@EEAA@XZ @ 0x180297E2C (--1CExpressionManager@@EEAA@XZ.c)
 *     ??1CExpressionValueStack@@QEAA@XZ @ 0x1802B4074 (--1CExpressionValueStack@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DynArrayImpl<1>::~DynArrayImpl<1>(__int64 a1)
{
  void *v1; // rdi
  HANDLE ProcessHeap; // rax

  v1 = *(void **)a1;
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
  {
    if ( v1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v1);
    }
    *(_QWORD *)a1 = 0LL;
  }
}
