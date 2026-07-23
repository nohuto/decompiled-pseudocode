/*
 * XREFs of CmpStartKeyNodeStack @ 0x140909054
 * Callers:
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x1409077DC (CmpGetSubKeyCountForKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140907DA0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14090804C (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140908BE8 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x140908DB0 (CmpSubtreeEnumeratorStart.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140908EB4 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStart @ 0x140908FBC (CmpKeyEnumStackStart.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpKeyNodeStackEntryInitialize @ 0x14090A4AC (CmpKeyNodeStackEntryInitialize.c)
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
    Pool = CmpAllocatePool(0x100uLL, 32LL * a2 - 32, 0x39364D43u);
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
