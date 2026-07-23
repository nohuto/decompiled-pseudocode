/*
 * XREFs of ExReleaseAutoExpandPushLockShared @ 0x14028E600
 * Callers:
 *     FsRtlLookupPerFileObjectContext @ 0x14028F020 (FsRtlLookupPerFileObjectContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x14028FE70 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlReleaseAutoExpandPushLockShared @ 0x14028FF80 (FsRtlReleaseAutoExpandPushLockShared.c)
 *     MiUnlockLoaderEntry @ 0x1402BBFE8 (MiUnlockLoaderEntry.c)
 *     MiUnlockAweVadsShared @ 0x1404B5F4C (MiUnlockAweVadsShared.c)
 * Callees:
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14028D3B0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     ExfReleasePushLockSharedEx @ 0x140405F2C (ExfReleasePushLockSharedEx.c)
 *     ExpTryExpandAutoExpandPushLock @ 0x1404CE6E0 (ExpTryExpandAutoExpandPushLock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // si
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int v5; // edx
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  __int64 v11; // rdx
  int v12; // ett
  ULONG_PTR v13; // rbx
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v2 = BugCheckParameter1;
  v16 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 || (BugCheckParameter2 & 2) != 0 && (BugCheckParameter1 & 2) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v13 = BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (BugCheckParameter2 & 1) != 0 )
  {
    _m_prefetchw((const void *)(v13 + 12));
    v14 = *(_DWORD *)(v13 + 12);
    if ( v14 >= 0x80000000 && (*(_DWORD *)(v13 + 8) & 3) == 0 )
    {
      if ( (unsigned __int16)v14 < (unsigned int)ExpAeCycleCountThreshold
        || (v14 & 0xF0000) >= 0xF0000
        || KeGetCurrentIrql() >= 2u )
      {
        v14 = (v14 >> 2) & 0x3FF33FFF;
        *(_DWORD *)(v13 + 12) = v14;
      }
      else
      {
        ExpTryExpandAutoExpandPushLock(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL);
      }
    }
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v13, 0LL, 17LL);
    if ( result != 17 )
    {
      if ( (v14 & ExpAeSamplingPeriodMask) != 0 )
      {
        ExfReleasePushLockSharedEx(v13, 0LL);
        result = *(unsigned int *)(v13 + 12);
        if ( (unsigned int)result < 0x80000000 )
        {
          result = (unsigned int)(result + 0x100000);
          *(_DWORD *)(v13 + 12) = result;
        }
        goto LABEL_5;
      }
      result = ExfReleasePushLockSharedEx(v13, &v16);
      if ( !v16 )
        goto LABEL_5;
      v15 = *(_DWORD *)(v13 + 12);
      if ( v15 >= 0x80000000 )
        goto LABEL_5;
      result = v16 >> ExpAeCycleCountScaler;
      if ( v16 >> ExpAeCycleCountScaler > 0x1FF )
        result = 511LL;
      v14 = result + v15;
    }
    if ( v14 < 0x80000000 )
      *(_DWORD *)(v13 + 12) = v14 + 0x100000;
  }
  else
  {
    result = _InterlockedCompareExchange64((volatile signed __int64 *)v13, 0LL, 17LL);
    if ( result != 17 )
      result = ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter2 & 0xFFFFFFFFFFFFFFFCuLL));
    v13 = *(_QWORD *)(v13 + 8);
  }
LABEL_5:
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _disable();
    KernelAbEntries = CurrentThread->KernelAbEntries;
    v5 = 0;
    v6 = v13 & 0x7FFFFFFFFFFFFFFCLL;
    while ( v5 < KernelAbEntries->EntryCount )
    {
      v7 = (__int64)&KernelAbEntries->Entries[v5];
      if ( (*(_QWORD *)v7 & 0x7FFFFFFFFFFFFFFCLL) == v6 && *(_BYTE *)(v7 + 10) && (*(_QWORD *)v7 & 1) == 0 )
      {
        *(_BYTE *)(v7 + 10) = 0;
        return KiAbEntryFreeAndEnableInterrupts(v7, (ULONG_PTR)CurrentThread, v13, 1LL, 0LL);
      }
      ++v5;
    }
    result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v13, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v11 = (unsigned int)result;
        LODWORD(v11) = result & 0xFFDFFFFF;
        v12 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v12 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb, v11, SchedulerAssist, v6);
    }
    _enable();
  }
  return result;
}
