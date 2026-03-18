/*
 * XREFs of XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x140046220
 * Callers:
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x140014910 (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     XilDeviceSlot_QueryEndpointContextInfo @ 0x140015550 (XilDeviceSlot_QueryEndpointContextInfo.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

void __fastcall XilDeviceSlot_SendQueryEndpointContextInfoRequest(
        __int64 *a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  _UNKNOWN **v11; // rdx
  _UNKNOWN **v12; // rdx
  GUID v13; // [rsp+30h] [rbp-21h] BYREF
  __int64 v14; // [rsp+40h] [rbp-11h]
  __int64 v15; // [rsp+48h] [rbp-9h]
  __int128 v16; // [rsp+50h] [rbp-1h]
  __int64 v17; // [rsp+60h] [rbp+Fh]
  __int128 v18; // [rsp+68h] [rbp+17h] BYREF

  v7 = *(_QWORD *)(a1[9] + 8);
  v8 = *(_QWORD *)(v7 + 112);
  v17 = 0LL;
  v9 = *a1;
  v16 = 0LL;
  LODWORD(v17) = a3;
  v14 = 0LL;
  v15 = v9;
  *((_QWORD *)&v16 + 1) = *(_QWORD *)(a2 + 608);
  v13 = 0LL;
  LODWORD(v16) = 29;
  v18 = 0LL;
  v10 = SecureChannel_SendRequestSynchronously(v8, &v13, 56, (__int64)&v18, 16);
  if ( v10 >= 0 )
  {
    if ( (int)v18 >= 0 )
    {
      if ( a4 )
        *a4 = DWORD1(v18);
      if ( a5 )
        *a5 = *((_QWORD *)&v18 + 1);
    }
    else
    {
      v12 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v7 + 72),
          (_DWORD)v12,
          10,
          31,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v18);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotQueryInfoFromEndpointContext failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        1035);
    }
  }
  else
  {
    v11 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v7 + 72),
        (_DWORD)v11,
        10,
        30,
        (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
        v10);
    }
  }
}
