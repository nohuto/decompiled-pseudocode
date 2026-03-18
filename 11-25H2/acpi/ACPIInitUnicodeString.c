/*
 * XREFs of ACPIInitUnicodeString @ 0x1400BC644
 * Callers:
 *     ACPIQueryDeviceBiosNameEx @ 0x1400396E8 (ACPIQueryDeviceBiosNameEx.c)
 *     ACPIDockIrpQueryID @ 0x140099A00 (ACPIDockIrpQueryID.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x14009D610 (ExternalRequestBiosNameDeviceAssociation.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1400BC510 (AcpiGetFullyQualifiedBiosName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ACPIInitUnicodeString(PUNICODE_STRING DestinationString, const char *a2)
{
  ULONG v3; // eax
  wchar_t *Pool2; // rax
  struct _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  v3 = RtlxAnsiStringToUnicodeSize(&DestinationStringa);
  if ( v3 > 0xFFFF )
    return -1073741584;
  DestinationString->MaximumLength = v3;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v3, 1399874369LL);
  DestinationString->Buffer = Pool2;
  if ( Pool2 )
    return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 0);
  else
    return -1073741670;
}
