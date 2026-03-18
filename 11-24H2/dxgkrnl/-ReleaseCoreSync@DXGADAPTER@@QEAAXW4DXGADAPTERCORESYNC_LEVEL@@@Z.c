/*
 * XREFs of ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1402C7A94
 * Callers:
 *     DXGADAPTER_ReleaseCoreSync @ 0x140059030 (DXGADAPTER_ReleaseCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402C7954 (DxgkReleaseAdapterCoreSync.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1403EC880 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ @ 0x14003DF8C (-ScheduleAdapterActivityCheck@DXGADAPTER@@QEAAXXZ.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x14004A484 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A1E90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1402C7C5C (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402C84A8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ @ 0x1402C9140 (-StartDeadlockTrackers@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryRepinAllDirectFlipAllocations@ADAPTER_RENDER@@QEAAXXZ @ 0x140339434 (-TryRepinAllDirectFlipAllocations@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x14038849C (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ @ 0x1403B6B24 (-RestoreFromPurgeSegments@ADAPTER_RENDER@@AEAAXXZ.c)
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
    WdLogGlobalForLineNumber = 3933;
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
          DXGADAPTER::ScheduleAdapterActivityCheck((DXGADAPTER *)a1);
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
        WdLogGlobalForLineNumber = 3999;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
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
