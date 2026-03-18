/*
 * XREFs of ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1401912BC
 * Callers:
 *     DpiPowerArbiterThread @ 0x1402BBB00 (DpiPowerArbiterThread.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x14006912C (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?_ReleaseAllPoFxResources@MONITOR_MGR@@QEAAXXZ @ 0x14026E0DC (-_ReleaseAllPoFxResources@MONITOR_MGR@@QEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1402BAC68 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

void __fastcall DXGADAPTER::PrepareToRemove(struct _KTIMER *this)
{
  struct _KDPC *Dpc; // rax
  MONITOR_MGR *SystemArgument2; // rcx
  __int64 v4; // rcx

  LODWORD(this[3].Header.WaitListHead.Flink) = 6;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 9169;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceExclusiveOwner()", 9169LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[50].TimerListEntry.Flink )
  {
    BYTE6(this[57].Header.WaitListHead.Flink) = 1;
    if ( !KeCancelTimer(this + 59) )
    {
      KeFlushQueuedDpcs();
      if ( !KeCancelTimer(this + 59) )
        KeFlushQueuedDpcs();
    }
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(this[3].DueTime.QuadPart + 64) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(
        (DXGADAPTER *)this,
        &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL);
      BYTE1(this[57].Header.WaitListHead.Blink) = 0;
    }
    this[61].Header.LockNV = 0;
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1299;
    }
    Dpc = this[48].Dpc;
    if ( Dpc )
    {
      SystemArgument2 = (MONITOR_MGR *)Dpc[1].SystemArgument2;
      if ( SystemArgument2 )
        MONITOR_MGR::_ReleaseAllPoFxResources(SystemArgument2);
    }
  }
  v4 = *(_QWORD *)&this[48].Processor;
  if ( v4 )
    ADAPTER_RENDER::FlushScheduler(v4, 5LL, 0xFFFFFFFFLL);
}
