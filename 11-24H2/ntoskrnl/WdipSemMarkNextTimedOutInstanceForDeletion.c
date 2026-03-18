/*
 * XREFs of WdipSemMarkNextTimedOutInstanceForDeletion @ 0x140A47E04
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x140A47800 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 *__fastcall WdipSemMarkNextTimedOutInstanceForDeletion(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rsi
  _QWORD *v4; // rax
  signed __int8 v5; // cf
  _QWORD *v6; // rbx
  signed __int64 v7; // rdx
  ULONG_PTR v8; // rtt
  __int64 *v10; // rdx
  __int64 *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&qword_140EFFEF8, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140EFFEF8, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140EFFEF8, (__int64)v4, (__int64)&qword_140EFFEF8);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
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
  _m_prefetchw(&qword_140EFFEF8);
  v7 = qword_140EFFEF8 - 16;
  if ( (qword_140EFFEF8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (qword_140EFFEF8 & 2) != 0
    || (v8 = qword_140EFFEF8,
        v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140EFFEF8, v7, qword_140EFFEF8)) )
  {
    ExfReleasePushLock(&qword_140EFFEF8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140EFFEF8);
  KeLeaveCriticalRegion();
  return v3;
}
