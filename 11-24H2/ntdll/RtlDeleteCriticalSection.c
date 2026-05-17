/*
 * XREFs of RtlDeleteCriticalSection @ 0x18008FEC0
 * Callers:
 *     EtwpFreeLoggerContext @ 0x18008EA0C (EtwpFreeLoggerContext.c)
 *     RtlDestroyHeap @ 0x18008F580 (RtlDestroyHeap.c)
 *     RtlDeleteResource @ 0x18008FE30 (RtlDeleteResource.c)
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 *     RtlTraceDatabaseDestroy @ 0x180148280 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlStdReleaseStackTrace @ 0x18009CB10 (RtlStdReleaseStackTrace.c)
 *     RtlAbPostRelease @ 0x1800D3C50 (RtlAbPostRelease.c)
 *     RtlpFreeDebugInfo @ 0x1800F6260 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 */

__int64 __fastcall RtlDeleteCriticalSection(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
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

  v5 = (char *)a1[3];
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
  v8 = *a1;
  if ( (unsigned __int64)(*a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v9 = a1[4] & 0x4000000;
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
          v17 = *(_QWORD *)(*(_QWORD *)(RtlpStackTraceDatabase + 184) - 8 * v17);
          if ( v17 )
          {
            if ( RtlpStackTraceDatabase )
              RtlStdReleaseStackTrace();
          }
        }
      }
    }
    *(_OWORD *)v8 = 0LL;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_OWORD *)(v8 + 32) = 0LL;
    if ( !v9 )
      RtlpFreeDebugInfo(v8, v17);
  }
  if ( (void *)a1[2] == NtCurrentTeb()->ClientId.UniqueThread )
    RtlAbPostRelease(a1, 0LL, a3);
  *(_OWORD *)a1 = 0LL;
  *((_OWORD *)a1 + 1) = 0LL;
  a1[4] = 0LL;
  return v6;
}
