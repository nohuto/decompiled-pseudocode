/*
 * XREFs of HalpStartPccCommand @ 0x1407041D4
 * Callers:
 *     HalpChannelPowerRequest @ 0x140703F2C (HalpChannelPowerRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     HalpUpdateCoolingPacket @ 0x140568180 (HalpUpdateCoolingPacket.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HalpAcquirePccInterface @ 0x140703E24 (HalpAcquirePccInterface.c)
 */

__int64 HalpStartPccCommand()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v5[136]; // [rsp+30h] [rbp-88h] BYREF

  DestinationString = 0LL;
  memset_0(v5, 0, 0x80uLL);
  RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\ACPI_ROOT_OBJECT");
  if ( !HalpUpdateCoolingPacket(0LL) )
  {
    if ( (int)HalpAcquirePccInterface(*(_BYTE *)(HalpAcpiMpst + 36), &DestinationString, v5) < 0 )
      return 3221225488LL;
    HalpUpdateCoolingPacket((__int64)v5);
  }
  if ( qword_140F8ECA0 )
    return guard_dispatch_icall_no_overrides(*((_QWORD *)&xmmword_140F8EC50 + 1), v0, v1, v2);
  return 3221225488LL;
}
