/*
 * XREFs of PspRateControlLimitFlag @ 0x1408DE1D0
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x1408DD910 (PspEnforceLimitsJobPostCallback.c)
 *     NtQueryInformationJobObject @ 0x1409ECC70 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140AC4C00 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRateControlLimitFlag(int a1)
{
  if ( !a1 )
    return 0x100000LL;
  if ( a1 == 1 )
    return 0x80000LL;
  return 0x40000LL;
}
