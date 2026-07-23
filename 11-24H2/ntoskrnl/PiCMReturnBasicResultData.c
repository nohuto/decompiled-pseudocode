/*
 * XREFs of PiCMReturnBasicResultData @ 0x1408BCA94
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406F62B8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x1406F63C0 (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x1406F6578 (PiCMDeleteDevice.c)
 *     PiCMValidateDeviceInstance @ 0x1408BBC4C (PiCMValidateDeviceInstance.c)
 *     PiCMSetRegistryProperty @ 0x1409CD848 (PiCMSetRegistryProperty.c)
 *     PiCMSetObjectProperty @ 0x1409EFF1C (PiCMSetObjectProperty.c)
 *     PiCMDeviceAction @ 0x140A80158 (PiCMDeviceAction.c)
 *     PiCMDeleteDeviceKey @ 0x140AB7F94 (PiCMDeleteDeviceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABB188 (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140ABB8E4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140ABBA14 (PiCMDeleteObject.c)
 *     PiCMSetDeviceProblem @ 0x140ABC210 (PiCMSetDeviceProblem.c)
 * Callees:
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnBasicResultData(int a1, int a2, _QWORD *a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-18h]

  *a5 = 0;
  v6 = 0;
  if ( a4 >= 8 && a2 == 8 )
  {
    LODWORD(v8) = 8;
    HIDWORD(v8) = a1;
    ProbeForWrite(a3, a4, 4u);
    *a3 = v8;
    *a5 = 8;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
