/*
 * XREFs of HalReportResourceUsage @ 0x140C0F6E0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     HalpInitSystemHelper @ 0x140B4D758 (HalpInitSystemHelper.c)
 *     HalpReportResourceUsage @ 0x140C10954 (HalpReportResourceUsage.c)
 */

__int64 __fastcall HalReportResourceUsage(int a1)
{
  int v1; // edx
  unsigned int v2; // ecx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  switch ( a1 )
  {
    case -1:
      v1 = 24;
      v2 = 23;
      return HalpInitSystemHelper(v2, v1);
    case 0:
      HalpInitSystemHelper(0x1Bu, 28);
      RtlInitUnicodeString(&DestinationString, L"ACPI x64 platform");
      return HalpReportResourceUsage(&DestinationString);
    case 1:
      v1 = 30;
      v2 = 29;
      return HalpInitSystemHelper(v2, v1);
  }
  return result;
}
