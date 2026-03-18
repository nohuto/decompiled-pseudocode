/*
 * XREFs of XilCommand_SendAdvanceDequeuePointerRequest @ 0x14003ED3C
 * Callers:
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x14003E6CC (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

void __fastcall XilCommand_SendAdvanceDequeuePointerRequest(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  _UNKNOWN **v6; // rdx
  _UNKNOWN **v7; // rdx
  int v8; // [rsp+30h] [rbp-48h] BYREF
  GUID v9; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-30h]
  __int64 v11; // [rsp+50h] [rbp-28h]
  __int128 v12; // [rsp+58h] [rbp-20h]

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(v2 + 112);
  v8 = 0;
  v12 = 0LL;
  DWORD2(v12) = a2;
  v10 = 0LL;
  v11 = v3;
  v9 = 0LL;
  LODWORD(v12) = 17;
  v5 = SecureChannel_SendRequestSynchronously(v4, &v9, 48, (__int64)&v8, 4);
  if ( v5 >= 0 )
  {
    if ( v8 < 0 )
    {
      v7 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 72),
          (_DWORD)v7,
          7,
          24,
          (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
          v8);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but CommandAdvanceDequeuePointer failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
        695);
    }
  }
  else
  {
    v6 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 72),
        (_DWORD)v6,
        7,
        23,
        (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
        v5);
    }
  }
}
