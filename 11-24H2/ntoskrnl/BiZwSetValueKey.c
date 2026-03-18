/*
 * XREFs of BiZwSetValueKey @ 0x1404B2108
 * Callers:
 *     BiSetRegistryValue @ 0x14085DF2C (BiSetRegistryValue.c)
 * Callees:
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall BiZwSetValueKey(void *a1, UNICODE_STRING *a2, __int64 a3, ULONG a4, PVOID Data, ULONG DataSize)
{
  return ZwSetValueKey(a1, a2, 0, a4, Data, DataSize);
}
