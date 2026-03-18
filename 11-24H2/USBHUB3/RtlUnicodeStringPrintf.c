/*
 * XREFs of RtlUnicodeStringPrintf @ 0x14000F98C
 * Callers:
 *     HUBID_BuildClassCompatibleID @ 0x14001E3A0 (HUBID_BuildClassCompatibleID.c)
 *     HUBID_BuildContainerID @ 0x14001E8DC (HUBID_BuildContainerID.c)
 *     HUBID_BuildDeviceCompatibleID @ 0x14001EDAC (HUBID_BuildDeviceCompatibleID.c)
 *     HUBID_BuildDeviceID @ 0x14001F014 (HUBID_BuildDeviceID.c)
 *     HUBID_BuildHardwareID @ 0x14001F1AC (HUBID_BuildHardwareID.c)
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x14007EE34 (HUBFDO_MapDvsecUsb4Hosts.c)
 *     HUBFDO_RegisterSleepstudyBlockerReason @ 0x14007F4D0 (HUBFDO_RegisterSleepstudyBlockerReason.c)
 *     HUBPDO_MakePdoName @ 0x1400838B4 (HUBPDO_MakePdoName.c)
 *     HUBREG_DeleteUxdDeviceKey @ 0x1400866FC (HUBREG_DeleteUxdDeviceKey.c)
 *     HUBREG_DeleteUxdPortKey @ 0x140086860 (HUBREG_DeleteUxdPortKey.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x140087604 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 *     HUBREG_OpenPortSubkey @ 0x140087A40 (HUBREG_OpenPortSubkey.c)
 *     HUBREG_QueryUsbHardwareVerifierValue @ 0x140089248 (HUBREG_QueryUsbHardwareVerifierValue.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x140089810 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryUxdDeviceKey @ 0x14008A324 (HUBREG_QueryUxdDeviceKey.c)
 *     HUBREG_QueryUxdPortKey @ 0x14008A4A0 (HUBREG_QueryUxdPortKey.c)
 *     HUBACPI_EvaluateDSD @ 0x14008CE18 (HUBACPI_EvaluateDSD.c)
 *     FWUPDATE_AddIdsForFirmwareUpdateDevice @ 0x14008FD0C (FWUPDATE_AddIdsForFirmwareUpdateDevice.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x1400900DC (FWUPDATE_CreateFirmwareUpdateDevice.c)
 *     TUNNEL_EvtWorkitemPnpInterfaceNotification @ 0x140091B40 (TUNNEL_EvtWorkitemPnpInterfaceNotification.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  NTSTATUS v5; // ebx
  size_t v6; // rsi
  int v7; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > MaximumLength )
    return -1073741811;
  if ( MaximumLength == 0xFFFF )
    return -1073741811;
  v5 = 0;
  if ( !DestinationString->Buffer && (Length || MaximumLength) )
    return -1073741811;
  v6 = (unsigned __int64)DestinationString->MaximumLength >> 1;
  v7 = _vsnwprintf(DestinationString->Buffer, v6, pszFormat, Args);
  if ( v7 < 0 || v7 > v6 )
  {
    LOWORD(v7) = v6;
    v5 = -2147483643;
  }
  DestinationString->Length = 2 * v7;
  return v5;
}
