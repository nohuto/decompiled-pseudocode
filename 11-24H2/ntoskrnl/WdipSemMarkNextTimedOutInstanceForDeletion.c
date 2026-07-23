/*
 * XREFs of WdipSemMarkNextTimedOutInstanceForDeletion @ 0x140A3DC24
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140A3D620 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 *__fastcall WdipSemMarkNextTimedOutInstanceForDeletion(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rsi
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rbx
  signed __int64 v7; // rdx
  ULONG_PTR v8; // rtt
  __int64 *v10; // rdx
  __int64 *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire((__int64)&qword_140F021D8, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F021D8, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140F021D8, v4, (__int64)&qword_140F021D8);
  if ( v6 )
    v6[10] = 1;
  if ( a1 )
  {
    v10 = *a1;
    while ( v10 != &WdipSemEnabledInstanceTable )
    {
      v11 = v10;
      v10 = (__int64 *)*v10;
      if ( ++*((_DWORD *)v11 + 10) >= 0xAu && *(_BYTE *)(v11[4] + 1176) && !*((_DWORD *)v11 + 11) )
      {
        *((_DWORD *)v11 + 11) = 1;
        v3 = v11;
        break;
      }
    }
  }
  _m_prefetchw(&qword_140F021D8);
  v7 = qword_140F021D8 - 16;
  if ( (qword_140F021D8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (qword_140F021D8 & 2) != 0
    || (v8 = qword_140F021D8,
        v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F021D8, v7, qword_140F021D8)) )
  {
    ExfReleasePushLock(&qword_140F021D8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F021D8);
  KeLeaveCriticalRegion();
  return v3;
}
