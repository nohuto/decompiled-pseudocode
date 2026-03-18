/*
 * XREFs of Isoch_ProcessTransferEventWithED1 @ 0x140016B10
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x140016AE0 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x1400130A4 (ESM_AddEvent.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1400164C0 (StageQueue_ForwardScanGetNextStage.c)
 *     Isoch_Stage_Find @ 0x140017210 (Isoch_Stage_Find.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140017F80 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_CompleteTD @ 0x140018460 (Isoch_Stage_CompleteTD.c)
 *     Isoch_MapTransfers @ 0x14001CB10 (Isoch_MapTransfers.c)
 *     Isoch_Stage_Release @ 0x140025A1C (Isoch_Stage_Release.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x140025BC8 (Isoch_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDLDDi @ 0x14002D0C4 (WPP_RECORDER_SF_DDLDDi.c)
 *     WPP_RECORDER_SF_DDi @ 0x1400370AC (WPP_RECORDER_SF_DDi.c)
 *     WPP_RECORDER_SF_DDqD @ 0x14004CA64 (WPP_RECORDER_SF_DDqD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140057938 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14005796C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED1(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int8 *v5; // r14
  KIRQL v6; // dl
  KSPIN_LOCK *v7; // rcx
  unsigned int v8; // edi
  _QWORD *v9; // r10
  unsigned __int8 v10; // cl
  unsigned __int8 *v11; // r15
  int v12; // eax
  __int64 v13; // r10
  unsigned __int8 *i; // r10
  int v16; // r9d
  int v17; // r12d
  unsigned __int8 *v18; // rdi
  int v19; // r12d
  unsigned __int8 *v20; // r10
  __int64 *v21; // r13
  __int64 *v22; // rax
  unsigned __int8 *NextStage; // rax
  unsigned __int8 *v24; // rdx
  __int64 v25; // rdx
  int v26; // eax
  unsigned __int8 *v27; // rax
  unsigned __int8 **v28; // rcx
  unsigned __int8 **v29; // rax
  __int64 v30; // rcx
  int v31; // edx
  int v32; // edx
  __int64 v33; // rax
  int v34; // r14d
  unsigned __int8 *v35; // rsi
  unsigned int v36; // edi
  __int64 v37; // rax
  int v38; // [rsp+60h] [rbp-19h]
  unsigned __int8 *v39; // [rsp+68h] [rbp-11h]
  unsigned __int8 *v40; // [rsp+70h] [rbp-9h]
  __int64 *v41; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int8 *v42; // [rsp+80h] [rbp+7h]
  __int64 v43; // [rsp+E0h] [rbp+67h] BYREF
  char v44; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int8 *v45; // [rsp+F0h] [rbp+77h] BYREF
  int v46; // [rsp+F8h] [rbp+7Fh] BYREF

  v43 = a1;
  v46 = 0;
  v3 = a1;
  v44 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v30 = *(_QWORD *)(a2 + 56);
    v31 = HIWORD(*(_DWORD *)(v3 + 12)) & 0x1F;
    LOBYTE(v31) = 5;
    WPP_RECORDER_SF_DDLDDi(*(_QWORD *)(v30 + 80), v31, *(_DWORD *)(v3 + 8) & 0xFFFFFF, 27);
  }
  if ( (*(_QWORD *)v3 & 3) == 1 )
  {
    *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    if ( *(_BYTE *)(v3 + 11) == 36 )
    {
      *(_DWORD *)(a2 + 336) |= 0x80u;
      v33 = *(_QWORD *)(a2 + 40);
      _InterlockedIncrement((volatile signed __int32 *)(v33 + 916));
      _InterlockedIncrement((volatile signed __int32 *)(v33 + 960));
      *(_BYTE *)(v33 + 872) = 1;
    }
    if ( (*(_DWORD *)(a2 + 336) & 0x40) != 0 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
      return 0;
    }
    v4 = Isoch_Stage_Find(a2, v3, v3);
    v5 = (unsigned __int8 *)v4;
    v6 = *(_BYTE *)(a2 + 104);
    v40 = (unsigned __int8 *)v4;
    v7 = (KSPIN_LOCK *)(a2 + 96);
    if ( (unsigned __int8)(*(_BYTE *)(v3 + 11) - 26) > 2u )
    {
      KeReleaseSpinLock(v7, v6);
      if ( !v5 )
        return 0;
      v17 = *(_DWORD *)(v3 + 8);
      v18 = *(unsigned __int8 **)v5;
      v42 = (unsigned __int8 *)&v41;
      v19 = v17 & 0xFFFFFF;
      v38 = v19;
      v41 = (__int64 *)&v41;
      *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      v20 = *(unsigned __int8 **)(a2 + 392);
      v45 = v20;
      if ( v20 == (unsigned __int8 *)(a2 + 392) )
        goto LABEL_31;
      do
      {
        if ( v20 == v18 )
          break;
        v24 = *(unsigned __int8 **)v20;
        v39 = *(unsigned __int8 **)v20;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = *((_QWORD *)v20 + 6);
          v26 = *(_DWORD *)(v25 + 128);
          LOBYTE(v25) = 4;
          WPP_RECORDER_SF_DDqD(
            *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
            v25,
            *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 135LL),
            23,
            (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a2 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a2 + 56) + 144LL),
            *((_QWORD *)v20 + 3),
            v26);
          v20 = v45;
          v24 = v39;
        }
        v27 = *(unsigned __int8 **)v20;
        if ( *(unsigned __int8 **)(*(_QWORD *)v20 + 8LL) != v20
          || (v28 = (unsigned __int8 **)*((_QWORD *)v20 + 1), *v28 != v20)
          || (*v28 = v27, *((_QWORD *)v27 + 1) = v28, v29 = (unsigned __int8 **)v42, *(__int64 ***)v42 != &v41) )
        {
LABEL_44:
          __fastfail(3u);
        }
        *((_QWORD *)v20 + 1) = v42;
        *(_QWORD *)v20 = &v41;
        *v29 = v20;
        v42 = v20;
        v20 = v24;
        v45 = v24;
      }
      while ( v24 != (unsigned __int8 *)(a2 + 392) );
LABEL_31:
      while ( 1 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
        v21 = v41;
        LODWORD(v45) = 0;
        if ( v41 == (__int64 *)&v41 )
          break;
        if ( (__int64 **)v41[1] != &v41 )
          goto LABEL_44;
        v22 = (__int64 *)*v41;
        if ( *(__int64 **)(*v41 + 8) != v41 )
          goto LABEL_44;
        v41 = (__int64 *)*v41;
        v22[1] = (__int64)&v41;
        v21[1] = (__int64)v21;
        *v21 = (__int64)v21;
        *((_BYTE *)v21 + 133) = *((_BYTE *)v21 + 132);
        *((_BYTE *)v21 + 134) = *((_BYTE *)v21 + 130);
        NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v21 + 128);
        if ( NextStage )
        {
          v34 = (int)v45;
          v35 = NextStage;
          do
          {
            Isoch_Stage_FreeScatterGatherList(a2, v35);
            *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
            Isoch_Stage_Release(a2, v35);
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
            ++v34;
            v35 = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v21 + 128);
          }
          while ( v35 );
          v3 = v43;
          v19 = v38;
          LODWORD(v45) = v34;
          v5 = v40;
        }
        *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
        Isoch_Transfer_CompleteCancelable(a2, (_DWORD)v21, -1, -1, 1, 0);
        *(_DWORD *)(a2 + 384) -= (_DWORD)v45;
      }
      v10 = v18[130];
      v11 = v18 + 128;
      v12 = v18[132];
      LOBYTE(v43) = 0;
      v18[133] = v12;
      v18[134] = v10;
      if ( v10 )
      {
        v13 = v12 * (unsigned int)*v11;
        v18[134] = v10 - 1;
        v18[133] = (v12 + 1) % (unsigned int)v18[129];
        for ( i = &v11[v13 + 16]; i; i = StageQueue_ForwardScanGetNextStage(v18 + 128) )
        {
          if ( i == v5 )
            break;
          LOBYTE(v16) = 1;
          *((_DWORD *)i + 12) = *((_DWORD *)i + 11) + 1;
          Isoch_Stage_CompleteTD((_DWORD)i, 23, 0, v16, (__int64)&v43, (__int64)&v45);
        }
      }
      LOBYTE(v16) = 1;
      Isoch_Stage_CompleteTD((_DWORD)v5, *(unsigned __int8 *)(v3 + 11), v19, v16, (__int64)&v44, (__int64)&v46);
    }
    else
    {
      v8 = *(_DWORD *)(a2 + 336) | 0x40;
      *(_DWORD *)(a2 + 336) = v8;
      if ( v4 )
      {
        KeReleaseSpinLock(v7, v6);
        Isoch_Stage_CompleteTD(
          (_DWORD)v5,
          HIBYTE(*(_DWORD *)(v3 + 8)),
          *(_DWORD *)(v3 + 8) & 0xFFFFFF,
          0,
          (__int64)&v44,
          (__int64)&v46);
      }
      else
      {
        v36 = (v8 >> 7) & 1;
        KeReleaseSpinLock(v7, v6);
        v37 = *(_QWORD *)(a2 + 40);
        if ( *(_DWORD *)(v37 + 644) == 1 )
          MicrosoftTelemetryAssertTriggeredArgsMsgKM(
            "USBXHCI.SYS",
            *(unsigned __int16 *)(v37 + 652) | (*(unsigned __int16 *)(v37 + 648) << 16),
            v36,
            "Stale Stopped Event With Event Data = 1 Received");
        else
          MicrosoftTelemetryAssertTriggeredMsgKM("Stale Stopped Event With Event Data = 1 Received (ACPI)");
      }
      v9 = *(_QWORD **)(a2 + 56);
      _m_prefetchw(v9 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)v9 + 8, 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *v9,
          v9[1],
          v9[3],
          0x2000000LL,
          "Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
      }
      else
      {
        _m_prefetchw(v9 + 4);
        if ( (_InterlockedXor((volatile signed __int32 *)v9 + 8, 8u) & 8) != 0 )
          ESM_AddEvent(v9 + 37, 118);
      }
    }
    if ( v44 )
    {
      _InterlockedExchange((volatile __int32 *)(a2 + 352), 1);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) != 2 )
      {
        if ( v46 || _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 4) != 4 )
          return 0;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(a2 + 328),
          0LL);
      }
      Isoch_MapTransfers(a2);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = HIBYTE(*(_DWORD *)(v3 + 12));
      LOBYTE(v32) = 2;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        v32,
        *(_QWORD *)v3,
        28,
        (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
        HIBYTE(*(_DWORD *)(v3 + 12)),
        HIWORD(*(_DWORD *)(v3 + 12)) & 0x1F,
        *(_QWORD *)v3);
    }
    Controller_ReportFatalError(*(_QWORD *)(a2 + 40), 2, 4126, 0, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56), a2);
  }
  return 0;
}
