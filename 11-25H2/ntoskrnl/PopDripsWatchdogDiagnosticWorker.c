/*
 * XREFs of PopDripsWatchdogDiagnosticWorker @ 0x140753350
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PopCalculateIdleInformation @ 0x140486AEC (PopCalculateIdleInformation.c)
 *     PopDeepSleepEnabled @ 0x140494C44 (PopDeepSleepEnabled.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404A4824 (PopOkayToQueueNextWorkItem.c)
 *     Feature_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline @ 0x1404F25D8 (Feature_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline.c)
 *     PopDiagTraceCsDripsDivergence @ 0x1405CFC80 (PopDiagTraceCsDripsDivergence.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x140753278 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x1407535B8 (PopDripsWatchdogUpdateMetrics.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x1407563C8 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x1407564A0 (PopDripsWatchdogTakeAction.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x140968EE4 (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A1EF7C (PopDripsWatchdogScheduleNextTimer.c)
 */

void __fastcall PopDripsWatchdogDiagnosticWorker(PERESOURCE Resource)
{
  ULONG *p_ActiveEntries; // r15
  char *v3; // rdi
  unsigned __int64 v4; // rdi
  unsigned __int8 v5; // si
  struct _LIST_ENTRY *Flink; // rax
  int SharedWaiters_high; // ecx
  OWNER_ENTRY OwnerEntry; // xmm0
  ULONG NumberOfSharedWaiters; // eax
  __int64 v10; // xmm1_8
  unsigned int Flink_high; // r14d
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
  v3 = (char *)MEMORY[0xFFFFF78000000008];
  PiDmObjectManagerAcquireExclusiveLock(Resource);
  if ( (unsigned int)Feature_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline() )
  {
    HIDWORD(Resource[5].SharedWaiters) &= ~2u;
    PopOkayToQueueNextWorkItem((__int64)&Resource[4].SpinLock);
    if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) == 0 )
      goto LABEL_21;
    if ( v3 <= (char *)Resource[5].ExclusiveWaiters + 10000000 )
    {
      PopDripsWatchdogScheduleNextTimer(p_ActiveEntries);
      goto LABEL_21;
    }
  }
  else if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) == 0
         || (HIDWORD(Resource[5].SharedWaiters) & 2) == 0
         || (unsigned __int64)(v3 - (char *)Resource[5].ExclusiveWaiters) < 0x1312D00 )
  {
    goto LABEL_21;
  }
  ++LODWORD(Resource[6].OwnerTable);
  v14 = 0;
  v15 = 0LL;
  v13 = 0;
  PopCalculateIdleInformation((__int64)&v16);
  PopDripsWatchdogUpdateMetrics(
    (_DWORD)Resource,
    (_DWORD)v3,
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
  SharedWaiters_high = HIDWORD(Resource[5].SharedWaiters);
  if ( (SharedWaiters_high & 4) == 0 )
  {
    OwnerEntry = Resource[5].OwnerEntry;
    NumberOfSharedWaiters = Resource[5].NumberOfSharedWaiters;
    v10 = *(_QWORD *)&Resource[5].ActiveEntries;
    Flink_high = HIDWORD(Resource[1].SystemResourcesList.Flink);
    OwnerTable = (unsigned int)Resource[6].OwnerTable;
    HIDWORD(Resource[5].SharedWaiters) = SharedWaiters_high | 4;
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
    else if ( !qword_140E27A10 )
    {
      PopDripsWatchdogTakeAction(&v18, Flink_high, OwnerTable);
    }
    PopDiagTraceCsDripsDivergence(v5, v15, v4);
    if ( v5 )
      PopDripsWatchdogCheckHwDivergence(v4, v15);
    PiDmObjectManagerAcquireExclusiveLock(Resource);
    HIDWORD(Resource[5].SharedWaiters) &= ~4u;
  }
LABEL_21:
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
}
