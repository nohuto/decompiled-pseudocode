/*
 * XREFs of PnpDeleteAllDependencyRelations @ 0x140A0F124
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404926CC (PnpRemoveLockedDeviceNode.c)
 *     IopDeleteDevice @ 0x140A0F0B0 (IopDeleteDevice.c)
 * Callees:
 *     PnpAcquireDependencyRelationsLock @ 0x140A0F188 (PnpAcquireDependencyRelationsLock.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x140A0F1D8 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x140A0F244 (PipProcessRebuildPowerRelationsQueue.c)
 *     PipDeleteAllDependencyRelations @ 0x140A0F350 (PipDeleteAllDependencyRelations.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140A0F814 (PnpReleaseDependencyRelationsLock.c)
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
