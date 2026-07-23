/*
 * XREFs of PipSetDevNodeState @ 0x14048D998
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14048D53C (PnpRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     PnpRestartDeviceNode @ 0x140721454 (PnpRestartDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140721900 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiInitializeDevice @ 0x14073293C (PiInitializeDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14073315C (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x14073358C (PnpStopDeviceSubtree.c)
 *     PipProcessRestartPhase2 @ 0x140734598 (PipProcessRestartPhase2.c)
 *     PipProcessStartPhase2 @ 0x1408AFCBC (PipProcessStartPhase2.c)
 *     PipEnumerateCompleted @ 0x1408B6C08 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x1408B895C (PipEnumerateDevice.c)
 *     PnpProcessAssignResources @ 0x140979798 (PnpProcessAssignResources.c)
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140982F18 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PnpStartDeviceNode @ 0x1409BEB50 (PnpStartDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409BEDFC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1409BF7EC (PnpRequestDeviceRemovalWorker.c)
 *     PipDeviceRemovalCheckDeviceNodeState @ 0x1409BF8FC (PipDeviceRemovalCheckDeviceNodeState.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1409BF9E8 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A5AFD8 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140A767EC (PiProcessNewDeviceNodeAsync.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 *     PnpDriverLoadingFailed @ 0x140A9C798 (PnpDriverLoadingFailed.c)
 *     IopFindLegacyDeviceNode @ 0x140AAA1C8 (IopFindLegacyDeviceNode.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipAreDriversLoadedWorker @ 0x14045B9FC (PipAreDriversLoadedWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x1404671A0 (PnpRemoveDeviceActionRequests.c)
 *     PipIsDevNodeDNStarted @ 0x1404DD25C (PipIsDevNodeDNStarted.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B6E6C (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PpDevCfgTraceDeviceStart @ 0x1408B8880 (PpDevCfgTraceDeviceStart.c)
 */

void __fastcall PipSetDevNodeState(__int64 a1, int a2)
{
  int v4; // r15d
  int v5; // esi
  char v6; // r14
  int *v7; // rdi
  KIRQL v8; // r11
  int IsDevNodeDNStarted; // eax
  int v10; // r10d
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = (int *)(a1 + 304);
  v8 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( *(_DWORD *)(a1 + 300) != a2 )
  {
    v4 = PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *v7);
    IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
    *(_DWORD *)(a1 + 300) = a2;
    v5 = IsDevNodeDNStarted;
    *(_DWORD *)(a1 + 304) = v10;
    v6 = 1;
    v11 = *(unsigned int *)(a1 + 388);
    *(_QWORD *)(a1 + 888) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(a1 + 896) = v12;
    *(_DWORD *)(a1 + 4 * v11 + 308) = v10;
    *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  }
  KeReleaseSpinLock(&PnpSpinLock, v8);
  if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 48)
      && ((unsigned int)PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *v7) != v4
       || (unsigned int)PipIsDevNodeDNStarted(a1) != v5) )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v14, *(_QWORD *)(a1 + 48), 11LL);
      if ( (unsigned int)PipIsDevNodeDNStarted(a1) != v5 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v15, *(_QWORD *)(a1 + 48), 26LL);
    }
    if ( (*(_DWORD *)(a1 + 704) & 1) != 0 )
    {
      LOBYTE(v13) = 1;
      PpDevCfgTraceDeviceStart(a1, v13);
    }
  }
  if ( a2 == 790 )
    PnpRemoveDeviceActionRequests(*(_QWORD *)(a1 + 32));
}
