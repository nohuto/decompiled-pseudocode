/*
 * XREFs of BiZwDeleteKey @ 0x1404C1BD4
 * Callers:
 *     BiDeleteKey @ 0x140A27140 (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x14069CCC0 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
