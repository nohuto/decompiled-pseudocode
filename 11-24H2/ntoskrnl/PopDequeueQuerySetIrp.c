/*
 * XREFs of PopDequeueQuerySetIrp @ 0x1402BA5A0
 * Callers:
 *     PopHandleDevicePowerIrpCompletion @ 0x1403A65A0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopSystemIrpCompletion @ 0x140B71950 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402B9FF0 (PopDeepSleepClearDisengageReason.c)
 *     PopCompleteIrpWatchdog @ 0x1402BC618 (PopCompleteIrpWatchdog.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PopDiagTraceIrpFinish @ 0x1402E64EC (PopDiagTraceIrpFinish.c)
 *     PopEnableIrpWatchdog @ 0x140314DDC (PopEnableIrpWatchdog.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopDiagTraceIrpStart @ 0x14046B350 (PopDiagTraceIrpStart.c)
 *     PopDisableIrpWatchdog @ 0x14049A414 (PopDisableIrpWatchdog.c)
 */

void __fastcall PopDequeueQuerySetIrp(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rbx
  bool v5; // zf
  __int64 v6; // r8
  __int64 *v7; // rdi
  KIRQL v8; // al
  KIRQL v9; // bl
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  __int64 ***v13; // rcx
  _QWORD *v14; // rax
  __int64 *i; // rdx
  _QWORD *v16; // r9
  __int64 *v17; // rax
  IRP *v18; // rdi
  struct _DEVICE_OBJECT *DeviceObject; // rbx
  __int64 *v20; // r10
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 ***v25; // rcx
  _QWORD *v26; // rax
  __int64 *v27; // [rsp+20h] [rbp-30h] BYREF
  __int64 **v28; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PopDiagTraceIrpFinish();
  PopCompleteIrpWatchdog(a1);
  v28 = &v27;
  v27 = (__int64 *)&v27;
  v2 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v3 = *(_QWORD *)(v2 + 24);
  if ( v3 )
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 312) + 40LL);
  else
    v4 = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v5 = *(_DWORD *)(v2 + 188) == 0;
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  if ( v5 && *(_BYTE *)(v2 + 184) == 2 && *(int *)(v2 + 192) > 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(v4 + 296), 0x8000u);
    if ( *(_QWORD *)(v4 + 264) )
      PopDisableIrpWatchdog();
  }
  v6 = 264LL;
  if ( *(_DWORD *)(v2 + 188) != 1 )
    v6 = 280LL;
  *(_QWORD *)(v6 + v4) = 0LL;
  if ( a1 == PopInrushIrp )
  {
    PopInrushIrp = 0LL;
    for ( i = (__int64 *)PopInrushIrpList; ; i = (__int64 *)*i )
    {
      if ( i == &PopInrushIrpList )
        goto LABEL_7;
      v20 = i - 21;
      v21 = *(_QWORD *)(i[9 * *((char *)i - 102) + 4] + 24);
      v22 = v21 ? *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) : 0LL;
      if ( !*(_QWORD *)(v22 + 264) && *(__int64 **)(v22 + 272) == v20 )
        break;
    }
    v23 = *i;
    if ( *(__int64 **)(*i + 8) != i )
      goto LABEL_20;
    v24 = (__int64 *)i[1];
    if ( (__int64 *)*v24 != i )
      goto LABEL_20;
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    v25 = (__int64 ***)(v20 + 15);
    *(_QWORD *)(v22 + 264) = v20;
    *(_QWORD *)(v22 + 272) = v20[15];
    v26 = v28;
    PopInrushIrp = (__int64)(i - 21);
    if ( *v28 != (__int64 *)&v27 )
      goto LABEL_20;
    v20[16] = (__int64)v28;
    *v25 = &v27;
    *v26 = v25;
    v28 = (__int64 **)(v20 + 15);
  }
LABEL_7:
  if ( *(_QWORD *)(v6 + v4) )
    goto LABEL_8;
  v10 = *(_QWORD **)(v6 + v4 + 8);
  if ( !v10 )
    goto LABEL_8;
  v11 = v10 + 21;
  v12 = (_QWORD *)v10[21];
  if ( v12 == v10 + 21 )
    goto LABEL_19;
  if ( PopInrushIrp )
    goto LABEL_8;
  PopInrushIrp = *(_QWORD *)(v6 + v4 + 8);
  if ( (_QWORD *)v12[1] != v11 || (v16 = (_QWORD *)v10[22], (_QWORD *)*v16 != v11) )
LABEL_20:
    __fastfail(3u);
  *v16 = v12;
  v12[1] = v16;
LABEL_19:
  *(_QWORD *)(v6 + v4) = v10;
  v13 = (__int64 ***)(v10 + 15);
  *(_QWORD *)(v6 + v4 + 8) = *v13;
  v14 = v28;
  if ( *v28 != (__int64 *)&v27 )
    goto LABEL_20;
  v13[1] = v28;
  *v13 = &v27;
  *v14 = v13;
  v28 = (__int64 **)v13;
LABEL_8:
  PopIrpLockThread = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  while ( 1 )
  {
    v7 = v27;
    if ( v27 == (__int64 *)&v27 )
      break;
    if ( (__int64 **)v27[1] != &v27 )
      goto LABEL_20;
    v17 = (__int64 *)*v27;
    if ( *(__int64 **)(*v27 + 8) != v27 )
      goto LABEL_20;
    v27 = (__int64 *)*v27;
    v17[1] = (__int64)&v27;
    v18 = (IRP *)(v7 - 15);
    DeviceObject = v18->Tail.Overlay.CurrentStackLocation[-1].DeviceObject;
    PopDiagTraceIrpStart(&v27, v18);
    PopEnableIrpWatchdog(v18);
    IofCallDriver(DeviceObject, v18);
  }
  if ( *(_BYTE *)(v2 + 184) == 2 && *(_DWORD *)(v2 + 188) == 1 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerTransitionLock);
    v5 = PopPendingSetPowerDeviceIrps-- == 1;
    v9 = v8;
    if ( v5 )
    {
      PopDeepSleepClearDisengageReason(2u);
      if ( !PopDevicePowerTransitionInProgressWorkerQueued )
      {
        PopDevicePowerTransitionInProgressWorkerQueued = 1;
        ExQueueWorkItem(&PopDevicePowerTransitionInProgressWorkItem, DelayedWorkQueue);
      }
    }
    KeReleaseSpinLock(&PopPendingPowerTransitionLock, v9);
  }
}
