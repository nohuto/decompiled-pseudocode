/*
 * XREFs of BiZwEnumerateKey @ 0x1404A6AD4
 * Callers:
 *     BiEnumerateSubKeys @ 0x1409A6390 (BiEnumerateSubKeys.c)
 * Callees:
 *     ZwEnumerateKey @ 0x1406A79F0 (ZwEnumerateKey.c)
 */

NTSTATUS __fastcall BiZwEnumerateKey(void *a1, ULONG a2, __int64 a3, void *a4, ULONG Length, PULONG ResultLength)
{
  return ZwEnumerateKey(a1, a2, KeyBasicInformation, a4, Length, ResultLength);
}
