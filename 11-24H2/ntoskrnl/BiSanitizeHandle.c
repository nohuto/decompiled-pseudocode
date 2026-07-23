/*
 * XREFs of BiSanitizeHandle @ 0x1404A1930
 * Callers:
 *     BcdFlushStore @ 0x14081235C (BcdFlushStore.c)
 *     BiDeleteRegistryValue @ 0x140814EA4 (BiDeleteRegistryValue.c)
 *     BiGetRegistryValue @ 0x140859338 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
 *     BiCreateKey @ 0x1408598CC (BiCreateKey.c)
 *     BiSetRegistryValue @ 0x140859C9C (BiSetRegistryValue.c)
 *     BiGetKeyName @ 0x1409A53F8 (BiGetKeyName.c)
 *     BiDeleteKey @ 0x1409A62C4 (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x1409A6390 (BiEnumerateSubKeys.c)
 *     BiCloseStore @ 0x140A81ABC (BiCloseStore.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
