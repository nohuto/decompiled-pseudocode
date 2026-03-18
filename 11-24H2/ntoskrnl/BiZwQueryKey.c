/*
 * XREFs of BiZwQueryKey @ 0x1404A8854
 * Callers:
 *     BiGetKeyName @ 0x1409BEDA8 (BiGetKeyName.c)
 *     BiEnumerateSubKeys @ 0x1409BFD40 (BiEnumerateSubKeys.c)
 * Callees:
 *     ZwQueryKey @ 0x1406A66D0 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
