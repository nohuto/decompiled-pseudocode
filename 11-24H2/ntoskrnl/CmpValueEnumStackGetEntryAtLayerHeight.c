/*
 * XREFs of CmpValueEnumStackGetEntryAtLayerHeight @ 0x1408E3064
 * Callers:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140458108 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x140497C94 (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackAdvance @ 0x1408E2E18 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x1408E2F8C (CmpValueEnumStackMatchingValueInUpperLayer.c)
 *     CmpValueEnumStackCleanup @ 0x140908A14 (CmpValueEnumStackCleanup.c)
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
