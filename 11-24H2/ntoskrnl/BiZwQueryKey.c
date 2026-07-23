/*
 * XREFs of BiZwQueryKey @ 0x1404A2DC4
 * Callers:
 *     BiGetKeyName @ 0x1409A53F8 (BiGetKeyName.c)
 *     BiEnumerateSubKeys @ 0x1409A6390 (BiEnumerateSubKeys.c)
 * Callees:
 *     ZwQueryKey @ 0x1406A7670 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
