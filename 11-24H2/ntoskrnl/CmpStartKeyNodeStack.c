/*
 * XREFs of CmpStartKeyNodeStack @ 0x1409155E4
 * Callers:
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140913D68 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140914330 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x1409145DC (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140915178 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x140915340 (CmpSubtreeEnumeratorStart.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140915444 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStart @ 0x14091554C (CmpKeyEnumStackStart.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140916A3C (CmpKeyNodeStackEntryInitialize.c)
 */

__int64 __fastcall CmpStartKeyNodeStack(__int64 a1, __int16 a2)
{
  unsigned int v3; // ebx
  __int64 Pool; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8

  v3 = 0;
  if ( a2 >= 2 )
  {
    Pool = CmpAllocatePool(0x100uLL);
    *(_QWORD *)(a1 + 72) = Pool;
    if ( !Pool )
      return (unsigned int)-1073741670;
    v7 = 0LL;
    do
    {
      CmpKeyNodeStackEntryInitialize(v7 + *(_QWORD *)(a1 + 72));
      v7 = v8 + 32;
    }
    while ( v9 != 1 );
  }
  *(_WORD *)a1 = a2;
  return v3;
}
