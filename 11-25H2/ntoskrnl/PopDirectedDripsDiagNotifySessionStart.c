/*
 * XREFs of PopDirectedDripsDiagNotifySessionStart @ 0x140AB16A4
 * Callers:
 *     PopDirectedDripsNotify @ 0x140A667C0 (PopDirectedDripsNotify.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PopDirectedDripsDiagNotifySessionStart(__int64 a1, int a2)
{
  __int64 result; // rax
  int v5; // ett
  __int64 *v6; // rax
  signed __int8 v7; // cf
  __int64 *v8; // rbx

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
      ExfAcquirePushLockExclusiveEx(&PopDirectedDripsDiagLock, v6, (__int64)&PopDirectedDripsDiagLock);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    qword_140F06080 = a1;
    dword_140F06088 = a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  return result;
}
