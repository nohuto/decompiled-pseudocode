/*
 * XREFs of RtlUnicodeStringPrintf @ 0x14000F93C
 * Callers:
 *     HUBID_BuildClassCompatibleID @ 0x14001E360 (HUBID_BuildClassCompatibleID.c)
 *     HUBID_BuildContainerID @ 0x14001E89C (HUBID_BuildContainerID.c)
 *     HUBID_BuildDeviceCompatibleID @ 0x14001ED6C (HUBID_BuildDeviceCompatibleID.c)
 *     HUBID_BuildDeviceID @ 0x14001EFD4 (HUBID_BuildDeviceID.c)
 *     HUBID_BuildHardwareID @ 0x14001F16C (HUBID_BuildHardwareID.c)
 *     HUBFDO_MapDvsecUsb4Hosts @ 0x14007FD00 (HUBFDO_MapDvsecUsb4Hosts.c)
 *     HUBFDO_RegisterSleepstudyBlockerReason @ 0x14008039C (HUBFDO_RegisterSleepstudyBlockerReason.c)
 *     HUBPDO_MakePdoName @ 0x140084984 (HUBPDO_MakePdoName.c)
 *     HUBREG_DeleteUxdDeviceKey @ 0x1400877B4 (HUBREG_DeleteUxdDeviceKey.c)
 *     HUBREG_DeleteUxdPortKey @ 0x140087918 (HUBREG_DeleteUxdPortKey.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1400886B4 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 *     HUBREG_OpenPortSubkey @ 0x140088AF0 (HUBREG_OpenPortSubkey.c)
 *     HUBREG_QueryUsbHardwareVerifierValue @ 0x14008A2F8 (HUBREG_QueryUsbHardwareVerifierValue.c)
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x14008A8C0 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryUxdDeviceKey @ 0x14008B3D4 (HUBREG_QueryUxdDeviceKey.c)
 *     HUBREG_QueryUxdPortKey @ 0x14008B550 (HUBREG_QueryUxdPortKey.c)
 *     HUBACPI_EvaluateDSD @ 0x14008DEC8 (HUBACPI_EvaluateDSD.c)
 *     FWUPDATE_AddIdsForFirmwareUpdateDevice @ 0x1400906DC (FWUPDATE_AddIdsForFirmwareUpdateDevice.c)
 *     FWUPDATE_CreateFirmwareUpdateDevice @ 0x140090AAC (FWUPDATE_CreateFirmwareUpdateDevice.c)
 *     TUNNEL_EvtWorkitemPnpInterfaceNotification @ 0x140092510 (TUNNEL_EvtWorkitemPnpInterfaceNotification.c)
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
