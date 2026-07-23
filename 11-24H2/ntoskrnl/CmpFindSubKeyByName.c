/*
 * XREFs of CmpFindSubKeyByName @ 0x140A32B78
 * Callers:
 *     CmpGetSystemControlValues @ 0x140C4ABDC (CmpGetSystemControlValues.c)
 *     CmpFindGroupOrderList @ 0x140C4D95C (CmpFindGroupOrderList.c)
 *     CmpFindStateSepKeysRedirectionMapNode @ 0x140C4DC00 (CmpFindStateSepKeysRedirectionMapNode.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140C4E0E8 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpIsLoadType @ 0x140C4E2A4 (CmpIsLoadType.c)
 *     CmpLoadManufacturingModeNode @ 0x140C4E640 (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140C4E774 (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140C4E860 (CmpLoadManufacturingProfileServicesNode.c)
 *     CmpLoadServicesNode @ 0x140C4E920 (CmpLoadServicesNode.c)
 *     CmpSortDriverList @ 0x140C4EA7C (CmpSortDriverList.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x1408764B0 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(ULONG_PTR a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
