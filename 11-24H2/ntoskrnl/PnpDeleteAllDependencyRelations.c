/*
 * XREFs of PnpDeleteAllDependencyRelations @ 0x1409BD534
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14048D53C (PnpRemoveLockedDeviceNode.c)
 *     IopDeleteDevice @ 0x1409BD4C0 (IopDeleteDevice.c)
 * Callees:
 *     PnpAcquireDependencyRelationsLock @ 0x1409BD598 (PnpAcquireDependencyRelationsLock.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1409BD5E8 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409BD654 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x1409BD760 (PipDeleteAllDependencyRelations.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409BDC24 (PnpReleaseDependencyRelationsLock.c)
 */

__int64 __fastcall PnpDeleteAllDependencyRelations(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v1 = 0;
  v2 = a1;
  if ( a1 )
  {
    LOBYTE(a1) = 1;
    PnpAcquireDependencyRelationsLock(a1);
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 312) + 80LL) )
    {
      PipAddDependentsToRebuildPowerRelationsQueue(v2);
      PipDeleteAllDependencyRelations(v2);
      PnpReleaseDependencyRelationsLock(v7, v6, v8);
      PipProcessRebuildPowerRelationsQueue(v10, v9, v11, v12);
    }
    else
    {
      PnpReleaseDependencyRelationsLock(v4, v3, v5);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
