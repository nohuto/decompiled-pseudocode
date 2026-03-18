/*
 * XREFs of XilUsbDevice_QueryAttributesFromTrustlet @ 0x140039560
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x14003BDAC (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     Etw_ReportFatalError @ 0x14004F288 (Etw_ReportFatalError.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

char __fastcall XilUsbDevice_QueryAttributesFromTrustlet(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // ecx
  _UNKNOWN **v7; // rdx
  int v8; // r9d
  char v9; // al
  char v10; // cl
  __int64 v12; // [rsp+38h] [rbp-39h] BYREF
  __int128 v13; // [rsp+40h] [rbp-31h]
  __int64 v14; // [rsp+50h] [rbp-21h]
  int v15; // [rsp+58h] [rbp-19h]
  int v16; // [rsp+5Ch] [rbp-15h]
  _QWORD v17[10]; // [rsp+68h] [rbp-9h] BYREF

  memset(v17, 0, 0x48uLL);
  Pool2 = *(_QWORD *)(a1 + 672);
  v3 = *(_QWORD *)(Pool2 + 8);
  v4 = *(_QWORD *)(v3 + 112);
  if ( *(_BYTE *)(a1 + 665) )
  {
    Debug_FreAssertMsg(
      (__int64)"Secure channel must not be NULL",
      v4 != 0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
      677);
    v5 = *(_QWORD *)(a1 + 616);
    v12 = 0LL;
    v16 = 0;
    v14 = v5;
    v15 = 45;
    v13 = 0LL;
    LODWORD(Pool2) = SecureChannel_SendRequestSynchronously(v4, (GUID *)&v12, 40, (__int64)v17, 72);
    if ( (int)Pool2 >= 0 )
    {
      LOBYTE(Pool2) = v17[0];
      if ( SLODWORD(v17[0]) < 0 )
      {
        v7 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return Pool2;
        v8 = 15;
        goto LABEL_5;
      }
      LOBYTE(v6) = BYTE5(v17[0]);
      if ( WORD2(v17[0]) == 256 )
      {
        Etw_ReportFatalError(v6, v3, 0, 4149, 0LL, 0LL);
        LOBYTE(v6) = BYTE5(v17[0]);
      }
      v9 = BYTE4(v17[0]);
      *(_BYTE *)(a1 + 681) = v6;
      v10 = BYTE6(v17[0]);
      *(_BYTE *)(a1 + 680) = v9;
      LOBYTE(Pool2) = HIBYTE(v17[4]);
      *(_BYTE *)(a1 + 696) = HIBYTE(v17[4]);
      *(_BYTE *)(a1 + 682) = v10;
      if ( v10 )
      {
        Pool2 = *(_QWORD *)(a1 + 688);
        if ( Pool2 || (Pool2 = ExAllocatePool2(64LL, 32LL, 1229146200LL), (*(_QWORD *)(a1 + 688) = Pool2) != 0LL) )
        {
          *(_OWORD *)Pool2 = *(_OWORD *)((char *)v17 + 7);
          *(_OWORD *)(Pool2 + 16) = *(_OWORD *)((char *)&v17[2] + 7);
        }
      }
      if ( *(_BYTE *)(a1 + 682) )
      {
        Pool2 = *(_QWORD *)(a1 + 704);
        if ( Pool2 || (Pool2 = ExAllocatePool2(64LL, 32LL, 1229146200LL), (*(_QWORD *)(a1 + 704) = Pool2) != 0LL) )
        {
          *(_OWORD *)Pool2 = *(_OWORD *)&v17[5];
          *(_OWORD *)(Pool2 + 16) = *(_OWORD *)&v17[7];
        }
      }
    }
    else
    {
      v7 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 14;
LABEL_5:
        LOBYTE(v7) = 2;
        LOBYTE(Pool2) = WPP_RECORDER_SF_d(
                          *(_QWORD *)(v3 + 72),
                          (_DWORD)v7,
                          12,
                          v8,
                          (__int64)&WPP_d9bb91b14c983b49a4cd15189f1ffdfb_Traceguids,
                          Pool2);
      }
    }
  }
  return Pool2;
}
