/*
 * XREFs of PipRestoreDevNodeState @ 0x1404E6BC4
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404926CC (PnpRemoveLockedDeviceNode.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x140723B44 (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpCancelStopDeviceNode @ 0x140734DF8 (PnpCancelStopDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A109EC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipDeviceRemovalCheckDeviceNodeState @ 0x140A114EC (PipDeviceRemovalCheckDeviceNodeState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipAreDriversLoadedWorker @ 0x140465318 (PipAreDriversLoadedWorker.c)
 *     PipIsDevNodeDNStarted @ 0x1404E6B60 (PipIsDevNodeDNStarted.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B94C4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

void __fastcall PipRestoreDevNodeState(__int64 a1)
{
  int v2; // esi
  int v3; // ebp
  int IsDevNodeDNStarted; // eax
  int v5; // edx
  int v6; // edi
  __int64 v7; // rcx
  KIRQL v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  int v11; // r9d
  __int64 v12; // rcx

  KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v2 = *(_DWORD *)(a1 + 300);
  v3 = *(_DWORD *)(a1 + 304);
  IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
  v5 = *(_DWORD *)(a1 + 300);
  v6 = IsDevNodeDNStarted;
  *(_DWORD *)(a1 + 300) = *(_DWORD *)(a1 + 304);
  v7 = *(unsigned int *)(a1 + 388);
  *(_QWORD *)(a1 + 888) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(a1 + 4 * v7 + 308) = v5;
  *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  KeReleaseSpinLock(&PnpSpinLock, v8);
  if ( *(_QWORD *)(a1 + 48) )
  {
    PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304));
    v9 = PipAreDriversLoadedWorker(v2, v3);
    if ( v11 != v9 || (unsigned int)PipIsDevNodeDNStarted(a1) != v6 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, *(_QWORD *)(a1 + 48), 11LL);
      if ( (unsigned int)PipIsDevNodeDNStarted(a1) != v6 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v12, *(_QWORD *)(a1 + 48), 26LL);
    }
  }
}
