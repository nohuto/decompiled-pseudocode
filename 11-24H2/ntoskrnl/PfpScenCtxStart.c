/*
 * XREFs of PfpScenCtxStart @ 0x140746334
 * Callers:
 *     PfInitializeSuperfetch @ 0x140C2C91C (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     PfpCreateEventInternal @ 0x1407487E0 (PfpCreateEventInternal.c)
 */

__int64 __fastcall PfpScenCtxStart(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchScenarioNotify");
  return PfpCreateEventInternal(&DestinationString, 0LL, 656LL, a1 + 64);
}
