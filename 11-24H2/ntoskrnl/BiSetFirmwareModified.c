/*
 * XREFs of BiSetFirmwareModified @ 0x1404A7F74
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1404A7E48 (BiSetFirmwareModifiedFromObject.c)
 *     BcdCreateObject @ 0x14085E224 (BcdCreateObject.c)
 *     BiCloseStore @ 0x14085EF8C (BiCloseStore.c)
 *     BiBindEfiBootManager @ 0x1409C0574 (BiBindEfiBootManager.c)
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x140814764 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x14085DF2C (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
