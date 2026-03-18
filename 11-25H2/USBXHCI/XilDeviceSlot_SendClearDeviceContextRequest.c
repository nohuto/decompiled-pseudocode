/*
 * XREFs of XilDeviceSlot_SendClearDeviceContextRequest @ 0x14002CAFC
 * Callers:
 *     UsbDevice_SetDeviceDisabled @ 0x14000E7F4 (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_DisableCompletion @ 0x14002C738 (UsbDevice_DisableCompletion.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

void __fastcall XilDeviceSlot_SendClearDeviceContextRequest(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rax
  int v6; // eax
  _UNKNOWN **v7; // rdx
  _UNKNOWN **v8; // rdx
  int v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h] BYREF
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]
  __int64 v15; // [rsp+60h] [rbp-18h]

  v2 = *(_QWORD *)(a1[9] + 8);
  v3 = *a1;
  v4 = *(_QWORD *)(v2 + 112);
  v10 = 0LL;
  v14 = 0;
  v9 = 0;
  v11 = 0LL;
  v12 = v3;
  v5 = *(_QWORD *)(a2 + 608);
  v13 = 27;
  v15 = v5;
  v6 = SecureChannel_SendRequestSynchronously(v4, (GUID *)&v10, 48, (__int64)&v9, 4);
  if ( v6 >= 0 )
  {
    if ( v9 < 0 )
    {
      v8 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 72),
          (_DWORD)v8,
          10,
          27,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v9);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotClearDeviceContext failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        785);
    }
  }
  else
  {
    v7 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 72),
        (_DWORD)v7,
        10,
        26,
        (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
        v6);
    }
  }
}
