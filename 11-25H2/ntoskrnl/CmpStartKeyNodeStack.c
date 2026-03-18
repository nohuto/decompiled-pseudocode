/*
 * XREFs of CmpStartKeyNodeStack @ 0x1409741C0
 * Callers:
 *     CmSaveKey @ 0x1407BE3E4 (CmSaveKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140972C44 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140973184 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpSubtreeEnumeratorStart @ 0x140973EA8 (CmpSubtreeEnumeratorStart.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140974020 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStart @ 0x140974128 (CmpKeyEnumStackStart.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140975FC0 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14097648C (CmpValueEnumStackStartFromKcbStack.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x140975744 (CmpKeyNodeStackEntryInitialize.c)
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
