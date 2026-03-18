/*
 * XREFs of Usbh_HRS_Disabled @ 0x1400378FC
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1400376CC (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhReleaseResetLock @ 0x14003968C (UsbhReleaseResetLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_HRS_Disabled(__int64 a1, int a2)
{
  __int64 v3; // rbx
  _DWORD *v4; // rbp
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920156755, a1, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
      v3);
  v6 = v3 - 1;
  if ( !v6 )
  {
    v5 = 2;
    return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
  }
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_11;
  v8 = v7 - 1;
  if ( !v8 || (v9 = v8 - 6) == 0 )
  {
    v4[640] |= 0x10u;
LABEL_11:
    v5 = 1;
    return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
  }
  if ( (unsigned int)(v9 - 1) <= 1 )
    goto LABEL_11;
  return UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
}
