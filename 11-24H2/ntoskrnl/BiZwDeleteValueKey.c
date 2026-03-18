/*
 * XREFs of BiZwDeleteValueKey @ 0x140697764
 * Callers:
 *     BiDeleteRegistryValue @ 0x140814764 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x1406A7FF0 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
