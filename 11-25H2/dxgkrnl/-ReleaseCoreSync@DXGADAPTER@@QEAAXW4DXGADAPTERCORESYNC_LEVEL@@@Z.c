/*
 * XREFs of ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402BA244
 * Callers:
 *     DXGADAPTER_ReleaseCoreSync @ 0x140059570 (DXGADAPTER_ReleaseCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402BA104 (DxgkReleaseAdapterCoreSync.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1403F2E70 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x1400310E0 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x14003E1D0 (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x14028DA40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1402BA40C (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402BAC68 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x1402BB92C (-StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryRepinAllDirectFlipAllocations@ADAPTER_RENDER@@QEAAXXZ @ 0x14034B4DC (-TryRepinAllDirectFlipAllocations@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14038C2B8 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1403C20D0 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReleaseCoreSync(__int64 a1, int a2)
{
  __int64 v2; // rbx
  ADAPTER_RENDER *v4; // rcx
  ADAPTER_RENDER *v5; // rcx

  v2 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, a1, 0LL, 0LL);
    WdLogGlobalForLineNumber = 3876;
  }
  if ( (_DWORD)v2 == 5 || (unsigned int)(v2 - 1) <= 2 )
    DXGADAPTER::StartDeadlockTrackers((DXGADAPTER *)a1);
  v4 = *(ADAPTER_RENDER **)(a1 + 3128);
  if ( v4 )
  {
    if ( (_DWORD)v2 == 5 )
    {
      ADAPTER_RENDER::RestoreFromPurgeSegments(v4);
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(a1 + 3128), 10LL, 0xFFFFFFFFLL);
      ADAPTER_RENDER::TryRepinAllDirectFlipAllocations(*(ADAPTER_RENDER **)(a1 + 3128));
      goto LABEL_17;
    }
    if ( (_DWORD)v2 == 2 )
    {
      ADAPTER_RENDER::FlushScheduler(v4, 7LL, 0xFFFFFFFFLL);
LABEL_17:
      if ( *(_DWORD *)(a1 + 160) == 1 )
      {
        DXGADAPTER::ReleaseLocksForPowerStateD3transition((DXGADAPTER *)a1);
        *(_DWORD *)(a1 + 160) = 0;
        *(_DWORD *)(a1 + 3668) = 0;
        DXGADAPTER::UpdateLatencyTolerances((DXGADAPTER *)a1);
        if ( *(_QWORD *)(a1 + 3584) )
          DXGADAPTER::ScheduleAdapterActivityCheck((struct _KTHREAD **)a1);
      }
      goto LABEL_10;
    }
  }
  if ( (_DWORD)v2 != 1 )
  {
    if ( (_DWORD)v2 == 2 )
      goto LABEL_17;
    if ( (_DWORD)v2 != 3 )
    {
      if ( (_DWORD)v2 != 5 )
      {
        WdLogSingleEntry1(2LL, v2);
        WdLogGlobalForLineNumber = 3942;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Invalid synchronization level 0x%I64x",
          v2,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_13;
      }
      goto LABEL_17;
    }
  }
LABEL_10:
  if ( *(_BYTE *)(a1 + 205) )
    *(_BYTE *)(a1 + 205) = 0;
  DXGADAPTER::ReleaseCoreResource((PERESOURCE *)a1, 0LL);
LABEL_13:
  v5 = *(ADAPTER_RENDER **)(a1 + 3128);
  if ( v5 )
    ADAPTER_RENDER::EnableClockCalibration(v5, 1u);
}
