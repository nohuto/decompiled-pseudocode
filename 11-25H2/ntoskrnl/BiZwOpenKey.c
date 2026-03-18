/*
 * XREFs of BiZwOpenKey @ 0x1404A4F5C
 * Callers:
 *     BiOpenKey @ 0x140969FF4 (BiOpenKey.c)
 *     BiCreateKey @ 0x140A644B0 (BiCreateKey.c)
 * Callees:
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
