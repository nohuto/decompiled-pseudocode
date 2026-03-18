/*
 * XREFs of Control_Transfer_CompleteCancelable @ 0x140012B50
 * Callers:
 *     Control_MapTransfer @ 0x140004680 (Control_MapTransfer.c)
 *     Control_ProcessTransferCompletion @ 0x140010798 (Control_ProcessTransferCompletion.c)
 *     Control_ProcessTransferEventWithED1 @ 0x140012540 (Control_ProcessTransferEventWithED1.c)
 *     Control_WdfEvtIoDefault @ 0x140022110 (Control_WdfEvtIoDefault.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_DDqdDD @ 0x140010ECC (WPP_RECORDER_SF_DDqdDD.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x140025C8C (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     TR_SendCompleteStageRequest @ 0x14003C940 (TR_SendCompleteStageRequest.c)
 *     WPP_RECORDER_SF_DDd @ 0x140049AD8 (WPP_RECORDER_SF_DDd.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Control_Transfer_CompleteCancelable(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // edi
  KIRQL v4; // dl
  unsigned __int64 v5; // r8
  int v6; // r9d
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // r14
  int v11; // r15d
  __int64 v12; // r13
  _QWORD *v13; // rdi
  _QWORD *v14; // rcx
  KIRQL v15; // di
  KIRQL v16; // al
  __int64 v18; // rdx
  char v19; // r8
  __int64 v20; // rdi
  KIRQL v21; // si
  struct _MDL *v22; // rcx
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  __int64 v26; // [rsp+20h] [rbp-78h]

  v1 = *(_QWORD *)(a1 + 360);
  if ( *(_DWORD *)(v1 + 112) == 1 )
  {
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 2048))(
           WdfDriverGlobals,
           *(_QWORD *)(v1 + 24));
    if ( v3 < 0 )
    {
      *(_DWORD *)(v1 + 112) = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = *(_QWORD *)(a1 + 48);
        v19 = *(_BYTE *)(v18 + 135);
        LOBYTE(v18) = 4;
        WPP_RECORDER_SF_DDd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v18,
          14,
          44,
          (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
          v19,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v3);
      }
      return (unsigned int)v3;
    }
    *(_DWORD *)(v1 + 112) = 0;
  }
  if ( *(_DWORD *)(v1 + 116) != 1 )
  {
LABEL_5:
    v4 = *(_BYTE *)(a1 + 104);
    *(_QWORD *)(a1 + 360) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
    v7 = *(_DWORD *)(v1 + 124);
    v8 = *(_QWORD *)(v1 + 48);
    if ( v7 )
    {
      if ( v7 == 28 )
      {
LABEL_7:
        *(_DWORD *)(v8 + 4) = 0;
        v9 = 0;
      }
      else
      {
        v5 = 0x140000000uLL;
        switch ( v7 )
        {
          case 0:
            *(_DWORD *)(v8 + 4) = -1;
            goto LABEL_33;
          case 1:
          case 13:
          case 26:
            goto LABEL_7;
          case 2:
            *(_DWORD *)(v8 + 4) = -1073741805;
            goto LABEL_33;
          case 3:
          case 31:
            *(_DWORD *)(v8 + 4) = -1073741806;
            v9 = -1073741823;
            break;
          case 6:
            *(_DWORD *)(v8 + 4) = -1073741820;
            v9 = -1073741823;
            break;
          case 10:
            *(_DWORD *)(v8 + 4) = -1073741803;
            goto LABEL_33;
          case 20:
            *(_DWORD *)(v8 + 4) = -1073741804;
            goto LABEL_33;
          case 23:
            *(_DWORD *)(v8 + 4) = -1073545216;
            v9 = -1073741823;
            break;
          case 27:
            *(_DWORD *)(v8 + 4) = -1073610752;
            goto LABEL_33;
          case 34:
            *(_DWORD *)(v8 + 4) = -1073741802;
            goto LABEL_33;
          case 199:
            v25 = -1073741807;
            if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x3Eu) )
              v25 = -1073709056;
            *(_DWORD *)(v8 + 4) = v25;
            goto LABEL_33;
          default:
            *(_DWORD *)(v8 + 4) = -1073741807;
LABEL_33:
            v9 = -1073741823;
            break;
        }
      }
      *(_DWORD *)(v1 + 120) = v9;
    }
    else
    {
      if ( *(_DWORD *)(v1 + 112) == 3 || *(_DWORD *)(v1 + 116) == 3 )
        *(_DWORD *)(v1 + 120) = -1073741536;
      v23 = *(_DWORD *)(v1 + 120);
      switch ( v23 )
      {
        case -1073741810:
          v24 = -1073713152;
          break;
        case -1073741670:
          v24 = -1073737728;
          break;
        case -1073741637:
          v24 = -1073738240;
          break;
        case -1073741536:
          v24 = -1073676288;
          break;
        default:
          v24 = v23 != 0 ? 0x80000300 : 0;
          break;
      }
      *(_DWORD *)(v8 + 4) = v24;
    }
    v10 = *(unsigned int *)(v1 + 108);
    v11 = *(_DWORD *)(v1 + 120);
    *(_DWORD *)(v8 + 36) = v10;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDqdDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        v5,
        v6,
        v26);
    v12 = *(_QWORD *)(v1 + 48);
    if ( *(_DWORD *)(v1 + 64) == 2 )
    {
      v13 = *(_QWORD **)(v1 + 88);
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v14 = *(_QWORD **)(a1 + 232);
      if ( *v14 != a1 + 224 )
        __fastfail(3u);
      v13[1] = v14;
      *v13 = a1 + 224;
      *v14 = v13;
      *(_QWORD *)(a1 + 232) = v13;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      *(_QWORD *)(v1 + 88) = 0LL;
    }
    else if ( *(_DWORD *)(v1 + 64) == 3 )
    {
      if ( *(_BYTE *)(a1 + 288) )
      {
        if ( *(_DWORD *)(v1 + 200) )
        {
          TR_SendCompleteStageRequest(a1);
          SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL), v1 + 168);
        }
      }
      else if ( *(_QWORD *)(v1 + 96) )
      {
        v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
        v21 = KfRaiseIrql(2u);
        (*(void (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)(v20 + 8) + 96LL))(
          v20,
          *(_QWORD *)(v1 + 96),
          (*(_BYTE *)(v12 + 32) & 1) == 0);
        KeLowerIrql(v21);
        *(_QWORD *)(v1 + 96) = 0LL;
      }
      v22 = *(struct _MDL **)(v1 + 72);
      if ( v22 && v22 != *(struct _MDL **)(v12 + 48) && v22 != *(struct _MDL **)(a1 + 120) )
      {
        IoFreeMdl(v22);
        *(_QWORD *)(v1 + 72) = 0LL;
      }
    }
    *(_BYTE *)(v1 + 16) = 0;
    v15 = KfRaiseIrql(2u);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2104))(
      WdfDriverGlobals,
      *(_QWORD *)(v1 + 24),
      (unsigned int)v11);
    KeLowerIrql(v15);
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    ++*(_DWORD *)(a1 + 248);
    *(_QWORD *)(a1 + 256) += v10;
    *(_BYTE *)(a1 + 104) = v16;
    if ( v11 < 0 )
      ++*(_DWORD *)(a1 + 252);
    return 0;
  }
  if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 352),
         0LL) )
  {
    *(_DWORD *)(v1 + 116) = 0;
    goto LABEL_5;
  }
  v3 = -1073741536;
  *(_DWORD *)(v1 + 116) = 2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xEu,
      0x2Du,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  return (unsigned int)v3;
}
