/*
 * XREFs of BiZwEnumerateKey @ 0x1404AB2B4
 * Callers:
 *     BiEnumerateSubKeys @ 0x140A2720C (BiEnumerateSubKeys.c)
 * Callees:
 *     ZwEnumerateKey @ 0x14069B780 (ZwEnumerateKey.c)
 */

NTSTATUS __fastcall BiZwEnumerateKey(void *a1, ULONG a2, __int64 a3, void *a4, ULONG Length, PULONG ResultLength)
{
  return ZwEnumerateKey(a1, a2, KeyBasicInformation, a4, Length, ResultLength);
}
