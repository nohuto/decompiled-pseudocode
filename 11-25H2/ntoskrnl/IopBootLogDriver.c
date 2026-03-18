/*
 * XREFs of IopBootLogDriver @ 0x140592900
 * Callers:
 *     <none>
 * Callees:
 *     IopBootLog @ 0x140A76824 (IopBootLog.c)
 */

__int64 __fastcall IopBootLogDriver(__int64 a1)
{
  IopBootLog((PCUNICODE_STRING)(a1 + 72));
  return 0LL;
}
