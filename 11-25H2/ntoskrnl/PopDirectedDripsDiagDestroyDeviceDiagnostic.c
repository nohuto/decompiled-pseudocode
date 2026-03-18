/*
 * XREFs of PopDirectedDripsDiagDestroyDeviceDiagnostic @ 0x140A72610
 * Callers:
 *     PoFxAbandonDevice @ 0x140A72534 (PoFxAbandonDevice.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PopDirectedDripsDiagDestroyDeviceDiagnostic(__int64 a1)
{
  __int64 result; // rax
  int v3; // ett
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rbx
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
    v4 = KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL);
    v5 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsDiagLock, 0LL);
    v6 = v4;
    if ( v5 )
      ExfAcquirePushLockExclusiveEx(&PopDirectedDripsDiagLock, v4, (__int64)&PopDirectedDripsDiagLock);
    if ( v6 )
      *((_BYTE *)v6 + 10) = 1;
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
