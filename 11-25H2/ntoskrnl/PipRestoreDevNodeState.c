/*
 * XREFs of PipRestoreDevNodeState @ 0x1404E6DA0
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404938EC (PnpRemoveLockedDeviceNode.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x140717A44 (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpCancelStopDeviceNode @ 0x140728B68 (PnpCancelStopDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409A0984 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipDeviceRemovalCheckDeviceNodeState @ 0x140A754E0 (PipDeviceRemovalCheckDeviceNodeState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PipAreDriversLoaded @ 0x1404E6CA8 (PipAreDriversLoaded.c)
 *     PipIsDevNodeDNStarted @ 0x1404E6CD4 (PipIsDevNodeDNStarted.c)
 *     Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline @ 0x1405A26B8 (Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

void __fastcall PipRestoreDevNodeState(__int64 a1)
{
  KIRQL v2; // bp
  int v3; // esi
  int IsDevNodeDNStarted; // eax
  int v5; // r14d
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = PipAreDriversLoaded(a1);
  IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
  v5 = *(_DWORD *)(a1 + 300);
  v6 = IsDevNodeDNStarted;
  if ( (unsigned int)Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline() )
    *(_DWORD *)(a1 + 300) = *(_DWORD *)(a1 + 304);
  else
    *(_DWORD *)(a1 + 300) = *(_DWORD *)(a1 + 304);
  *(_QWORD *)(a1 + 888) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(a1 + 4LL * *(unsigned int *)(a1 + 388) + 308) = v5;
  *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  KeReleaseSpinLock(&PnpSpinLock, v2);
  if ( *(_QWORD *)(a1 + 48)
    && ((unsigned int)PipAreDriversLoaded(a1) != v3 || (unsigned int)PipIsDevNodeDNStarted(a1) != v6) )
  {
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *(_QWORD *)(a1 + 48), 11LL);
    if ( (unsigned int)PipIsDevNodeDNStarted(a1) != v6 )
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 26LL);
  }
}
