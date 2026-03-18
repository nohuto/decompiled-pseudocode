/*
 * XREFs of PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x140A10C98
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A109EC (PnpSurpriseRemoveLockedDeviceNode.c)
 * Callees:
 *     PnpAcquireDependencyRelationsLock @ 0x140A0F188 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140A0F244 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140A0F814 (PnpReleaseDependencyRelationsLock.c)
 *     PipConvertResolutionsToReservations @ 0x140ABC7C8 (PipConvertResolutionsToReservations.c)
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
