/*
 * XREFs of BiZwDeleteKey @ 0x1404BB970
 * Callers:
 *     BiDeleteKey @ 0x1409A62C4 (BiDeleteKey.c)
 * Callees:
 *     ZwDeleteKey @ 0x1406A8F30 (ZwDeleteKey.c)
 */

NTSTATUS __fastcall BiZwDeleteKey(void *a1)
{
  return ZwDeleteKey(a1);
}
