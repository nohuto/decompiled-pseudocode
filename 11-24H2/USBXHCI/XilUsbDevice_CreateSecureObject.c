/*
 * XREFs of XilUsbDevice_CreateSecureObject @ 0x14001DC0C
 * Callers:
 *     XilUsbDevice_Create @ 0x14001D9DC (XilUsbDevice_Create.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall XilUsbDevice_CreateSecureObject(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v5; // r14
  __int64 v6; // rbx
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  int v9; // edx
  int v10; // ebx
  __int128 v12; // [rsp+30h] [rbp-39h] BYREF
  int v13; // [rsp+40h] [rbp-29h]
  GUID v14[5]; // [rsp+50h] [rbp-19h] BYREF

  v13 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  v12 = 0LL;
  v5 = *(_QWORD **)(v3 + 8);
  v6 = v5[14];
  memset(v14, 0, sizeof(v14));
  v7 = *(_OWORD *)(a2 + 4);
  v14[2].Data1 = 30;
  v8 = *(_QWORD *)(a2 + 20);
  *(_QWORD *)v14[2].Data4 = v5[127];
  v14[3].Data1 = *(_DWORD *)a2;
  *(_OWORD *)&v14[3].Data2 = v7;
  *(_QWORD *)&v14[4].Data2 = v8;
  v10 = SecureChannel_SendRequestSynchronously(v6, v14, 80, (__int64)&v12, 24);
  if ( v10 >= 0 )
  {
    v10 = v12;
    if ( (int)v12 >= 0 )
    {
      *(_QWORD *)a1 = *((_QWORD *)&v12 + 1);
      *(_BYTE *)(a1 + 48) = v13;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_d(v5[9], v9, 12, 11, (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids, v12);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but UsbDeviceCreate failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
        135);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_d(v5[9], v9, 12, 10, (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids, v10);
  }
  return (unsigned int)v10;
}
