/*
 * XREFs of Control_Transfer_Complete @ 0x140010AF0
 * Callers:
 *     Control_ProcessCanceledOnQueueTransferCompletion @ 0x14004C2D4 (Control_ProcessCanceledOnQueueTransferCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqdDD @ 0x140010ECC (WPP_RECORDER_SF_DDqdDD.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x140025C8C (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 *     TR_SendCompleteStageRequest @ 0x14003C940 (TR_SendCompleteStageRequest.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

KIRQL __fastcall Control_Transfer_Complete(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  int v5; // r9d
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // r15
  int v10; // r12d
  _QWORD *v11; // r14
  __int64 v12; // r13
  _QWORD *v13; // rdi
  _QWORD *v14; // rcx
  KIRQL v15; // bl
  KIRQL result; // al
  __int64 v17; // rdi
  KIRQL v18; // si
  struct _MDL *v19; // rcx
  int v20; // eax
  unsigned int v21; // eax
  int v22; // eax

  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  v6 = *(_DWORD *)(a2 + 124);
  v7 = *(_QWORD *)(a2 + 48);
  if ( v6 )
  {
    if ( v6 == 28 )
    {
LABEL_3:
      *(_DWORD *)(v7 + 4) = 0;
      v8 = 0;
    }
    else
    {
      v4 = 0x140000000uLL;
      switch ( v6 )
      {
        case 0:
          *(_DWORD *)(v7 + 4) = -1;
          goto LABEL_24;
        case 1:
        case 13:
        case 26:
          goto LABEL_3;
        case 2:
          *(_DWORD *)(v7 + 4) = -1073741805;
          goto LABEL_24;
        case 3:
        case 31:
          *(_DWORD *)(v7 + 4) = -1073741806;
          v8 = -1073741823;
          break;
        case 6:
          *(_DWORD *)(v7 + 4) = -1073741820;
          v8 = -1073741823;
          break;
        case 10:
          *(_DWORD *)(v7 + 4) = -1073741803;
          goto LABEL_24;
        case 20:
          *(_DWORD *)(v7 + 4) = -1073741804;
          goto LABEL_24;
        case 23:
          *(_DWORD *)(v7 + 4) = -1073545216;
          v8 = -1073741823;
          break;
        case 27:
          *(_DWORD *)(v7 + 4) = -1073610752;
          goto LABEL_24;
        case 34:
          *(_DWORD *)(v7 + 4) = -1073741802;
          goto LABEL_24;
        case 199:
          v22 = -1073741807;
          if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x3Eu) )
            v22 = -1073709056;
          *(_DWORD *)(v7 + 4) = v22;
          goto LABEL_24;
        default:
          *(_DWORD *)(v7 + 4) = -1073741807;
LABEL_24:
          v8 = -1073741823;
          break;
      }
    }
    *(_DWORD *)(a2 + 120) = v8;
  }
  else
  {
    if ( *(_DWORD *)(a2 + 112) == 3 || *(_DWORD *)(a2 + 116) == 3 )
      *(_DWORD *)(a2 + 120) = -1073741536;
    v20 = *(_DWORD *)(a2 + 120);
    switch ( v20 )
    {
      case -1073741810:
        v21 = -1073713152;
        break;
      case -1073741670:
        v21 = -1073737728;
        break;
      case -1073741637:
        v21 = -1073738240;
        break;
      case -1073741536:
        v21 = -1073676288;
        break;
      default:
        v21 = v20 != 0 ? 0x80000300 : 0;
        break;
    }
    *(_DWORD *)(v7 + 4) = v21;
  }
  v9 = *(unsigned int *)(a2 + 108);
  v10 = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(v7 + 36) = v9;
  v11 = (_QWORD *)(a2 + 24);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDqdDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v4,
      v5);
  v12 = *(_QWORD *)(a2 + 48);
  if ( *(_DWORD *)(a2 + 64) == 2 )
  {
    v13 = *(_QWORD **)(a2 + 88);
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v14 = *(_QWORD **)(a1 + 232);
    if ( *v14 != a1 + 224 )
      __fastfail(3u);
    v13[1] = v14;
    *v13 = a1 + 224;
    *v14 = v13;
    *(_QWORD *)(a1 + 232) = v13;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    *(_QWORD *)(a2 + 88) = 0LL;
  }
  else if ( *(_DWORD *)(a2 + 64) == 3 )
  {
    if ( *(_BYTE *)(a1 + 288) )
    {
      if ( *(_DWORD *)(a2 + 200) )
      {
        TR_SendCompleteStageRequest(a1);
        SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL), a2 + 168);
        v11 = (_QWORD *)(a2 + 24);
      }
    }
    else if ( *(_QWORD *)(a2 + 96) )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 96LL) + 24LL);
      v18 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(__int64, _QWORD, bool))(*(_QWORD *)(v17 + 8) + 96LL))(
        v17,
        *(_QWORD *)(a2 + 96),
        (*(_BYTE *)(v12 + 32) & 1) == 0);
      KeLowerIrql(v18);
      *(_QWORD *)(a2 + 96) = 0LL;
    }
    v19 = *(struct _MDL **)(a2 + 72);
    if ( v19 && v19 != *(struct _MDL **)(v12 + 48) && v19 != *(struct _MDL **)(a1 + 120) )
    {
      IoFreeMdl(v19);
      *(_QWORD *)(a2 + 72) = 0LL;
    }
  }
  *(_BYTE *)(a2 + 16) = 0;
  v15 = KfRaiseIrql(2u);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2104))(
    WdfDriverGlobals,
    *v11,
    (unsigned int)v10);
  KeLowerIrql(v15);
  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  ++*(_DWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 256) += v9;
  *(_BYTE *)(a1 + 104) = result;
  if ( v10 < 0 )
    ++*(_DWORD *)(a1 + 252);
  return result;
}
