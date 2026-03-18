/*
 * XREFs of CmpStartKcbStack @ 0x14086DDF0
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x1407DB5E4 (CmpDoBuildVirtualStack.c)
 *     CmpPartialPromoteSubkeys @ 0x1407E3D00 (CmpPartialPromoteSubkeys.c)
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 *     CmpSubtreeEnumeratorStart @ 0x140915340 (CmpSubtreeEnumeratorStart.c)
 *     CmpPromoteKey @ 0x1409880D8 (CmpPromoteKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
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
