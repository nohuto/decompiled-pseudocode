/*
 * XREFs of BiSetFirmwareModified @ 0x1404A29C4
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1404A2898 (BiSetFirmwareModifiedFromObject.c)
 *     BcdCreateObject @ 0x140859F94 (BcdCreateObject.c)
 *     BiBindEfiBootManager @ 0x1409A6BC4 (BiBindEfiBootManager.c)
 *     BiOpenSystemStore @ 0x1409A7610 (BiOpenSystemStore.c)
 *     BiCloseStore @ 0x140A81ABC (BiCloseStore.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x140814EA4 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x140859C9C (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
