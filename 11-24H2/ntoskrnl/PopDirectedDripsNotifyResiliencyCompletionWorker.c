/*
 * XREFs of PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x14049DBB0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopPdcCompleteResiliencyCallback @ 0x140A8AF3C (PopPdcCompleteResiliencyCallback.c)
 */

__int64 __fastcall PopDirectedDripsNotifyResiliencyCompletionWorker(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  unsigned int v3; // esi
  char *v4; // rax
  char *v5; // rbp
  __int64 result; // rax
  __int64 v7; // rcx

  v1 = (unsigned __int64 *)(a1 + 160);
  v3 = 0;
  v4 = (char *)KeAbPreAcquire(a1 + 160, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v4, (__int64)v1);
  if ( v5 )
    v5[10] = 1;
  if ( *(_BYTE *)(a1 + 176) )
  {
    v3 = *(_DWORD *)(a1 + 172);
    *(_DWORD *)(a1 + 172) = 0;
    *(_BYTE *)(a1 + 176) = 0;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 216), 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  result = KeAbPostRelease((ULONG_PTR)v1);
  if ( v3 )
    return PopPdcCompleteResiliencyCallback(v7, v3);
  return result;
}
