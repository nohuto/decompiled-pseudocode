/*
 * XREFs of PopDirectedDripsDiagNotifySessionStart @ 0x140AB66B0
 * Callers:
 *     PopDirectedDripsNotify @ 0x140A69400 (PopDirectedDripsNotify.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall PopDirectedDripsDiagNotifySessionStart(__int64 a1, int a2)
{
  __int64 result; // rax
  int v5; // ett
  _QWORD *v6; // rax
  signed __int8 v7; // cf
  _QWORD *v8; // rbx

  _m_prefetchw(&PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState.HandleAttributes;
  do
  {
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&PopDirectedDripsState,
                             result,
                             result);
  }
  while ( v5 != (_DWORD)result );
  if ( (result & 1) != 0 )
  {
    v6 = KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsDiagLock, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&PopDirectedDripsDiagLock, (__int64)v6, (__int64)&PopDirectedDripsDiagLock);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    qword_140F06640 = a1;
    dword_140F06648 = a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  return result;
}
