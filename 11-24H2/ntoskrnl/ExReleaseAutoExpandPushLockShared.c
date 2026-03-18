/*
 * XREFs of ExReleaseAutoExpandPushLockShared @ 0x14025DFF0
 * Callers:
 *     FsRtlLookupPerFileObjectContext @ 0x14025EA10 (FsRtlLookupPerFileObjectContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x14025F860 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlReleaseAutoExpandPushLockShared @ 0x14025F970 (FsRtlReleaseAutoExpandPushLockShared.c)
 *     MiUnlockLoaderEntry @ 0x1402C7468 (MiUnlockLoaderEntry.c)
 *     MiUnlockAweVadsShared @ 0x1404BB0AC (MiUnlockAweVadsShared.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfReleasePushLockSharedEx @ 0x14040DCDC (ExfReleasePushLockSharedEx.c)
 *     ExpTryExpandAutoExpandPushLock @ 0x1404D5408 (ExpTryExpandAutoExpandPushLock.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // si
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int i; // edx
  __int64 v6; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  int v10; // ett
  ULONG_PTR v11; // rbx
  unsigned int v12; // edi
  unsigned int v13; // edi
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
      result = ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL));
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
      v6 = (__int64)&KernelAbEntries->Entries[i];
      if ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) == (v11 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_BYTE *)(v6 + 10)
        && (*(_QWORD *)v6 & 1) == 0 )
      {
        *(_BYTE *)(v6 + 10) = 0;
        return KiAbEntryFreeAndEnableInterrupts(v6, (ULONG_PTR)CurrentThread, v11, 1, 0LL);
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
