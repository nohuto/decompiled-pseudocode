/*
 * XREFs of XilDeviceSlot_SendClearDeviceContextRequest @ 0x14000159C
 * Callers:
 *     UsbDevice_DisableCompletion @ 0x140001D68 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x140002568 (UsbDevice_SetDeviceDisabled.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

__int64 __fastcall XilDeviceSlot_SendClearDeviceContextRequest(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 result; // rax
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
  v5 = *(_QWORD *)(a2 + 616);
  v13 = 27;
  v15 = v5;
  result = SecureChannel_SendRequestSynchronously(v4, &v10, 48LL, &v9, 4);
  if ( (int)result >= 0 )
  {
    result = (unsigned int)v9;
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
      return Debug_FreAssertMsg(
               "IOCTL succeeded but DeviceSlotClearDeviceContext failed in VTL-1 failed",
               0LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
               785LL);
    }
  }
  else
  {
    v7 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(v2 + 72),
               (_DWORD)v7,
               10,
               26,
               (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
               result);
    }
  }
  return result;
}
