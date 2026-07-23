/*
 * XREFs of HalpStartPccCommand @ 0x140701D94
 * Callers:
 *     HalpChannelPowerRequest @ 0x140701AEC (HalpChannelPowerRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     HalpUpdateCoolingPacket @ 0x140565C70 (HalpUpdateCoolingPacket.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HalpAcquirePccInterface @ 0x1407019E4 (HalpAcquirePccInterface.c)
 */

__int64 HalpStartPccCommand()
{
  __int64 v0; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v3[136]; // [rsp+30h] [rbp-88h] BYREF

  DestinationString = 0LL;
  memset_0(v3, 0, 0x80uLL);
  RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\ACPI_ROOT_OBJECT");
  if ( !HalpUpdateCoolingPacket(0LL) )
  {
    if ( (int)HalpAcquirePccInterface(*(_BYTE *)(HalpAcpiMpst + 36), &DestinationString, v3) < 0 )
      return 3221225488LL;
    HalpUpdateCoolingPacket((__int64)v3);
  }
  if ( qword_140F8EEA0 )
    return guard_dispatch_icall_no_overrides(*((_QWORD *)&xmmword_140F8EE50 + 1), v0);
  return 3221225488LL;
}
