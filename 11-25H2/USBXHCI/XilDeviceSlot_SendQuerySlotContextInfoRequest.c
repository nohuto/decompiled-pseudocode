/*
 * XREFs of XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1400375C4
 * Callers:
 *     UsbDevice_UcxEvtReset @ 0x14002E880 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_SetAddressCompletion @ 0x140030890 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003A070 (UsbDevice_EndpointsConfigureCompletion.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

void __fastcall XilDeviceSlot_SendQuerySlotContextInfoRequest(__int64 *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  _UNKNOWN **v10; // rdx
  _UNKNOWN **v11; // rdx
  __int64 v12; // [rsp+30h] [rbp-19h] BYREF
  __int128 v13; // [rsp+38h] [rbp-11h]
  __int64 v14; // [rsp+48h] [rbp-1h]
  int v15; // [rsp+50h] [rbp+7h]
  int v16; // [rsp+54h] [rbp+Bh]
  __int64 v17; // [rsp+58h] [rbp+Fh]
  __int64 v18; // [rsp+60h] [rbp+17h] BYREF
  int v19; // [rsp+68h] [rbp+1Fh]

  v7 = *(_QWORD *)(a1[9] + 8);
  v8 = *(_QWORD *)(v7 + 112);
  v12 = 0LL;
  v16 = 0;
  v18 = 0LL;
  v19 = 0;
  v14 = *a1;
  v17 = *(_QWORD *)(a2 + 608);
  v13 = 0LL;
  v15 = 28;
  v9 = SecureChannel_SendRequestSynchronously(v8, (GUID *)&v12, 48, (__int64)&v18, 12);
  if ( v9 >= 0 )
  {
    if ( (int)v18 >= 0 )
    {
      if ( a3 )
        *a3 = HIDWORD(v18);
      if ( a4 )
        *a4 = v19;
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
          29,
          (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
          v18);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotQueryInfoFromSlotContext failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xildeviceslot.c",
        901);
    }
  }
  else
  {
    v10 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v7 + 72),
        (_DWORD)v10,
        10,
        28,
        (__int64)&WPP_d32df481b5d7314fe4e9c81d9c040203_Traceguids,
        v9);
    }
  }
}
