/*
 * XREFs of Isoch_ProcessTransferEventWithED1 @ 0x140011400
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x1400113D0 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x140006A44 (ESM_AddEvent.c)
 *     Isoch_MapTransfers @ 0x14000DF10 (Isoch_MapTransfers.c)
 *     Isoch_Stage_CompleteTD @ 0x140010440 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140010D60 (Isoch_Transfer_CompleteCancelable.c)
 *     Isoch_Stage_Find @ 0x140011B00 (Isoch_Stage_Find.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x140012400 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDLDDi @ 0x1400138A0 (WPP_RECORDER_SF_DDLDDi.c)
 *     Isoch_Stage_Release @ 0x140022B24 (Isoch_Stage_Release.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x140022CD0 (Isoch_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDi @ 0x1400355FC (WPP_RECORDER_SF_DDi.c)
 *     WPP_RECORDER_SF_DDqD @ 0x14004C154 (WPP_RECORDER_SF_DDqD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140056D58 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x140056D8C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
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
  __int64 i; // r10
  int v16; // r12d
  unsigned __int8 *v17; // rdi
  unsigned int v18; // r12d
  unsigned __int8 *v19; // r10
  __int64 *v20; // r13
  __int64 *v21; // rax
  __int64 NextStage; // rax
  unsigned __int8 *v23; // rdx
  __int64 v24; // rdx
  int v25; // eax
  unsigned __int8 *v26; // rax
  unsigned __int8 **v27; // rcx
  unsigned __int8 **v28; // rax
  __int64 v29; // rcx
  int v30; // edx
  int v31; // edx
  __int64 v32; // rax
  int v33; // r14d
  __int64 v34; // rsi
  unsigned int v35; // edi
  __int64 v36; // rax
  unsigned int v37; // [rsp+60h] [rbp-19h]
  unsigned __int8 *v38; // [rsp+68h] [rbp-11h]
  unsigned __int8 *v39; // [rsp+70h] [rbp-9h]
  __int64 *v40; // [rsp+78h] [rbp-1h] BYREF
  unsigned __int8 *v41; // [rsp+80h] [rbp+7h]
  __int64 v42; // [rsp+E0h] [rbp+67h] BYREF
  char v43; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned __int8 *v44; // [rsp+F0h] [rbp+77h] BYREF
  int v45; // [rsp+F8h] [rbp+7Fh] BYREF

  v42 = a1;
  v45 = 0;
  v3 = a1;
  v43 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v29 = *(_QWORD *)(a2 + 56);
    v30 = HIWORD(*(_DWORD *)(v3 + 12)) & 0x1F;
    LOBYTE(v30) = 5;
    WPP_RECORDER_SF_DDLDDi(*(_QWORD *)(v29 + 80), v30, *(_DWORD *)(v3 + 8) & 0xFFFFFF, 27);
  }
  if ( (*(_QWORD *)v3 & 3) == 1 )
  {
    *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    if ( *(_BYTE *)(v3 + 11) == 36 )
    {
      *(_DWORD *)(a2 + 336) |= 0x80u;
      v32 = *(_QWORD *)(a2 + 40);
      _InterlockedIncrement((volatile signed __int32 *)(v32 + 916));
      _InterlockedIncrement((volatile signed __int32 *)(v32 + 960));
      *(_BYTE *)(v32 + 872) = 1;
    }
    if ( (*(_DWORD *)(a2 + 336) & 0x40) != 0 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
      return 0;
    }
    v4 = Isoch_Stage_Find(a2, v3, v3);
    v5 = (unsigned __int8 *)v4;
    v6 = *(_BYTE *)(a2 + 104);
    v39 = (unsigned __int8 *)v4;
    v7 = (KSPIN_LOCK *)(a2 + 96);
    if ( (unsigned __int8)(*(_BYTE *)(v3 + 11) - 26) > 2u )
    {
      KeReleaseSpinLock(v7, v6);
      if ( !v5 )
        return 0;
      v16 = *(_DWORD *)(v3 + 8);
      v17 = *(unsigned __int8 **)v5;
      v41 = (unsigned __int8 *)&v40;
      v18 = v16 & 0xFFFFFF;
      v37 = v18;
      v40 = (__int64 *)&v40;
      *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      v19 = *(unsigned __int8 **)(a2 + 392);
      v44 = v19;
      if ( v19 == (unsigned __int8 *)(a2 + 392) )
        goto LABEL_31;
      do
      {
        if ( v19 == v17 )
          break;
        v23 = *(unsigned __int8 **)v19;
        v38 = *(unsigned __int8 **)v19;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = *((_QWORD *)v19 + 6);
          v25 = *(_DWORD *)(v24 + 128);
          LOBYTE(v24) = 4;
          WPP_RECORDER_SF_DDqD(
            *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
            v24,
            *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 143LL),
            23,
            (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a2 + 48) + 143LL),
            *(_DWORD *)(*(_QWORD *)(a2 + 56) + 152LL),
            *((_QWORD *)v19 + 3),
            v25);
          v19 = v44;
          v23 = v38;
        }
        v26 = *(unsigned __int8 **)v19;
        if ( *(unsigned __int8 **)(*(_QWORD *)v19 + 8LL) != v19
          || (v27 = (unsigned __int8 **)*((_QWORD *)v19 + 1), *v27 != v19)
          || (*v27 = v26, *((_QWORD *)v26 + 1) = v27, v28 = (unsigned __int8 **)v41, *(__int64 ***)v41 != &v40) )
        {
LABEL_44:
          __fastfail(3u);
        }
        *((_QWORD *)v19 + 1) = v41;
        *(_QWORD *)v19 = &v40;
        *v28 = v19;
        v41 = v19;
        v19 = v23;
        v44 = v23;
      }
      while ( v23 != (unsigned __int8 *)(a2 + 392) );
LABEL_31:
      while ( 1 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
        v20 = v40;
        LODWORD(v44) = 0;
        if ( v40 == (__int64 *)&v40 )
          break;
        if ( (__int64 **)v40[1] != &v40 )
          goto LABEL_44;
        v21 = (__int64 *)*v40;
        if ( *(__int64 **)(*v40 + 8) != v40 )
          goto LABEL_44;
        v40 = (__int64 *)*v40;
        v21[1] = (__int64)&v40;
        v20[1] = (__int64)v20;
        *v20 = (__int64)v20;
        *((_BYTE *)v20 + 133) = *((_BYTE *)v20 + 132);
        *((_BYTE *)v20 + 134) = *((_BYTE *)v20 + 130);
        NextStage = StageQueue_ForwardScanGetNextStage(v20 + 16);
        if ( NextStage )
        {
          v33 = (int)v44;
          v34 = NextStage;
          do
          {
            Isoch_Stage_FreeScatterGatherList(a2, v34);
            *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
            Isoch_Stage_Release(a2, v34);
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
            ++v33;
            v34 = StageQueue_ForwardScanGetNextStage(v20 + 16);
          }
          while ( v34 );
          v3 = v42;
          v18 = v37;
          LODWORD(v44) = v33;
          v5 = v39;
        }
        *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
        Isoch_Transfer_CompleteCancelable(a2, v20, -1, -1, 1, 0);
        *(_DWORD *)(a2 + 384) -= (_DWORD)v44;
      }
      v10 = v17[130];
      v11 = v17 + 128;
      v12 = v17[132];
      LOBYTE(v42) = 0;
      v17[133] = v12;
      v17[134] = v10;
      if ( v10 )
      {
        v13 = v12 * (unsigned int)*v11;
        v17[134] = v10 - 1;
        v17[133] = (v12 + 1) % (unsigned int)v17[129];
        for ( i = (__int64)&v11[v13 + 16]; i; i = StageQueue_ForwardScanGetNextStage(v17 + 128) )
        {
          if ( (unsigned __int8 *)i == v5 )
            break;
          *(_DWORD *)(i + 48) = *(_DWORD *)(i + 44) + 1;
          Isoch_Stage_CompleteTD((unsigned __int8 *)i, 23, 0LL, 1, &v42, &v44);
        }
      }
      Isoch_Stage_CompleteTD(v5, *(unsigned __int8 *)(v3 + 11), v18, 1, &v43, &v45);
    }
    else
    {
      v8 = *(_DWORD *)(a2 + 336) | 0x40;
      *(_DWORD *)(a2 + 336) = v8;
      if ( v4 )
      {
        KeReleaseSpinLock(v7, v6);
        Isoch_Stage_CompleteTD(v5, HIBYTE(*(_DWORD *)(v3 + 8)), *(_DWORD *)(v3 + 8) & 0xFFFFFF, 0, &v43, &v45);
      }
      else
      {
        v35 = (v8 >> 7) & 1;
        KeReleaseSpinLock(v7, v6);
        v36 = *(_QWORD *)(a2 + 40);
        if ( *(_DWORD *)(v36 + 644) == 1 )
          MicrosoftTelemetryAssertTriggeredArgsMsgKM(
            "USBXHCI.SYS",
            *(unsigned __int16 *)(v36 + 652) | (*(unsigned __int16 *)(v36 + 648) << 16),
            v35,
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
          ESM_AddEvent(v9 + 38, 118);
      }
    }
    if ( v43 )
    {
      _InterlockedExchange((volatile __int32 *)(a2 + 352), 1);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) != 2 )
      {
        if ( v45 || _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 4) != 4 )
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
      v31 = HIBYTE(*(_DWORD *)(v3 + 12));
      LOBYTE(v31) = 2;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        v31,
        *(_QWORD *)v3,
        28,
        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
        HIBYTE(*(_DWORD *)(v3 + 12)),
        HIWORD(*(_DWORD *)(v3 + 12)) & 0x1F,
        *(_QWORD *)v3);
    }
    Controller_ReportFatalError(*(_QWORD *)(a2 + 40), 2, 4126, 0, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56), a2);
  }
  return 0;
}
