/*
 * XREFs of PfpScenCtxStart @ 0x14073A314
 * Callers:
 *     PfInitializeSuperfetch @ 0x140C1B81C (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PfpCreateEventInternal @ 0x14073C7D0 (PfpCreateEventInternal.c)
 */

__int64 __fastcall PfpScenCtxStart(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchScenarioNotify");
  return PfpCreateEventInternal(&DestinationString, 0LL, 656LL, a1 + 64);
}
