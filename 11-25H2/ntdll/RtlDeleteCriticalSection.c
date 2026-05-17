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

__int64 __fastcall RtlDeleteCriticalSection(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char *v5; // rcx
  unsigned int v6; // r15d
  _QWORD *v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r14
  _QWORD *SchedulerSharedDataSlot; // r8
  __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx

  v5 = *(char **)(a1 + 24);
  if ( (unsigned __int64)(v5 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v7 = 0LL;
    v6 = 0;
  }
  else
  {
    v6 = NtClose(v5);
    v7 = 0LL;
  }
  v8 = *(_QWORD *)a1;
  if ( (unsigned __int64)(*(_QWORD *)a1 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v9 = *(_DWORD *)(a1 + 32) & 0x4000000;
    SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      v11 = 0LL;
      v12 = SchedulerSharedDataSlot;
      while ( *v12 )
      {
        v11 = (unsigned int)(v11 + 1);
        ++v12;
        if ( (unsigned int)v11 >= 8 )
          goto LABEL_11;
      }
      v7 = &SchedulerSharedDataSlot[v11];
    }
LABEL_11:
    if ( v7 )
      *v7 = &RtlCriticalSectionLock;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&RtlCriticalSectionLock, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(
        (unsigned __int64)&RtlCriticalSectionLock,
        (unsigned __int64)v7,
        SchedulerSharedDataSlot,
        a4);
    v14 = v8 + 16;
    v15 = *(_QWORD *)(v8 + 16);
    if ( v15 )
    {
      v16 = *(_QWORD **)(v8 + 24);
      if ( *(_QWORD *)(v15 + 8) != v14 || *v16 != v14 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    v17 = *(unsigned __int16 *)(v8 + 2) + (*(unsigned __int16 *)(v8 + 44) << 16);
    if ( RtlpStackTraceDatabase )
    {
      if ( (_DWORD)v17 )
      {
        if ( (unsigned int)v17 <= *(_DWORD *)(RtlpStackTraceDatabase + 180) )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(RtlpStackTraceDatabase + 184) - 8 * v17);
          if ( v18 )
          {
            if ( RtlpStackTraceDatabase )
              RtlStdReleaseStackTrace(RtlpStackTraceDatabase, v18);
          }
        }
      }
    }
    *(_OWORD *)v8 = 0LL;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_OWORD *)(v8 + 32) = 0LL;
    if ( !v9 )
      RtlpFreeDebugInfo(v8);
  }
  if ( *(void **)(a1 + 16) == NtCurrentTeb()->ClientId.UniqueThread )
    RtlAbPostRelease(a1, 0LL);
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return v6;
}
