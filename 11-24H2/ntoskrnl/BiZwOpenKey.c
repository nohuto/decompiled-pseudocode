/*
 * XREFs of BiZwOpenKey @ 0x1404A0258
 * Callers:
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
 *     BiCreateKey @ 0x1408598CC (BiCreateKey.c)
 * Callees:
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
