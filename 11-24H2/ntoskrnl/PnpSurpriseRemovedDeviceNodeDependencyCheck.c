/*
 * XREFs of PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x1409BF0A8
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409BEDFC (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     PnpAcquireDependencyRelationsLock @ 0x1409BD598 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409BD654 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409BDC24 (PnpReleaseDependencyRelationsLock.c)
 *     PipConvertResolutionsToReservations @ 0x140AB77E8 (PipConvertResolutionsToReservations.c)
 */

__int64 __fastcall PnpSurpriseRemovedDeviceNodeDependencyCheck(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  __int64 v4; // rcx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 396) & 0x10) == 0 )
  {
    PnpAcquireDependencyRelationsLock(1);
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 80LL);
      if ( v4 )
        v1 = PipConvertResolutionsToReservations(v4);
    }
    PnpReleaseDependencyRelationsLock();
    PipProcessRebuildPowerRelationsQueue();
  }
  return v1;
}
