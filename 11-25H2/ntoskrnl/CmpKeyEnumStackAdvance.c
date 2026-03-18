/*
 * XREFs of CmpKeyEnumStackAdvance @ 0x140975590
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1407D4420 (CmpPartialPromoteSubkeys.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14097451C (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpEnumerateLayeredKey @ 0x140974D5C (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140975494 (CmpSubtreeEnumeratorAdvance.c)
 * Callees:
 *     CmpKeyEnumStackAdvanceInternal @ 0x1409757D8 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x140975934 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1409759C0 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x140975C1C (CmpGetEffectiveKeyNodeSemantics.c)
 */

__int64 __fastcall CmpKeyEnumStackAdvance(__int16 *a1)
{
  __int64 result; // rax
  __int16 i; // r9
  __int64 v4; // rdx
  _QWORD *EntryAtLayerHeight; // rax
  __int16 v6; // r9
  _QWORD *v7; // r10

LABEL_1:
  while ( 1 )
  {
    result = CmpKeyEnumStackAdvanceInternal(a1);
    if ( (int)result < 0 )
      return result;
    for ( i = *a1; i >= 0; i = v6 - 1 )
    {
      CmpKeyNodeStackGetEntryAtLayerHeight(a1 + 4, (unsigned __int16)i);
      EntryAtLayerHeight = (_QWORD *)CmpKeyEnumStackGetEntryAtLayerHeight(a1, v4);
      if ( v7[2] )
      {
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v7) == 1 )
          goto LABEL_1;
        return 0LL;
      }
      if ( EntryAtLayerHeight[1] && (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight) || v6 == a1[1] )
        goto LABEL_1;
    }
  }
}
