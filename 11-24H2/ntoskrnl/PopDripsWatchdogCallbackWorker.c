/*
 * XREFs of PopDripsWatchdogCallbackWorker @ 0x14075EC80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PopCalculateIdleInformation @ 0x1402B5AAC (PopCalculateIdleInformation.c)
 *     PopDirectedDripsClearDisengageReason @ 0x1404673AC (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x140468270 (PopDirectedDripsSetDisengageReason.c)
 *     PopOkayToQueueNextWorkItem @ 0x14049FAE4 (PopOkayToQueueNextWorkItem.c)
 *     PopDripsWatchdogCallbackHandler @ 0x14075EAE0 (PopDripsWatchdogCallbackHandler.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1408B2D34 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A1C994 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

void __fastcall PopDripsWatchdogCallbackWorker(PERESOURCE Resource)
{
  struct _OWNER_ENTRY *v2; // rbp
  PERESOURCE v3; // rsi
  ULONG v4; // r15d
  __int128 v5; // xmm0
  int v6; // eax
  OWNER_ENTRY v7; // xmm1
  int Reserved2_high; // eax
  unsigned int Flink_high; // r12d
  unsigned int SpinLock; // r13d
  __int64 v11; // rsi
  unsigned __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+20h] [rbp-68h]
  __int128 v20; // [rsp+30h] [rbp-58h] BYREF
  OWNER_ENTRY v21; // [rsp+40h] [rbp-48h]
  char ActiveCount; // [rsp+90h] [rbp+8h]
  __int64 v23; // [rsp+98h] [rbp+10h]

  v20 = 0LL;
  v21 = 0LL;
  PiDmObjectManagerAcquireExclusiveLock(Resource);
  HIDWORD(Resource[2].Reserved2) &= ~2u;
  PopOkayToQueueNextWorkItem((__int64)&Resource[2].ExclusiveWaiters);
  if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) != 0 )
  {
    ++LODWORD(Resource[6].OwnerTable);
    ++HIDWORD(Resource[2].SpinLock);
    PopDripsWatchdogScheduleNextTimer(&Resource[1].SystemResourcesList.Blink);
    v2 = (struct _OWNER_ENTRY *)MEMORY[0xFFFFF78000000008];
    PopCalculateIdleInformation((__int64)&v20);
    v3 = Resource + 3;
    v4 = v21.TableSize - Resource[3].OwnerEntry.TableSize;
    if ( v21.TableSize != Resource[3].OwnerEntry.TableSize )
    {
      v5 = v20;
      v6 = PopDripsWatchdogDebounceTickInterval;
      v7 = v21;
      HIDWORD(Resource[2].SpinLock) = 0;
      *(_OWORD *)&Resource[3].SharedWaiters = v5;
      Resource[3].OwnerTable = v2;
      Resource[3].OwnerEntry = v7;
      LODWORD(v3->SystemResourcesList.Flink) = v6;
      Resource[3].SystemResourcesList.Blink = (struct _LIST_ENTRY *)v2;
    }
    if ( LODWORD(v3->SystemResourcesList.Flink) )
    {
      if ( HIDWORD(Resource[2].SpinLock) < LODWORD(v3->SystemResourcesList.Flink) )
      {
        PopDirectedDripsClearDisengageReason(0);
      }
      else
      {
        PopDirectedDripsSetDisengageReason(0);
        LODWORD(v3->SystemResourcesList.Flink) = PopDripsWatchdogDebounceTickInterval + HIDWORD(Resource[2].SpinLock);
      }
    }
    Reserved2_high = HIDWORD(Resource[2].Reserved2);
    if ( (Reserved2_high & 4) == 0 )
    {
      Flink_high = HIDWORD(Resource[1].SystemResourcesList.Flink);
      SpinLock = Resource[2].SpinLock;
      v11 = (char *)v2 - (char *)Resource[3].SystemResourcesList.Blink;
      v12 = (char *)v2 - (char *)Resource[3].OwnerTable;
      v23 = *(_QWORD *)&Resource[6].ActiveCount;
      ActiveCount = Resource[3].ActiveCount;
      HIDWORD(Resource[2].Reserved2) = Reserved2_high | 4;
      ExReleaseResourceLite(Resource);
      KeLeaveCriticalRegion();
      PopAcquirePolicyLock(v14, v13);
      if ( v4 || qword_140E27D90 )
      {
        PopReleasePolicyLock(v16, v15, v17, v18, v19);
      }
      else
      {
        PopReleasePolicyLock(v16, v15, v17, v18, v19);
        PopDripsWatchdogCallbackHandler(Flink_high, SpinLock, v11, v12, v23, ActiveCount);
      }
      PiDmObjectManagerAcquireExclusiveLock(Resource);
      Resource[3].SystemResourcesList.Blink = (struct _LIST_ENTRY *)v2;
      HIDWORD(Resource[2].Reserved2) &= ~4u;
    }
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
}
