/*
 * XREFs of UsbhRemoveQueuedSuspend @ 0x140043BAC
 * Callers:
 *     Usbh_PCE_wChange_Action @ 0x1400017C0 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x140002820 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x140011580 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_HardwareWake_Action @ 0x140032C44 (Usbh_PCE_HardwareWake_Action.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhiSignalSuspendEvent @ 0x14002BDEC (UsbhiSignalSuspendEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhRemoveQueuedSuspend(__int64 a1, __int64 a2)
{
  __int16 v4; // r9
  __int64 result; // rax
  _QWORD *i; // r10
  _QWORD *v7; // r10
  void *v8; // r11
  __int64 v9; // r8
  _QWORD *v10; // rax
  int v11; // [rsp+28h] [rbp-10h]

  Log(a1, 512, 1969836099, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) != v4 )
  {
    v11 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x56u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v11);
  }
  FdoExt(a1);
  result = a2 + 456;
  for ( i = *(_QWORD **)(a2 + 456); i != (_QWORD *)result; i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i - 2) == 0x40000 )
    {
      Log(a1, 512, 1718375253, a2, (__int64)(i - 2));
      v9 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v10 = (_QWORD *)v7[1], (_QWORD *)*v10 != v7) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      ExFreePoolWithTag(v8, 0);
      return UsbhiSignalSuspendEvent(a1, a2);
    }
  }
  return result;
}
