/*
 * XREFs of UsbhSyncResumePort @ 0x140023948
 * Callers:
 *     UsbhSyncResumeDeviceInternal @ 0x1400225DC (UsbhSyncResumeDeviceInternal.c)
 *     UsbhBusIf_ResumeChildHub @ 0x140036200 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhCycleDevicePort @ 0x140045ADC (UsbhCycleDevicePort.c)
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     UsbhPCE_Enable @ 0x140020BC8 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x140020DB0 (UsbhPCE_Resume.c)
 *     UsbhWaitForPortResume @ 0x140023B40 (UsbhWaitForPortResume.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhSyncResumePort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // si
  __int64 PortData; // rax
  __int64 v8; // rbp
  struct _KEVENT *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx

  v4 = a3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        79,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        80,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        v4);
  }
  PortData = UsbhGetPortData(a1, v4, a3, a4);
  v8 = PortData;
  if ( PortData )
  {
    v9 = (struct _KEVENT *)(PortData + 520);
    KeWaitForSingleObject((PVOID)(PortData + 520), Executive, 0, 0, 0LL);
    UsbhPCE_Resume(a1, a2, v4);
    UsbhPCE_Enable(a1, a2, v4);
    KeSetEvent(v9, 0, 0);
    v10 = *(unsigned __int16 *)(v8 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v11 = *(_QWORD *)(a1 + 64);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
          *(_DWORD *)v12 = 2018988624;
          *(_QWORD *)(v12 + 8) = 0LL;
          *(_QWORD *)(v12 + 16) = 0LL;
          *(_QWORD *)(v12 + 24) = v10;
        }
      }
    }
    v13 = UsbhWaitForPortResume(a1, v8, a2);
    if ( v13 < 0 )
      UsbhException(a1, v4, 134LL, 0LL, 0, v13, 0, usbfile_bus_c, 7196, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v13;
}
