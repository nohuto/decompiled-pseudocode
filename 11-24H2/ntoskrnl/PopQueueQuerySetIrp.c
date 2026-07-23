/*
 * XREFs of PopQueueQuerySetIrp @ 0x1403A96B4
 * Callers:
 *     PopRequestPowerIrp @ 0x1403A7FD0 (PopRequestPowerIrp.c)
 *     PopFxActivateComponentDependents @ 0x1403A91E0 (PopFxActivateComponentDependents.c)
 *     PopNotifyDevice @ 0x140B717B8 (PopNotifyDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepSetDisengageReason @ 0x1402B9DFC (PopDeepSleepSetDisengageReason.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PopEnableIrpWatchdog @ 0x140314DDC (PopEnableIrpWatchdog.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopDiagTraceIrpStart @ 0x14046B350 (PopDiagTraceIrpStart.c)
 */

void __fastcall PopQueueQuerySetIrp(IRP *a1)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  char v2; // r14
  IRP *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbp
  char v7; // al
  struct _DEVICE_OBJECT *v8; // r12
  KIRQL v9; // si
  int v10; // esi
  __int64 v11; // rdi
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  KIRQL v17; // al
  struct _DEVICE_OBJECT *i; // rdx
  struct _LIST_ENTRY *v19; // rcx
  __int64 j; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  v2 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a1;
  v4 = *((_QWORD *)&a1->Tail.CompletionKey + 9 * a1->StackCount + 10);
  v5 = *(_QWORD *)(v4 + 24);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  else
    v6 = 0LL;
  v7 = *(_BYTE *)(v4 + 184);
  v8 = *(struct _DEVICE_OBJECT **)(v4 + 32);
  if ( v7 == 2 && *(_DWORD *)(v4 + 188) == 1 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&PopPendingPowerTransitionLock);
    if ( ++PopPendingSetPowerDeviceIrps == 1 )
    {
      PopDeepSleepSetDisengageReason(2u);
      if ( !PopDevicePowerTransitionInProgressWorkerQueued )
      {
        PopDevicePowerTransitionInProgressWorkerQueued = 1;
        ExQueueWorkItem(&PopDevicePowerTransitionInProgressWorkItem, DelayedWorkQueue);
      }
    }
    KeReleaseSpinLock(&PopPendingPowerTransitionLock, v9);
    v7 = *(_BYTE *)(v4 + 184);
  }
  v10 = *(_DWORD *)(v4 + 188);
  v11 = 264LL;
  if ( v10 != 1 )
    v11 = 280LL;
  if ( v7 == 2 && v10 == 1 && CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart == 1 )
  {
    v17 = KeAcquireQueuedSpinLock(0xAuLL);
    for ( i = v8; i; i = i->DeviceObjectExtension->AttachedTo )
    {
      if ( (i->Flags & 0x4000) != 0 )
      {
        v2 = 1;
        break;
      }
    }
    KeReleaseQueuedSpinLock(0xAuLL, v17);
  }
  v3->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  PopIrpLockThread = (__int64)KeGetCurrentThread();
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v3->Tail.Overlay.ListEntry;
  if ( v2 )
  {
    v19 = (struct _LIST_ENTRY *)qword_140F0B1E8;
    if ( *(__int64 **)qword_140F0B1E8 != &PopInrushIrpList )
      goto LABEL_44;
    p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)&PopInrushIrpList;
    v3->Tail.Overlay.ListEntry.Blink = v19;
    v19->Flink = &p_ListEntry->ListEntry;
    qword_140F0B1E8 = (__int64)&v3->Tail.Overlay.ListEntry;
  }
  v13 = 272LL;
  v14 = 272LL;
  if ( v10 != 1 )
    v14 = 288LL;
  v15 = *(_QWORD *)(v14 + v6);
  if ( v15 )
  {
    for ( j = *(_QWORD *)(v15 + 120); j; j = *(_QWORD *)(j + 120) )
      v15 = j;
    *(_QWORD *)(v15 + 120) = v3;
    goto LABEL_17;
  }
  *(_QWORD *)(v14 + v6) = v3;
  if ( *(_QWORD *)(v11 + v6) )
  {
LABEL_17:
    v3 = 0LL;
    goto LABEL_18;
  }
  if ( v2 )
  {
    if ( PopInrushIrp )
      goto LABEL_17;
    Flink = p_ListEntry->ListEntry.Flink;
    PopInrushIrp = (__int64)v3;
    if ( (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)Flink->Blink == p_ListEntry )
    {
      Blink = v3->Tail.Overlay.ListEntry.Blink;
      if ( (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)Blink->Flink == p_ListEntry )
      {
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        goto LABEL_22;
      }
    }
LABEL_44:
    __fastfail(3u);
  }
LABEL_22:
  *(_QWORD *)(v11 + v6) = v3;
  if ( v10 != 1 )
    v13 = 288LL;
  *(_QWORD *)(v13 + v6) = 0LL;
LABEL_18:
  PopIrpLockThread = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v3 )
  {
    PopDiagTraceIrpStart(v16, v3);
    PopEnableIrpWatchdog((__int64)v3);
    IofCallDriver(v8, v3);
  }
}
