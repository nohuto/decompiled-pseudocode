/*
 * XREFs of PopDirectedDripsDiagDestroyDeviceDiagnostic @ 0x140A6EC90
 * Callers:
 *     PoFxAbandonDevice @ 0x140A6EBB4 (PoFxAbandonDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall PopDirectedDripsDiagDestroyDeviceDiagnostic(__int64 a1)
{
  __int64 result; // rax
  int v3; // ett
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rbx
  __int64 v7; // rax

  _m_prefetchw(&PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState.HandleAttributes;
  do
  {
    v3 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&PopDirectedDripsState,
                             result,
                             result);
  }
  while ( v3 != (_DWORD)result );
  if ( (result & 1) != 0 )
  {
    v4 = (char *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL);
    v5 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsDiagLock, 0LL);
    v6 = v4;
    if ( v5 )
      ExfAcquirePushLockExclusiveEx(&PopDirectedDripsDiagLock, v4, (__int64)&PopDirectedDripsDiagLock);
    if ( v6 )
      v6[10] = 1;
    v7 = *(_QWORD *)(a1 + 776);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 776) = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  return result;
}
