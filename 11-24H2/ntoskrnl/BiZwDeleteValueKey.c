/*
 * XREFs of BiZwDeleteValueKey @ 0x1406987E4
 * Callers:
 *     BiDeleteRegistryValue @ 0x140814EA4 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x1406A8F90 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
