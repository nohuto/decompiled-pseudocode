/*
 * XREFs of PipProcessRebuildPowerRelationsQueue @ 0x140A0F244
 * Callers:
 *     IoResolveDependency @ 0x1404B9270 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x14071E100 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x14071E2C0 (IoSetDependency.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140A0ECA8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpDeleteAllDependencyRelations @ 0x140A0F124 (PnpDeleteAllDependencyRelations.c)
 *     PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x140A10C98 (PnpSurpriseRemovedDeviceNodeDependencyCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PnpAcquirePowerRelationsQueueLock @ 0x1404AEDD8 (PnpAcquirePowerRelationsQueueLock.c)
 *     PnpReleasePowerRelationsQueueLock @ 0x1404B4398 (PnpReleasePowerRelationsQueueLock.c)
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x1406F6910 (PipCheckIfAllProvidersHaveDevnodes.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140A0F188 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140A0F814 (PnpReleaseDependencyRelationsLock.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x140A0FBEC (PipIsDeviceReadyForPowerRelations.c)
 *     PiQueryPowerRelations @ 0x140A8C2C8 (PiQueryPowerRelations.c)
 *     PipDereferenceDependencyNode @ 0x140AB54A0 (PipDereferenceDependencyNode.c)
 */

__int64 __fastcall PipProcessRebuildPowerRelationsQueue()
{
  __int64 *v0; // rdi
  __int64 *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // rsi
  _QWORD *v7; // rbp
  __int64 v8; // rax
  __int64 **v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 **v14; // rax

LABEL_1:
  PnpAcquireDependencyRelationsLock(1);
  PnpAcquirePowerRelationsQueueLock();
  v0 = (__int64 *)PiRebuildPowerRelationsQueue;
  while ( 1 )
  {
    v1 = v0;
    if ( v0 == &PiRebuildPowerRelationsQueue )
      goto LABEL_3;
    v6 = (__int64)(v0 - 9);
    v0 = (__int64 *)*v0;
    v7 = *(_QWORD **)(v6 + 48);
    if ( !v7 )
      break;
    if ( (unsigned __int8)PipIsDeviceReadyForPowerRelations(*(_QWORD *)(v6 + 48))
      && PipCheckIfAllProvidersHaveDevnodes(v6) )
    {
      v8 = *v1;
      if ( *(__int64 **)(*v1 + 8) != v1 )
        goto LABEL_9;
      v9 = (__int64 **)v1[1];
      if ( *v9 != v1 )
        goto LABEL_9;
      *v9 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      v1[1] = (__int64)v1;
      *v1 = (__int64)v1;
      PipDereferenceDependencyNode(v6);
      PnpReleasePowerRelationsQueueLock();
      PnpReleaseDependencyRelationsLock(v11, v10, v12);
      LOBYTE(v13) = 1;
      PiQueryPowerRelations(*(_QWORD *)(v7[39] + 40LL), v13);
      ObfDereferenceObjectWithTag(v7, 0x44706E50u);
      goto LABEL_1;
    }
  }
  if ( (__int64 *)v0[1] != v1 || (v14 = (__int64 **)v1[1], *v14 != v1) )
LABEL_9:
    __fastfail(3u);
  *v14 = v0;
  v0[1] = (__int64)v14;
  v1[1] = (__int64)v1;
  *v1 = (__int64)v1;
  PipDereferenceDependencyNode(v6);
LABEL_3:
  PnpReleasePowerRelationsQueueLock();
  return PnpReleaseDependencyRelationsLock(v3, v2, v4);
}
