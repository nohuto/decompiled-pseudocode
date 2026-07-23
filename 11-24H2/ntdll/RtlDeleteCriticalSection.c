/*
 * XREFs of RtlDeleteCriticalSection @ 0x180027610
 * Callers:
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlDeleteResource @ 0x180027580 (RtlDeleteResource.c)
 *     RtlDestroyHeap @ 0x1800280C0 (RtlDestroyHeap.c)
 *     EtwpFreeLoggerContext @ 0x1800AA48C (EtwpFreeLoggerContext.c)
 *     RtlTraceDatabaseDestroy @ 0x180146630 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     RtlStdReleaseStackTrace @ 0x1800310D0 (RtlStdReleaseStackTrace.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlAbPostRelease @ 0x1800CEFC0 (RtlAbPostRelease.c)
 *     RtlpFreeDebugInfo @ 0x1800F07C0 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 */

NTSTATUS __cdecl RtlDeleteCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  char *LockSemaphore; // rcx
  NTSTATUS v3; // r15d
  _QWORD *v4; // rdx
  _RTL_CRITICAL_SECTION_DEBUG *DebugInfo; // rdi
  __int64 v6; // r14
  _QWORD *SchedulerSharedDataSlot; // r8
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _LIST_ENTRY *p_ProcessLocksList; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rdx
  __int64 v14; // rdx

  LockSemaphore = (char *)CriticalSection->LockSemaphore;
  if ( (unsigned __int64)(LockSemaphore - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v4 = 0LL;
    v3 = 0;
  }
  else
  {
    v3 = NtClose(LockSemaphore);
    v4 = 0LL;
  }
  DebugInfo = CriticalSection->DebugInfo;
  if ( (unsigned __int64)&CriticalSection->DebugInfo[-1].Identifier + 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = CriticalSection->SpinCount & 0x4000000;
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      v8 = 0LL;
      v9 = SchedulerSharedDataSlot;
      while ( *v9 )
      {
        v8 = (unsigned int)(v8 + 1);
        ++v9;
        if ( (unsigned int)v8 >= 8 )
          goto LABEL_11;
      }
      v4 = &SchedulerSharedDataSlot[v8];
    }
LABEL_11:
    if ( v4 )
      *v4 = &RtlCriticalSectionLock;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlCriticalSectionLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(&RtlCriticalSectionLock);
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
    v14 = DebugInfo->CreatorBackTraceIndex + (DebugInfo->CreatorBackTraceIndexHigh << 16);
    if ( RtlpStackTraceDatabase )
    {
      if ( (_DWORD)v14 )
      {
        if ( (unsigned int)v14 <= HIDWORD(RtlpStackTraceDatabase[22].Ptr) )
        {
          v14 = *(_QWORD *)(RtlpStackTraceDatabase[23].Value - 8 * v14);
          if ( v14 )
          {
            if ( RtlpStackTraceDatabase )
              RtlStdReleaseStackTrace();
          }
        }
      }
    }
    *(_OWORD *)&DebugInfo->Type = 0LL;
    DebugInfo->ProcessLocksList = 0LL;
    *(_OWORD *)&DebugInfo->EntryCount = 0LL;
    if ( !v6 )
      RtlpFreeDebugInfo(DebugInfo, v14);
  }
  if ( CriticalSection->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
    RtlAbPostRelease(CriticalSection, 0LL);
  *(_OWORD *)&CriticalSection->DebugInfo = 0LL;
  *(_OWORD *)&CriticalSection->OwningThread = 0LL;
  CriticalSection->SpinCount = 0LL;
  return v3;
}
