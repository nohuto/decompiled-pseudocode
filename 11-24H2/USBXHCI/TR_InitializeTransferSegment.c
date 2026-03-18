/*
 * XREFs of TR_InitializeTransferSegment @ 0x140036260
 * Callers:
 *     TR_InitializeTransferRing @ 0x14000A7FC (TR_InitializeTransferRing.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

void __fastcall TR_InitializeTransferSegment(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  int v5; // edx
  int v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+38h] [rbp-40h] BYREF
  __int128 v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]
  __int64 v12; // [rsp+60h] [rbp-18h]

  v7 = 0LL;
  v2 = *(_QWORD *)(a1 + 296);
  v11 = 0;
  v6 = 0;
  v8 = 0LL;
  v9 = v2;
  v4 = *(_QWORD *)(a2 + 24);
  v10 = 42;
  v12 = v4;
  if ( (int)SecureChannel_SendRequestSynchronously(
              *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL),
              (GUID *)&v7,
              48,
              (__int64)&v6,
              4) >= 0
    && v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        v5,
        14,
        29,
        (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
        v6);
    }
    Debug_FreAssertMsg(
      (__int64)"TransferRingInitializeSegment Failed",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2455);
  }
}
