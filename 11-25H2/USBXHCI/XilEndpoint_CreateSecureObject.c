/*
 * XREFs of XilEndpoint_CreateSecureObject @ 0x1400467C4
 * Callers:
 *     XilEndpoint_Create @ 0x140032E00 (XilEndpoint_Create.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

__int64 __fastcall XilEndpoint_CreateSecureObject(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // edx
  int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+38h] [rbp-48h]
  GUID v12[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v13; // [rsp+60h] [rbp-20h]
  __int64 v14; // [rsp+70h] [rbp-10h]

  LODWORD(v11) = 0;
  v10 = 0LL;
  v2 = (_QWORD *)a1[4];
  v3 = *v2;
  v4 = *(_QWORD *)(*v2 + 112LL);
  v13 = 0LL;
  LODWORD(v13) = 33;
  memset(v12, 0, sizeof(v12));
  v14 = 0LL;
  v5 = v2[2];
  if ( *(_BYTE *)(v5 + 657) )
  {
    v6 = *(_QWORD *)(v5 + 608);
  }
  else
  {
    Debug_FreAssertMsg(
      (__int64)"Unexpected code path hit",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
      376);
    v6 = 0LL;
  }
  *((_QWORD *)&v13 + 1) = v6;
  LODWORD(v14) = *(_DWORD *)(a1[4] + 144LL);
  v8 = SecureChannel_SendRequestSynchronously(v4, v12, 56, (__int64)&v10, 16);
  if ( v8 >= 0 )
  {
    v8 = v10;
    if ( (int)v10 >= 0 )
    {
      *a1 = v11;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v3 + 72),
          v7,
          13,
          11,
          (__int64)&WPP_0fad196ed6f839af1910845e6c92cab5_Traceguids,
          v10);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but EndpointCreate failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
        255);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_d(*(_QWORD *)(v3 + 72), v7, 13, 10, (__int64)&WPP_0fad196ed6f839af1910845e6c92cab5_Traceguids, v8);
  }
  return (unsigned int)v8;
}
