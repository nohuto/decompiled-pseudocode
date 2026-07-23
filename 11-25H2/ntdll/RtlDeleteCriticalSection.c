/*
 * XREFs of RtlDeleteCriticalSection @ 0x1800B9240
 * Callers:
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 *     EtwpFreeLoggerContext @ 0x1800B78AC (EtwpFreeLoggerContext.c)
 *     RtlDestroyHeap @ 0x1800B8900 (RtlDestroyHeap.c)
 *     RtlDeleteResource @ 0x1800B91B0 (RtlDeleteResource.c)
 *     RtlTraceDatabaseDestroy @ 0x180149830 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlStdReleaseStackTrace @ 0x180025AC0 (RtlStdReleaseStackTrace.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlAbPostRelease @ 0x1800A0360 (RtlAbPostRelease.c)
 *     RtlpFreeDebugInfo @ 0x1800F7DE0 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 */

NTSTATUS __cdecl RtlDeleteCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  char *v1; // r9
  char *LockSemaphore; // rcx
  NTSTATUS v4; // r15d
  char *v5; // rdx
  _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // rdi
  __int64 v7; // r14
  char *SchedulerSharedDataSlot; // r8
  __int64 v9; // rax
  char *v10; // rcx
  _LIST_ENTRY *p_ProcessLocksList; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx

  LockSemaphore = (char *)CriticalSection->LockSemaphore;
  if ( (unsigned __int64)(LockSemaphore - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v5 = 0LL;
    v4 = 0;
  }
  else
  {
    v4 = NtClose(LockSemaphore);
    v5 = 0LL;
  }
  DebugInfo = CriticalSection->DebugInfo;
  if ( (unsigned __int64)&CriticalSection->DebugInfo[-1].Identifier + 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v7 = CriticalSection->SpinCount & 0x4000000;
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      v9 = 0LL;
      v10 = SchedulerSharedDataSlot;
      while ( *(_QWORD *)v10 )
      {
        v9 = (unsigned int)(v9 + 1);
        v10 += 8;
        if ( (unsigned int)v9 >= 8 )
          goto LABEL_11;
      }
      v5 = &SchedulerSharedDataSlot[8 * v9];
    }
LABEL_11:
    if ( v5 )
      *(_QWORD *)v5 = &RtlCriticalSectionLock;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlCriticalSectionLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(
        (unsigned __int64)&RtlCriticalSectionLock,
        (unsigned __int64)v5,
        SchedulerSharedDataSlot,
        v1);
    p_ProcessLocksList = &DebugInfo->ProcessLocksList;
    Flink = DebugInfo->ProcessLocksList.Flink;
    if ( Flink )
    {
      Blink = DebugInfo->ProcessLocksList.Blink;
      if ( Flink->Blink != p_ProcessLocksList || Blink->Flink != p_ProcessLocksList )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    v15 = DebugInfo->CreatorBackTraceIndex + (DebugInfo->CreatorBackTraceIndexHigh << 16);
    if ( RtlpStackTraceDatabase )
    {
      if ( (_DWORD)v15 )
      {
        if ( (unsigned int)v15 <= HIDWORD(RtlpStackTraceDatabase[22].Ptr) )
        {
          v16 = *(_QWORD *)(RtlpStackTraceDatabase[23].Value - 8 * v15);
          if ( v16 )
          {
            if ( RtlpStackTraceDatabase )
              RtlStdReleaseStackTrace((__int64)RtlpStackTraceDatabase, v16);
          }
        }
      }
    }
    *(_OWORD *)&DebugInfo->Type = 0LL;
    DebugInfo->ProcessLocksList = 0LL;
    *(_OWORD *)&DebugInfo->EntryCount = 0LL;
    if ( !v7 )
      RtlpFreeDebugInfo(DebugInfo);
  }
  if ( CriticalSection->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
    RtlAbPostRelease((__int64)CriticalSection, 0LL);
  *(_OWORD *)&CriticalSection->DebugInfo = 0LL;
  *(_OWORD *)&CriticalSection->OwningThread = 0LL;
  CriticalSection->SpinCount = 0LL;
  return v4;
}
