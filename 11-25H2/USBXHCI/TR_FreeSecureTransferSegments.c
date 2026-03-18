/*
 * XREFs of TR_FreeSecureTransferSegments @ 0x14004BC08
 * Callers:
 *     TR_Disable_Internal @ 0x140010848 (TR_Disable_Internal.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

void __fastcall TR_FreeSecureTransferSegments(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // edx
  int v7; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+38h] [rbp-40h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  __int64 v13; // [rsp+60h] [rbp-18h]

  v8 = 0LL;
  v1 = a1[37];
  v12 = 0;
  v7 = 0;
  v9 = 0LL;
  v10 = v1;
  v3 = a1[22];
  v11 = 41;
  v4 = *(_QWORD *)(v3 + 24);
  v5 = a1[5];
  v13 = v4;
  if ( (int)SecureChannel_SendRequestSynchronously(*(_QWORD *)(v5 + 112), (GUID *)&v8, 48, (__int64)&v7, 4) >= 0
    && v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[5] + 72LL),
        v6,
        14,
        28,
        (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
        v7);
    }
    Debug_FreAssertMsg(
      (__int64)"TransferRingFreeSegments Failed",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2402);
  }
}
