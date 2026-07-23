/*
 * XREFs of PfpScenCtxStart @ 0x140744624
 * Callers:
 *     PfInitializeSuperfetch @ 0x140C2EA3C (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PfpCreateEventInternal @ 0x140746AD0 (PfpCreateEventInternal.c)
 */

__int64 __fastcall PfpScenCtxStart(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchScenarioNotify");
  return PfpCreateEventInternal(&DestinationString, 0LL, 656LL, a1 + 64);
}
