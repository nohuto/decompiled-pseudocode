/*
 * XREFs of XilCommand_InitializeSecureResources @ 0x140037A5C
 * Callers:
 *     Command_Initialize @ 0x14000D7CC (Command_Initialize.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

void __fastcall XilCommand_InitializeSecureResources(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r10
  int v4; // eax
  _UNKNOWN **v5; // rdx
  _UNKNOWN **v6; // rdx
  int v7; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+38h] [rbp-40h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(v1 + 112);
  v8 = 0LL;
  v12 = 0;
  v7 = 0;
  v9 = 0LL;
  v10 = v2;
  v11 = 15;
  v4 = SecureChannel_SendRequestSynchronously(v3, (GUID *)&v8, 40, (__int64)&v7, 4);
  if ( v4 >= 0 )
  {
    if ( v7 < 0 )
    {
      v6 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v1 + 72),
          (_DWORD)v6,
          7,
          16,
          (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
          v7);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but CommandAllocateResources failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
        331);
    }
  }
  else
  {
    v5 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v1 + 72),
        (_DWORD)v5,
        7,
        15,
        (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
        v4);
    }
  }
}
