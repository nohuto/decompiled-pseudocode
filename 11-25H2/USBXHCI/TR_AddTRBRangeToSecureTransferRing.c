/*
 * XREFs of TR_AddTRBRangeToSecureTransferRing @ 0x140006770
 * Callers:
 *     Control_Transfer_MapIntoRing @ 0x140004F80 (Control_Transfer_MapIntoRing.c)
 *     Bulk_Stage_MapIntoRing @ 0x1400058A0 (Bulk_Stage_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x140006F00 (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_DDd @ 0x140049AD8 (WPP_RECORDER_SF_DDd.c)
 *     WPP_RECORDER_SF_qiD @ 0x14004BFAC (WPP_RECORDER_SF_qiD.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void __fastcall TR_AddTRBRangeToSecureTransferRing(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _OWORD *a6)
{
  unsigned int v6; // edi
  unsigned int v11; // r12d
  __int64 v12; // r13
  _QWORD *v13; // r15
  _OWORD *v14; // rax
  int v15; // r15d
  _QWORD *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // r12d
  _QWORD *i; // r15
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // r8
  int v27; // [rsp+20h] [rbp-48h]
  int v28; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0;
  v28 = 0;
  if ( *(_BYTE *)(a1 + 288) )
  {
    v11 = 0;
    v12 = *(_QWORD *)(a1 + 312);
    if ( !a2 || (v13 = (_QWORD *)*a2, (_QWORD *)*a2 == a2) )
      v13 = a3;
    *(_QWORD *)(v12 + 24) = *(_QWORD *)(a1 + 296);
    *(_DWORD *)(v12 + 32) = 44;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 32) + 24LL))(a1, v12);
    *(_QWORD *)(v12 + 72) = v13[3];
    v14 = a6;
    *(_DWORD *)(v12 + 80) = a4;
    *(_OWORD *)(v12 + 40) = *v14;
    *(_OWORD *)(v12 + 56) = v14[1];
    if ( a2 )
    {
      for ( i = (_QWORD *)*a2; a2 != i; a4 = 0 )
      {
        do
        {
          if ( a4 > *(_DWORD *)(a1 + 196) )
            break;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_qiD(
              *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
              (_DWORD)a2,
              (_DWORD)a3,
              25,
              v27,
              i[2],
              i[3],
              a4);
          }
          v22 = a4++;
          v23 = i[2] + 16 * v22;
          v24 = v11++;
          *(_OWORD *)(v12 + 16 * v24 + 88) = *(_OWORD *)v23;
          if ( v11 == *(_DWORD *)(a1 + 320) )
            break;
        }
        while ( (*(_DWORD *)(v23 + 12) & 0xFC00) != 0x1800 );
        i = (_QWORD *)*i;
      }
    }
    v15 = a5;
    v16 = a3 + 3;
    while ( a4 != v15 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qiD(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL), (_DWORD)a2, (_DWORD)a3, 26, v27, a3[2], *v16, a4);
      v17 = a4++;
      v18 = a3[2] + 16 * v17;
      v19 = v11++;
      *(_OWORD *)(v12 + 16 * v19 + 88) = *(_OWORD *)v18;
      if ( v11 == *(_DWORD *)(a1 + 320) )
      {
        if ( a4 != v15 )
        {
          Debug_FreAssertMsg(
            "BUGBUG: Current TRB Index does not match expected value",
            0LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
            2319LL);
          return;
        }
        break;
      }
      if ( (*(_DWORD *)(v18 + 12) & 0xFC00) == 0x1800 )
      {
        if ( *(_QWORD *)v18 != *v16 )
        {
          Debug_FreAssertMsg(
            "BUGBUG: Link TRB in last segment does not point back to itself",
            0LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
            2300LL);
          return;
        }
        a4 = 0;
      }
      else
      {
        v16 = a3 + 3;
      }
    }
    *(_DWORD *)(v12 + 84) = v11;
    v20 = 16 * v11;
    if ( v20 + 88 >= v20 )
      v6 = v20 + 88;
    if ( (int)SecureChannel_SendRequestSynchronously(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL), v12, v6, &v28, 4) >= 0
      && v28 < 0
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = *(_QWORD *)(a1 + 48);
      v26 = *(_BYTE *)(v25 + 135);
      LOBYTE(v25) = 2;
      WPP_RECORDER_SF_DDd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v25,
        14,
        27,
        (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
        v26,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        v28);
    }
  }
}
