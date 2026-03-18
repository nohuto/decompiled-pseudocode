/*
 * XREFs of CmpFindSubKeyByName @ 0x140A366A8
 * Callers:
 *     CmpGetSystemControlValues @ 0x140C377A8 (CmpGetSystemControlValues.c)
 *     CmpFindGroupOrderList @ 0x140C3A4C4 (CmpFindGroupOrderList.c)
 *     CmpFindStateSepKeysRedirectionMapNode @ 0x140C3A768 (CmpFindStateSepKeysRedirectionMapNode.c)
 *     CmpGetStateSepKeysRedirectionPathValue @ 0x140C3AC50 (CmpGetStateSepKeysRedirectionPathValue.c)
 *     CmpIsLoadType @ 0x140C3AE0C (CmpIsLoadType.c)
 *     CmpLoadManufacturingModeNode @ 0x140C3B1A8 (CmpLoadManufacturingModeNode.c)
 *     CmpLoadManufacturingProfileNode @ 0x140C3B2DC (CmpLoadManufacturingProfileNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140C3B3C8 (CmpLoadManufacturingProfileServicesNode.c)
 *     CmpLoadServicesNode @ 0x140C3B488 (CmpLoadServicesNode.c)
 *     CmpSortDriverList @ 0x140C3B5E4 (CmpSortDriverList.c)
 * Callees:
 *     CmpFindSubKeyByNameWithStatus @ 0x140875D60 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyByName(ULONG_PTR a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v4; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0;
  CmpFindSubKeyByNameWithStatus(a1, a2, a3, &v4);
  return v4;
}
