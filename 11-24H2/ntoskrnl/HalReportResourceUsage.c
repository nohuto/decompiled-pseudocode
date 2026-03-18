/*
 * XREFs of HalReportResourceUsage @ 0x140C0D6E0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     HalpInitSystemHelper @ 0x140B4B718 (HalpInitSystemHelper.c)
 *     HalpReportResourceUsage @ 0x140C0E954 (HalpReportResourceUsage.c)
 */

__int64 __fastcall HalReportResourceUsage(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  unsigned int v5; // ecx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  switch ( a1 )
  {
    case -1:
      v4 = 24;
      v5 = 23;
      return HalpInitSystemHelper(v5, v4, 0LL, a4);
    case 0:
      HalpInitSystemHelper(0x1Bu, 28, 0LL, a4);
      RtlInitUnicodeString(&DestinationString, L"ACPI x64 platform");
      return HalpReportResourceUsage(&DestinationString);
    case 1:
      v4 = 30;
      v5 = 29;
      return HalpInitSystemHelper(v5, v4, 0LL, a4);
  }
  return result;
}
