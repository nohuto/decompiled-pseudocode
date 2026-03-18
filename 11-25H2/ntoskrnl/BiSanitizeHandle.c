/*
 * XREFs of BiSanitizeHandle @ 0x1404A6620
 * Callers:
 *     BcdFlushStore @ 0x1408020A4 (BcdFlushStore.c)
 *     BiDeleteRegistryValue @ 0x140804BEC (BiDeleteRegistryValue.c)
 *     BiGetRegistryValue @ 0x140969DB4 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140969FF4 (BiOpenKey.c)
 *     BiGetKeyName @ 0x14096BB40 (BiGetKeyName.c)
 *     BiCloseStore @ 0x140A24D38 (BiCloseStore.c)
 *     BiSetRegistryValue @ 0x140A25BA8 (BiSetRegistryValue.c)
 *     BiDeleteKey @ 0x140A27140 (BiDeleteKey.c)
 *     BiEnumerateSubKeys @ 0x140A2720C (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x140A644B0 (BiCreateKey.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
