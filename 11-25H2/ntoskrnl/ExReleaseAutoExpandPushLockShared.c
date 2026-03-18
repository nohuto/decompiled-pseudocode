/*
 * XREFs of ExReleaseAutoExpandPushLockShared @ 0x140205BC0
 * Callers:
 *     FsRtlReleaseAutoExpandPushLockShared @ 0x1402058B0 (FsRtlReleaseAutoExpandPushLockShared.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1402058E0 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1402059F0 (FsRtlLookupPerFileObjectContext.c)
 *     MiUnlockLoaderEntry @ 0x14036E408 (MiUnlockLoaderEntry.c)
 *     MiUnlockAweVadsShared @ 0x1404BBD6C (MiUnlockAweVadsShared.c)
 * Callees:
 *     ExfReleasePushLockSharedEx @ 0x140205E1C (ExfReleasePushLockSharedEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14029BA20 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExpTryExpandAutoExpandPushLock @ 0x1404D5A5C (ExpTryExpandAutoExpandPushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ExReleaseAutoExpandPushLockShared(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int i; // edx
  _KLOCK_ENTRY *v6; // rcx
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v10; // ett
  ULONG_PTR v11; // rbx
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v2 = BugCheckParameter1;
  v14 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 || (BugCheckParameter2 & 2) != 0 && (BugCheckParameter1 & 2) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v11 = BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (BugCheckParameter2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(v11 + 12));
    v12 = *(_DWORD *)(v11 + 12);
    if ( v12 >= 0x80000000 && (*(_DWORD *)(v11 + 8) & 3) == 0 )
    {
      if ( (unsigned __int16)v12 < (unsigned int)ExpAeCycleCountThreshold
        || (v12 & 0xF0000) >= 0xF0000
        || KeGetCurrentIrql() >= 2u )
      {
        v12 = (v12 >> 2) & 0x3FF33FFF;
        *(_DWORD *)(v11 + 12) = v12;
      }
      else
      {
        ExpTryExpandAutoExpandPushLock(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL);
      }
    }
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v11, 0LL, 17LL);
    if ( result != 17 )
    {
      if ( (v12 & ExpAeSamplingPeriodMask) != 0 )
      {
        ExfReleasePushLockSharedEx(v11, 0LL);
        result = *(unsigned int *)(v11 + 12);
        if ( (unsigned int)result < 0x80000000 )
        {
          result = (unsigned int)(result + 0x100000);
          *(_DWORD *)(v11 + 12) = result;
        }
        goto LABEL_5;
      }
      result = ExfReleasePushLockSharedEx(v11, &v14);
      if ( !v14 )
        goto LABEL_5;
      v13 = *(_DWORD *)(v11 + 12);
      if ( v13 >= 0x80000000 )
        goto LABEL_5;
      result = v14 >> ExpAeCycleCountScaler;
      if ( v14 >> ExpAeCycleCountScaler > 0x1FF )
        result = 511LL;
      v12 = result + v13;
    }
    if ( v12 < 0x80000000 )
      *(_DWORD *)(v11 + 12) = v12 + 0x100000;
  }
  else
  {
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v11, 0LL, 17LL);
    if ( result != 17 )
      result = ExfReleasePushLockShared(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL);
    v11 = *(_QWORD *)(v11 + 8);
  }
LABEL_5:
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _disable();
    KernelAbEntries = CurrentThread->KernelAbEntries;
    for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
    {
      v6 = &KernelAbEntries->Entries[i];
      if ( (*(_QWORD *)&v6->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v11 & 0x7FFFFFFFFFFFFFFCLL)
        && v6->AcquiredByte
        && (*(_QWORD *)&v6->LockState.0 & 1) == 0 )
      {
        v6->AcquiredByte = 0;
        return KiAbEntryFreeAndEnableInterrupts(v6, CurrentThread, v11, 1LL, 0LL);
      }
    }
    result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v11, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v10 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v10 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  return result;
}
