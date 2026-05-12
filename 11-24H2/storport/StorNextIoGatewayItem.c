/*
 * XREFs of StorNextIoGatewayItem @ 0x140029150
 * Callers:
 *     RaidAdapterRestartQueues @ 0x14000FD00 (RaidAdapterRestartQueues.c)
 *     StorPortAdapterActiveCondition @ 0x140024390 (StorPortAdapterActiveCondition.c)
 *     RaidAdapterRestartGateway @ 0x1400290E0 (RaidAdapterRestartGateway.c)
 * Callees:
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     StorIsIoGatewayPaused @ 0x140025B10 (StorIsIoGatewayPaused.c)
 *     RaAllocateIoResource @ 0x1400278D0 (RaAllocateIoResource.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x14003E1D0 (RaAttemptHighWaterMarkIncrease.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x140055F24 (RaidGetQosEntryForDeviceEntry.c)
 */

KSPIN_LOCK __fastcall StorNextIoGatewayItem(__int64 SpinLock, _QWORD *a2)
{
  KSPIN_LOCK v2; // rdi
  char v3; // bp
  KSPIN_LOCK v4; // rax
  PSLIST_ENTRY IoResource; // rsi
  PKSPIN_LOCK v8; // rax
  KSPIN_LOCK v9; // rcx
  PKSPIN_LOCK v10; // rax
  KSPIN_LOCK v11; // rcx
  unsigned int v12; // ecx
  bool v13; // zf
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  v3 = 0;
  v4 = *(_QWORD *)(SpinLock + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( FeatureFixKcsanRacyAccessV2 )
  {
    if ( !*(_DWORD *)(v4 + 996) )
      goto LABEL_6;
  }
  else if ( !*(_DWORD *)(v4 + 996) )
  {
    goto LABEL_6;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)SpinLock, &LockHandle);
  v3 = 1;
LABEL_6:
  if ( *(_DWORD *)(SpinLock + 24)
    && !*(_DWORD *)(SpinLock + 40)
    && (!SpinLock || !*(_DWORD *)(*(_QWORD *)(SpinLock + 48) + 988LL)) )
  {
    IoResource = RaAllocateIoResource(SpinLock + 64);
    if ( IoResource
      || *(_DWORD *)(SpinLock + 136) < *(_DWORD *)(SpinLock + 144)
      && (RaAttemptHighWaterMarkIncrease((PVOID)SpinLock), (IoResource = RaAllocateIoResource(SpinLock + 64)) != 0LL) )
    {
      if ( !v3 )
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)SpinLock, &LockHandle);
      if ( FeatureFixKcsanRacyAccessV2 )
      {
        if ( !*(_DWORD *)(SpinLock + 24) || *(_DWORD *)(SpinLock + 40) || StorIsIoGatewayPaused(SpinLock) )
          goto LABEL_38;
        v2 = *(_QWORD *)(SpinLock + 8);
        v8 = (PKSPIN_LOCK)(SpinLock + 8);
        if ( *(_QWORD *)(v2 + 8) != SpinLock + 8 )
          goto LABEL_40;
        v9 = *(_QWORD *)v2;
        if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 )
          goto LABEL_40;
        *v8 = v9;
        *(_QWORD *)(v9 + 8) = v8;
        _InterlockedIncrement((volatile signed __int32 *)(SpinLock + 192));
        if ( *(_DWORD *)(SpinLock + 192) <= *(_DWORD *)(SpinLock + 36) )
          *(_DWORD *)(SpinLock + 36) = *(_DWORD *)(SpinLock + 36);
        else
          *(_DWORD *)(SpinLock + 36) = *(_DWORD *)(SpinLock + 192);
      }
      else
      {
        if ( !*(_DWORD *)(SpinLock + 24) || *(_DWORD *)(SpinLock + 40) || StorIsIoGatewayPaused(SpinLock) )
          goto LABEL_38;
        v2 = *(_QWORD *)(SpinLock + 8);
        v10 = (PKSPIN_LOCK)(SpinLock + 8);
        if ( *(_QWORD *)(v2 + 8) != SpinLock + 8 )
          goto LABEL_40;
        v11 = *(_QWORD *)v2;
        if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 )
          goto LABEL_40;
        *v10 = v11;
        *(_QWORD *)(v11 + 8) = v10;
        _InterlockedIncrement((volatile signed __int32 *)(SpinLock + 192));
        v12 = *(_DWORD *)(SpinLock + 192);
        if ( v12 <= *(_DWORD *)(SpinLock + 36) )
          v12 = *(_DWORD *)(SpinLock + 36);
        v13 = FeatureFixKcsanRacyAccess == 0;
        *(_DWORD *)(SpinLock + 36) = v12;
        if ( v13 )
        {
          --*(_DWORD *)(SpinLock + 24);
          goto LABEL_34;
        }
      }
      _InterlockedDecrement((volatile signed __int32 *)(SpinLock + 24));
LABEL_34:
      if ( (*(_BYTE *)(v2 + 22) & 0x20) == 0 )
        goto LABEL_38;
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v2);
      v15 = *QosEntryForDeviceEntry;
      if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) == QosEntryForDeviceEntry )
      {
        v16 = (_QWORD *)QosEntryForDeviceEntry[1];
        if ( (_QWORD *)*v16 == QosEntryForDeviceEntry )
        {
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
LABEL_38:
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( v2 )
          {
            a2[3] = IoResource + 58;
            a2[2] = IoResource + 3;
            a2[1] = IoResource + 74;
            RaidZeroXrb(
              (__int64)&IoResource[3],
              v17,
              *((_DWORD *)&IoResource[49].Next + 2),
              *((void **)&IoResource[50].Next + 1));
          }
          else if ( *(_DWORD *)(SpinLock + 128) )
          {
            ExpInterlockedPushEntrySList(
              *(PSLIST_HEADER *)(*(_QWORD *)(SpinLock + 64) + 8LL * LODWORD(IoResource->Next)),
              IoResource);
          }
          else
          {
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(SpinLock + 64), IoResource);
          }
          return v2;
        }
      }
LABEL_40:
      __fastfail(3u);
    }
  }
  if ( v3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
