/*
 * XREFs of ObpStopRuntimeStackTrace @ 0x1407398B4
 * Callers:
 *     ObSetRefTraceInformation @ 0x140738AF4 (ObSetRefTraceInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     RtlpInterlockedFlushSList @ 0x1406A8640 (RtlpInterlockedFlushSList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObpDestroyStackAndObjectTables @ 0x140738B9C (ObpDestroyStackAndObjectTables.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 ObpStopRuntimeStackTrace()
{
  struct _KTHREAD *CurrentThread; // rax
  wchar_t *Buffer; // rsi
  __int64 *v2; // rax
  signed __int8 v3; // cf
  __int64 *v4; // rdi
  char v5; // di
  unsigned int v6; // ecx
  _WORD *v7; // rdi
  _QWORD **v8; // rbp
  PSLIST_ENTRY v9; // rax
  _QWORD *p_Next; // r14

  CurrentThread = KeGetCurrentThread();
  Buffer = 0LL;
  --CurrentThread->SpecialApcDisable;
  v2 = KeAbPreAcquire((__int64)&ObpStackTraceLock, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&ObpStackTraceLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&ObpStackTraceLock, v2, (__int64)&ObpStackTraceLock);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  v5 = ObpTraceFlags;
  if ( (ObpTraceFlags & 2) != 0 )
  {
    if ( (ObpTraceFlags & 0x10) != 0 )
      memset_0(&ObpRuntimeTracePoolTags, 0, 0x40uLL);
    if ( (v5 & 0x20) != 0 )
    {
      Buffer = ObpRuntimeTraceProcessName.Buffer;
      RtlInitUnicodeStringEx(&ObpRuntimeTraceProcessName, 0LL);
    }
    ObpRuntimeTraceFlags = 0;
    v6 = ObpRegTraceFlags | ObpTraceFlags & 0xFFFFFF8C;
    ObpTraceFlags = v6;
    if ( (v6 & 1) != 0 )
    {
      ObpTracePoolTags = (unsigned __int64)&ObpRegTracePoolTags & -(__int64)((v6 & 0x10) != 0);
      ObpTraceProcessName = (PCUNICODE_STRING)((unsigned __int64)&ObpRegTraceProcessName & -(__int64)((v6 & 0x20) != 0));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KeLeaveGuardedRegion();
    }
    else
    {
      ObpTracePoolTags = 0LL;
      ObpTraceProcessName = 0LL;
      ObpStackSequence = 0;
      ObpNumTracedObjects = 0;
      v7 = ObpStackTable;
      v8 = (_QWORD **)ObpObjectTable;
      ObpTraceFlags = v6 & 0xFFFFFF8C;
      v9 = RtlpInterlockedFlushSList(&ObpWorkItemFreeList);
      ObpStackTable = 0LL;
      p_Next = &v9->Next;
      ObpObjectTable = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
      KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
      KeLeaveGuardedRegion();
      ObpDestroyStackAndObjectTables(v7, v8, p_Next);
    }
    if ( Buffer )
      ExFreePoolWithTag(Buffer, 0x7452624Fu);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    KeLeaveGuardedRegion();
  }
  return 0LL;
}
