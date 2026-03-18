/*
 * XREFs of BiZwDeleteKey @ 0x1404C0234
 * Callers:
 *     BiDeleteKey @ 0x1409BFC74 (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x1406A7F90 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
