/*
 * XREFs of PopDripsWatchdogCallbackWorker @ 0x140753080
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14046DFD4 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14046EEA0 (PopDirectedDripsSetDisengageReason.c)
 *     PopCalculateIdleInformation @ 0x140486AEC (PopCalculateIdleInformation.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4824 (PopOkayToQueueNextWorkItem.c)
 *     Feature_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline @ 0x1404F25D8 (Feature_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140752EE0 (PopDripsWatchdogCallbackHandler.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x140968EE4 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A1EF7C (PopDripsWatchdogScheduleNextTimer.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

void __fastcall PopDripsWatchdogCallbackWorker(PERESOURCE Resource)
{
  bool v2; // zf
  struct _OWNER_ENTRY *v3; // rsi
  ULONG v4; // r15d
  __int128 v5; // xmm0
  int v6; // eax
  OWNER_ENTRY v7; // xmm1
  unsigned int Flink; // eax
  int Reserved2_high; // eax
  unsigned int Flink_high; // r12d
  unsigned int SpinLock; // r13d
  __int64 v12; // rbp
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // [rsp+20h] [rbp-68h]
  __int128 v21; // [rsp+30h] [rbp-58h] BYREF
  OWNER_ENTRY v22; // [rsp+40h] [rbp-48h]
  char ActiveCount; // [rsp+90h] [rbp+8h]
  __int64 v24; // [rsp+98h] [rbp+10h]

  v21 = 0LL;
  v22 = 0LL;
  PiDmObjectManagerAcquireExclusiveLock(Resource);
  if ( (unsigned int)Feature_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline() )
  {
    HIDWORD(Resource[2].Reserved2) &= ~2u;
    PopOkayToQueueNextWorkItem((__int64)&Resource[2].ExclusiveWaiters);
    v2 = ((__int64)Resource[1].SystemResourcesList.Flink & 4) == 0;
  }
  else
  {
    if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) == 0 )
      goto LABEL_18;
    v2 = (HIDWORD(Resource[2].Reserved2) & 2) == 0;
  }
  if ( !v2 )
  {
    ++LODWORD(Resource[6].OwnerTable);
    ++HIDWORD(Resource[2].SpinLock);
    PopDripsWatchdogScheduleNextTimer(&Resource[1].SystemResourcesList.Blink);
    v3 = (struct _OWNER_ENTRY *)MEMORY[0xFFFFF78000000008];
    PopCalculateIdleInformation((__int64)&v21);
    v4 = v22.TableSize - Resource[3].OwnerEntry.TableSize;
    if ( v22.TableSize != Resource[3].OwnerEntry.TableSize )
    {
      v5 = v21;
      v6 = PopDripsWatchdogDebounceTickInterval;
      v7 = v22;
      HIDWORD(Resource[2].SpinLock) = 0;
      *(_OWORD *)&Resource[3].SharedWaiters = v5;
      Resource[3].OwnerTable = v3;
      Resource[3].OwnerEntry = v7;
      LODWORD(Resource[3].SystemResourcesList.Flink) = v6;
      Resource[3].SystemResourcesList.Blink = (struct _LIST_ENTRY *)v3;
    }
    Flink = (unsigned int)Resource[3].SystemResourcesList.Flink;
    if ( Flink )
    {
      if ( HIDWORD(Resource[2].SpinLock) < Flink )
      {
        PopDirectedDripsClearDisengageReason(0);
      }
      else
      {
        PopDirectedDripsSetDisengageReason(0);
        LODWORD(Resource[3].SystemResourcesList.Flink) = PopDripsWatchdogDebounceTickInterval
                                                       + HIDWORD(Resource[2].SpinLock);
      }
    }
    Reserved2_high = HIDWORD(Resource[2].Reserved2);
    if ( (Reserved2_high & 4) == 0 )
    {
      Flink_high = HIDWORD(Resource[1].SystemResourcesList.Flink);
      SpinLock = Resource[2].SpinLock;
      v12 = (char *)v3 - (char *)Resource[3].SystemResourcesList.Blink;
      v13 = (char *)v3 - (char *)Resource[3].OwnerTable;
      v24 = *(_QWORD *)&Resource[6].ActiveCount;
      ActiveCount = Resource[3].ActiveCount;
      HIDWORD(Resource[2].Reserved2) = Reserved2_high | 4;
      ExReleaseResourceLite(Resource);
      KeLeaveCriticalRegion();
      PopAcquirePolicyLock(v15, v14);
      if ( v4 || qword_140E27A10 )
      {
        PopReleasePolicyLock(v17, v16, v18, v19, v20);
      }
      else
      {
        PopReleasePolicyLock(v17, v16, v18, v19, v20);
        PopDripsWatchdogCallbackHandler(Flink_high, SpinLock, v12, v13, v24, ActiveCount);
      }
      PiDmObjectManagerAcquireExclusiveLock(Resource);
      Resource[3].SystemResourcesList.Blink = (struct _LIST_ENTRY *)v3;
      HIDWORD(Resource[2].Reserved2) &= ~4u;
    }
  }
LABEL_18:
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
}
