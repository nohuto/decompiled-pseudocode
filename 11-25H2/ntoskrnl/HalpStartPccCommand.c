/*
 * XREFs of HalpStartPccCommand @ 0x1406F82F4
 * Callers:
 *     HalpChannelPowerRequest @ 0x1406F804C (HalpChannelPowerRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     HalpUpdateCoolingPacket @ 0x1405655B0 (HalpUpdateCoolingPacket.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HalpAcquirePccInterface @ 0x1406F7F44 (HalpAcquirePccInterface.c)
 */

__int64 HalpStartPccCommand()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v2[136]; // [rsp+30h] [rbp-88h] BYREF

  DestinationString = 0LL;
  memset_0(v2, 0, 0x80uLL);
  RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\ACPI_ROOT_OBJECT");
  if ( !HalpUpdateCoolingPacket(0LL) )
  {
    if ( (int)HalpAcquirePccInterface(*(_BYTE *)(HalpAcpiMpst + 36), &DestinationString, v2) < 0 )
      return 3221225488LL;
    HalpUpdateCoolingPacket((__int64)v2);
  }
  if ( qword_140F8E500 )
    return guard_dispatch_icall_no_overrides(*((_QWORD *)&xmmword_140F8E4B0 + 1));
  return 3221225488LL;
}
