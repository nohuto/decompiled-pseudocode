/*
 * XREFs of CmpValueEnumStackGetEntryAtLayerHeight @ 0x14083F9A0
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14046346C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x14049DE10 (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackAdvance @ 0x14083F754 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14083F8C8 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 *     CmpValueEnumStackCleanup @ 0x140973C88 (CmpValueEnumStackCleanup.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14097772C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x140977850 (CmpSortedValueEnumStackAdvanceInternal.c)
 *     CmpSortedValueEnumStackCleanup @ 0x140977AE0 (CmpSortedValueEnumStackCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpValueEnumStackGetEntryAtLayerHeight(__int64 a1, __int16 a2)
{
  if ( a2 >= 2 )
    return *(_QWORD *)(a1 + 80) + 32 * (a2 - 2LL);
  else
    return a1 + 32LL * a2 + 16;
}
