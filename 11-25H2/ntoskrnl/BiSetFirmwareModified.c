/*
 * XREFs of BiSetFirmwareModified @ 0x1404A75E4
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1404A74B8 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x140A24D38 (BiCloseStore.c)
 *     BiBindEfiBootManager @ 0x140A25DC8 (BiBindEfiBootManager.c)
 *     BcdCreateObject @ 0x140A26248 (BcdCreateObject.c)
 *     BiOpenSystemStore @ 0x140A26AF8 (BiOpenSystemStore.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x140804BEC (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x140A25BA8 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
