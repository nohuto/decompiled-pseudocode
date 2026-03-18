/*
 * XREFs of BiZwDeleteValueKey @ 0x14068C414
 * Callers:
 *     BiDeleteRegistryValue @ 0x140804BEC (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x14069CD20 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
