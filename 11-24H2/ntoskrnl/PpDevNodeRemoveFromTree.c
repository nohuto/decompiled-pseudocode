/*
 * XREFs of PpDevNodeRemoveFromTree @ 0x14049E834
 * Callers:
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409BD1E4 (PnpUnlinkDeviceRemovalRelations.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PnpOrphanNotification @ 0x140A94010 (PnpOrphanNotification.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

char __fastcall PpDevNodeRemoveFromTree(_QWORD *a1)
{
  char v2; // bp
  KIRQL v3; // al
  __int64 v4; // rcx
  _QWORD **v5; // rcx
  _QWORD *i; // rdx
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rdi
  _QWORD *v15; // rdx
  _QWORD *v16; // rdi
  char result; // al
  __int64 v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // rdx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v4 = a1[2];
  if ( v4 )
  {
    v5 = (_QWORD **)(v4 + 8);
    for ( i = *v5; i != a1; i = (_QWORD *)*i )
      v5 = (_QWORD **)i;
    v7 = (_QWORD *)*a1;
    *v5 = (_QWORD *)*a1;
    v8 = a1[2];
    if ( *(_QWORD *)(v8 + 8) )
    {
      for ( ; v7; v7 = (_QWORD *)*v7 )
        v5 = (_QWORD **)v7;
    }
    else
    {
      v5 = 0LL;
    }
    *(_QWORD *)(v8 + 24) = v5;
    KeReleaseSpinLock(&PnpSpinLock, v3);
    v9 = a1[78];
    if ( *(_QWORD **)(v9 + 8) != a1 + 78 || (v10 = (_QWORD *)a1[79], (_QWORD *)*v10 != a1 + 78) )
LABEL_12:
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    PnpOrphanNotification(a1);
    v2 = 1;
  }
  else
  {
    KeReleaseSpinLock(&PnpSpinLock, v3);
  }
  ExAcquireFastMutex(&PnpRebuildPowerRelationsQueueLock);
  v14 = (_QWORD *)a1[22];
  while ( v14 != a1 + 22 )
  {
    v11 = v14 - 3;
    v12 = v14;
    v13 = *(v14 - 3);
    v14 = (_QWORD *)*v14;
    if ( *(_QWORD **)(v13 + 8) != v11 )
      goto LABEL_12;
    v15 = (_QWORD *)v11[1];
    if ( (_QWORD *)*v15 != v11 )
      goto LABEL_12;
    *v15 = v13;
    *(_QWORD *)(v13 + 8) = v15;
    v18 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 )
      goto LABEL_12;
    v19 = (_QWORD *)v12[1];
    if ( (_QWORD *)*v19 != v12 )
      goto LABEL_12;
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    ExFreePoolWithTag(v11, 0x72775044u);
  }
  v16 = (_QWORD *)a1[24];
  while ( v16 != a1 + 24 )
  {
    v20 = *v16;
    v21 = v16;
    v16 = (_QWORD *)v20;
    if ( *(_QWORD **)(v20 + 8) != v21 )
      goto LABEL_12;
    v22 = (_QWORD *)v21[1];
    if ( (_QWORD *)*v22 != v21 )
      goto LABEL_12;
    *v22 = v20;
    *(_QWORD *)(v20 + 8) = v22;
    v23 = v21[3];
    if ( *(_QWORD **)(v23 + 8) != v21 + 3 )
      goto LABEL_12;
    v24 = (_QWORD *)v21[4];
    if ( (_QWORD *)*v24 != v21 + 3 )
      goto LABEL_12;
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    ExFreePoolWithTag(v21, 0x72775044u);
  }
  KeReleaseGuardedMutex(&PnpRebuildPowerRelationsQueueLock);
  a1[2] = 0LL;
  result = v2;
  a1[1] = 0LL;
  *a1 = 0LL;
  a1[3] = 0LL;
  return result;
}
