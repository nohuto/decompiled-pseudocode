/*
 * XREFs of BiSanitizeHandle @ 0x1404A6FD0
 * Callers:
 *     BcdFlushStore @ 0x140811C1C (BcdFlushStore.c)
 *     BiDeleteRegistryValue @ 0x140814764 (BiDeleteRegistryValue.c)
 *     BiGetRegistryValue @ 0x14085D5C8 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14085D808 (BiOpenKey.c)
 *     BiCreateKey @ 0x14085DB5C (BiCreateKey.c)
 *     BiSetRegistryValue @ 0x14085DF2C (BiSetRegistryValue.c)
 *     BiCloseStore @ 0x14085EF8C (BiCloseStore.c)
 *     BiGetKeyName @ 0x1409BEDA8 (BiGetKeyName.c)
 *     BiDeleteKey @ 0x1409BFC74 (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x1409BFD40 (BiEnumerateSubKeys.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
