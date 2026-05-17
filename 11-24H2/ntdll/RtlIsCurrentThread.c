/*
 * XREFs of RtlIsCurrentThread @ 0x18010B990
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x180163060 (NtCompareObjects.c)
 */

bool __fastcall RtlIsCurrentThread(__int64 a1)
{
  return a1 == -2 || (int)NtCompareObjects(-2LL, a1) >= 0;
}
