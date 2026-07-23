/*
 * XREFs of ArbAddOrdering @ 0x140702644
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1407028FC (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbAddOrdering(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v7; // rax
  void *Pool2; // rax
  void *v9; // rbp
  const void *v10; // rdx

  if ( a3 < a2 )
    return 3221225485LL;
  v7 = *a1;
  if ( (_WORD)v7 == a1[1] )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL, 16 * (v7 + 8), 0x4C627241u);
    v9 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v10 = (const void *)*((_QWORD *)a1 + 1);
    if ( v10 )
    {
      memmove(Pool2, v10, 16LL * *a1);
      ExFreePoolWithTag(*((PVOID *)a1 + 1), 0);
    }
    a1[1] += 8;
    *((_QWORD *)a1 + 1) = v9;
  }
  *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL * *a1) = a2;
  *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL * (*a1)++ + 8) = a3;
  return 0LL;
}
