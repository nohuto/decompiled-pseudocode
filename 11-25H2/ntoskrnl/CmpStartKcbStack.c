/*
 * XREFs of CmpStartKcbStack @ 0x140973FB0
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407CBE24 (CmpDoBuildVirtualStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1407D4420 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140972D04 (CmpPromoteKey.c)
 *     CmpSubtreeEnumeratorStart @ 0x140973EA8 (CmpSubtreeEnumeratorStart.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 */

__int64 __fastcall CmpStartKcbStack(__int64 a1, __int16 a2)
{
  __int64 Pool; // rcx
  __int64 result; // rax

  Pool = 0LL;
  if ( a2 > 1 )
  {
    Pool = CmpAllocatePool(0x100uLL);
    if ( !Pool )
      return 3221225626LL;
  }
  *(_WORD *)(a1 + 2) = -1;
  result = 0LL;
  *(_WORD *)a1 = a2;
  *(_QWORD *)(a1 + 24) = Pool;
  return result;
}
