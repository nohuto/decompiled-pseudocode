/*
 * XREFs of Usbh_PCE_Check_Action @ 0x1C00356AC
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhLockPcqWithTag @ 0x1C001FF20 (UsbhLockPcqWithTag.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E98C (WPP_RECORDER_SF_dq.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0035444 (UsbhUnlockPcqWithTag.c)
 */

_DWORD *__fastcall Usbh_PCE_Check_Action(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  int v11; // r8d
  __int64 v12; // rax
  int v14; // [rsp+28h] [rbp-30h]
  KIRQL v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0;
  FdoExt(a1);
  *a4 = 0;
  Log(a1, 512, 825585712, a2, *(unsigned __int16 *)(a2 + 4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v14 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      v9,
      0x2Cu,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v14,
      a3);
  }
  v10 = UsbhLockPcqWithTag(a1, a2, 20, &v15, 0);
  v11 = v10;
  if ( v10 == 5 || v10 == 6 || v10 == 11 || v10 == 12 || v10 == 13 || (unsigned int)(v10 - 16) < 2 )
  {
    *a4 = 1;
    v12 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v11;
    *(_DWORD *)(v12 + a2 + 1384) = v11;
  }
  else
  {
    *(_DWORD *)(a2 + 12) = v10;
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1384) = v10;
    *a4 = 0;
  }
  UsbhUnlockPcqWithTag(a1, a2, v15);
  return a4;
}
