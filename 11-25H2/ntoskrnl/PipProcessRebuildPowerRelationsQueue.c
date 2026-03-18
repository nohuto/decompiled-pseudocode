/*
 * XREFs of PipProcessRebuildPowerRelationsQueue @ 0x140832888
 * Callers:
 *     IoResolveDependency @ 0x1404BA310 (IoResolveDependency.c)
 *     IoDuplicateDependency @ 0x140712000 (IoDuplicateDependency.c)
 *     IoSetDependency @ 0x1407121C0 (IoSetDependency.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140830FBC (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpDeleteAllDependencyRelations @ 0x140832574 (PnpDeleteAllDependencyRelations.c)
 *     PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x1409A0C30 (PnpSurpriseRemovedDeviceNodeDependencyCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PnpAcquirePowerRelationsQueueLock @ 0x1404ADEB8 (PnpAcquirePowerRelationsQueueLock.c)
 *     PnpReleasePowerRelationsQueueLock @ 0x1404B4A7C (PnpReleasePowerRelationsQueueLock.c)
 *     PipCheckIfAllProvidersHaveDevnodes @ 0x1406EB0AC (PipCheckIfAllProvidersHaveDevnodes.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x140830F84 (PipIsDeviceReadyForPowerRelations.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1408325D8 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140832A80 (PnpReleaseDependencyRelationsLock.c)
 *     PiQueryPowerRelations @ 0x140A872C8 (PiQueryPowerRelations.c)
 *     PipDereferenceDependencyNode @ 0x140AB04B0 (PipDereferenceDependencyNode.c)
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
    if ( PipIsDeviceReadyForPowerRelations(*(_QWORD *)(v6 + 48)) && PipCheckIfAllProvidersHaveDevnodes(v6) )
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
