/*
 * XREFs of PspInitializeJobStructures @ 0x140C37E38
 * Callers:
 *     PspInitPhase0 @ 0x140C676AC (PspInitPhase0.c)
 * Callees:
 *     ExCreateHandleTable @ 0x14094D1CC (ExCreateHandleTable.c)
 */

char PspInitializeJobStructures()
{
  __int64 HandleTable; // rax
  int v1; // ecx

  HandleTable = ExCreateHandleTable(0LL, 0);
  PspUniqueJobIdTable = HandleTable;
  if ( HandleTable )
  {
    *(_BYTE *)(HandleTable + 44) |= 1u;
    v1 = PspJobTimeLimitsPeriodSeconds;
    qword_140FDA070 = (__int64)&PspJobList;
    PspJobList = (__int64)&PspJobList;
    PspJobListLock = 0LL;
    PspJobAssignmentLock = 0LL;
    if ( (unsigned int)(PspJobTimeLimitsPeriodSeconds - 1) > 9 )
    {
      v1 = 7;
      PspJobTimeLimitsPeriodSeconds = 7;
    }
    PspJobNotificationItem.WorkerRoutine = (void (__fastcall *)(void *))PspJobNotificationWorker;
    PspJobTimeLimitsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspJobTimeLimitsWork;
    PspJobTimeLimitsCount = v1;
    PspStorageBitmap.Buffer = (unsigned int *)&PspStorageBitmapBits;
    PspJobNotificationItem.Parameter = 0LL;
    PspJobNotificationItem.List.Flink = 0LL;
    PspJobTimeLimitsWorkItem.Parameter = 0LL;
    PspJobTimeLimitsWorkItem.List.Flink = 0LL;
    PspStorageBitmapLock = 0LL;
    PspStorageBitmap.SizeOfBitMap = 32;
    PspStorageExpansionBitmap.SizeOfBitMap = 256;
    PspStorageExpansionBitmap.Buffer = (unsigned int *)&PspStorageExpansionBitmapBits;
    if ( !PspJobNoWakeChargeLimit )
      PspJobNoWakeChargeLimit = 50;
    if ( !PspSystemNoWakeChargeLimit )
      PspSystemNoWakeChargeLimit = 200;
    LOBYTE(HandleTable) = 1;
  }
  return HandleTable;
}
