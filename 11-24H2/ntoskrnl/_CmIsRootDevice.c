/*
 * XREFs of _CmIsRootDevice @ 0x140928D54
 * Callers:
 *     PiDcResetChildDeviceContainerCallback @ 0x140725510 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMDeleteDeviceWorker @ 0x14072F100 (PiCMDeleteDeviceWorker.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1408BC0A0 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetDeviceParent @ 0x140928AD8 (_CmGetDeviceParent.c)
 *     _CmUpdateDevicePanel @ 0x140979E38 (_CmUpdateDevicePanel.c)
 *     _CmSetDeviceRegPropWorker @ 0x14097BFD0 (_CmSetDeviceRegPropWorker.c)
 *     _CmSetDeviceMappedProperty @ 0x140980AE0 (_CmSetDeviceMappedProperty.c)
 *     PiCMDeviceAction @ 0x140A80158 (PiCMDeviceAction.c)
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140AB672C (PiCMQueryRemove.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlEqualUnicodeString(&DestinationString, &stru_140002270, 1u);
}
