/*
 * XREFs of CmpValueEnumStackGetEntryAtLayerHeight @ 0x14090B944
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140462AF8 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x14049CF44 (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackAdvance @ 0x14090B6F8 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14090B86C (CmpValueEnumStackMatchingValueInUpperLayer.c)
 *     CmpValueEnumStackCleanup @ 0x140914FA4 (CmpValueEnumStackCleanup.c)
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
