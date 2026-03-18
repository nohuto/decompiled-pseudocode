/*
 * XREFs of CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A28364
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140462930 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140916CB8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140916F14 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpSortedValueEnumStackGetEntryAtLayerHeight @ 0x140A285A0 (CmpSortedValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140A287B0 (CmpSortedValueEnumStackEntryStart.c)
 */

__int64 __fastcall CmpSortedValueEnumStackStartFromKeyNodeStack(__int64 a1, __int16 *a2)
{
  __int16 v2; // bx
  __int64 *EntryAtLayerHeight; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 result; // rax
  __int16 v12; // di
  __int64 Pool; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax

  v2 = *a2;
  if ( (__int16)(*a2 + 1) > 2 )
  {
    v12 = v2 - 1;
    Pool = CmpAllocatePool(0x100uLL);
    *(_QWORD *)(a1 + 80) = Pool;
    if ( !Pool )
      return 3221225626LL;
    if ( v12 > 0 )
    {
      v14 = 0LL;
      v15 = (unsigned __int16)v12;
      do
      {
        v16 = *(_QWORD *)(a1 + 80);
        *(_OWORD *)(v14 + v16) = 0LL;
        *(_OWORD *)(v14 + v16 + 16) = 0LL;
        v14 += 32LL;
        --v15;
      }
      while ( v15 );
    }
  }
  *(_WORD *)(a1 + 8) = v2;
  while ( v2 >= 0 )
  {
    EntryAtLayerHeight = (__int64 *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)a2, v2);
    CmpSortedValueEnumStackGetEntryAtLayerHeight(a1, v6);
    v7 = EntryAtLayerHeight[2];
    if ( v7 )
    {
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, v7) == 1 )
        break;
      result = CmpSortedValueEnumStackEntryStart(v10, v9, v8);
      if ( (int)result < 0 )
        return result;
      if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight, EntryAtLayerHeight[2]) )
        break;
    }
    --v2;
  }
  return 0LL;
}
