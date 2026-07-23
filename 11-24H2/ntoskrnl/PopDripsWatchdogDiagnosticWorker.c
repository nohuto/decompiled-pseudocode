/*
 * XREFs of PopDripsWatchdogDiagnosticWorker @ 0x14075EF20
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PopCalculateIdleInformation @ 0x1402B5AAC (PopCalculateIdleInformation.c)
 *     PopDeepSleepEnabled @ 0x14048E410 (PopDeepSleepEnabled.c)
 *     PopOkayToQueueNextWorkItem @ 0x14049FAE4 (PopOkayToQueueNextWorkItem.c)
 *     PopDiagTraceCsDripsDivergence @ 0x1405D1DFC (PopDiagTraceCsDripsDivergence.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x14075EE54 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x14075F150 (PopDripsWatchdogUpdateMetrics.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x140765DA8 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x140765E80 (PopDripsWatchdogTakeAction.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1408B2D34 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A1C994 (PopDripsWatchdogScheduleNextTimer.c)
 */

void __fastcall PopDripsWatchdogDiagnosticWorker(PERESOURCE Resource)
{
  ULONG *p_ActiveEntries; // rbx
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rsi
  unsigned __int8 v5; // r14
  struct _LIST_ENTRY *Flink; // rax
  ULONG v7; // ecx
  OWNER_ENTRY OwnerEntry; // xmm0
  ULONG NumberOfSharedWaiters; // eax
  __int64 v10; // xmm1_8
  unsigned int Flink_high; // r15d
  unsigned int OwnerTable; // r12d
  int v13; // [rsp+30h] [rbp-29h] BYREF
  int v14; // [rsp+34h] [rbp-25h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-21h] BYREF
  __int128 v16; // [rsp+40h] [rbp-19h] BYREF
  __int128 v17; // [rsp+50h] [rbp-9h]
  OWNER_ENTRY v18; // [rsp+60h] [rbp+7h] BYREF
  __int64 v19; // [rsp+70h] [rbp+17h]
  ULONG v20; // [rsp+78h] [rbp+1Fh]

  p_ActiveEntries = &Resource[3].ActiveEntries;
  v19 = 0LL;
  v20 = 0;
  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v3 = MEMORY[0xFFFFF78000000008];
  PiDmObjectManagerAcquireExclusiveLock(Resource);
  p_ActiveEntries[45] &= ~2u;
  PopOkayToQueueNextWorkItem((__int64)(p_ActiveEntries + 34));
  if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) != 0 )
  {
    if ( v3 > *((_QWORD *)p_ActiveEntries + 23) + 10000000LL )
    {
      ++LODWORD(Resource[6].OwnerTable);
      v14 = 0;
      v15 = 0LL;
      v13 = 0;
      PopCalculateIdleInformation((__int64)&v16);
      PopDripsWatchdogUpdateMetrics(
        (_DWORD)Resource,
        v3,
        (unsigned int)&v16,
        (unsigned int)&v14,
        (__int64)&v15,
        (__int64)&v13);
      v4 = 0LL;
      v5 = 0;
      if ( (_QWORD)v17 != -1LL )
      {
        Flink = Resource[6].SystemResourcesList.Flink;
        if ( Flink != (struct _LIST_ENTRY *)-1LL )
        {
          v5 = 1;
          v4 = v17 - (_QWORD)Flink;
        }
      }
      v7 = p_ActiveEntries[45];
      if ( (v7 & 4) == 0 )
      {
        OwnerEntry = Resource[5].OwnerEntry;
        NumberOfSharedWaiters = Resource[5].NumberOfSharedWaiters;
        v10 = *(_QWORD *)&Resource[5].ActiveEntries;
        Flink_high = HIDWORD(Resource[1].SystemResourcesList.Flink);
        OwnerTable = (unsigned int)Resource[6].OwnerTable;
        p_ActiveEntries[45] = v7 | 4;
        v18 = OwnerEntry;
        v20 = NumberOfSharedWaiters;
        v19 = v10;
        PopDripsWatchdogScheduleNextTimer(p_ActiveEntries);
        ExReleaseResourceLite(Resource);
        KeLeaveCriticalRegion();
        if ( v13 )
        {
          if ( !v14 && PopDeepSleepEnabled() )
            PopDeepSleepWatchdogTakeAction(&v18, Flink_high);
        }
        else if ( !qword_140E27D90 )
        {
          PopDripsWatchdogTakeAction(&v18, Flink_high, OwnerTable);
        }
        PopDiagTraceCsDripsDivergence(v5, v15, v4);
        if ( v5 )
          PopDripsWatchdogCheckHwDivergence(v4, v15);
        PiDmObjectManagerAcquireExclusiveLock(Resource);
        p_ActiveEntries[45] &= ~4u;
      }
    }
    else
    {
      PopDripsWatchdogScheduleNextTimer(p_ActiveEntries);
    }
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
}
