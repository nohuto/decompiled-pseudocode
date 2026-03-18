/*
 * XREFs of BiZwQueryValueKey @ 0x14049D7F4
 * Callers:
 *     BiGetRegistryValue @ 0x14085D5C8 (BiGetRegistryValue.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall BiZwQueryValueKey(
        void *a1,
        UNICODE_STRING *a2,
        __int64 a3,
        void *a4,
        ULONG Length,
        PULONG ResultLength)
{
  return ZwQueryValueKey(a1, a2, KeyValuePartialInformation, a4, Length, ResultLength);
}
