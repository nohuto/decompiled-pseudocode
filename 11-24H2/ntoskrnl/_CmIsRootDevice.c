/*
 * XREFs of _CmIsRootDevice @ 0x140926C14
 * Callers:
 *     PiDcResetChildDeviceContainerCallback @ 0x140727980 (PiDcResetChildDeviceContainerCallback.c)
 *     PiCMDeleteDeviceWorker @ 0x1407310F0 (PiCMDeleteDeviceWorker.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1408BE750 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetDeviceParent @ 0x140926998 (_CmGetDeviceParent.c)
 *     _CmUpdateDevicePanel @ 0x14098EE00 (_CmUpdateDevicePanel.c)
 *     _CmSetDeviceRegPropWorker @ 0x140990F90 (_CmSetDeviceRegPropWorker.c)
 *     _CmSetDeviceMappedProperty @ 0x140995AA0 (_CmSetDeviceMappedProperty.c)
 *     PiCMDeviceAction @ 0x140A85618 (PiCMDeviceAction.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140ABB70C (PiCMQueryRemove.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlEqualUnicodeString(&DestinationString, &stru_140002170, 1u);
}
