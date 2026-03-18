/*
 * XREFs of CmpFindSubKeyByName @ 0x140A3D268
 * Callers:
 *     CmpGetSystemControlValues @ 0x140C48AB8 (CmpGetSystemControlValues.c)
 *     CmpFindGroupOrderList @ 0x140C4B7C0 (CmpFindGroupOrderList.c)
 *     CmpFindStateSepKeysRedirectionMapNode @ 0x140C4BA64 (CmpFindStateSepKeysRedirectionMapNode.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140C4BF4C (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpIsLoadType @ 0x140C4C108 (CmpIsLoadType.c)
 *     CmpLoadManufacturingModeNode @ 0x140C4C4A4 (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140C4C5D8 (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140C4C6C4 (CmpLoadManufacturingProfileServicesNode.c)
 *     CmpLoadServicesNode @ 0x140C4C784 (CmpLoadServicesNode.c)
 *     CmpSortDriverList @ 0x140C4C8E0 (CmpSortDriverList.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x140872180 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(ULONG_PTR a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
