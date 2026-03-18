/*
 * XREFs of EtwpCoverageCheckCP @ 0x1407AAA94
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x1409047E8 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwpCoverageValidateCP @ 0x1404581BC (EtwpCoverageValidateCP.c)
 *     TelemetryCoverageTableLocateInternal @ 0x1404B4188 (TelemetryCoverageTableLocateInternal.c)
 */

__int64 __fastcall EtwpCoverageCheckCP(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rax
  signed __int8 v7; // cf
  _QWORD *v8; // rsi
  unsigned int *v9; // rsi
  int v10; // edx
  unsigned int *Internal; // rax
  int v12; // r11d
  int v14; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v14 = 0;
  if ( (unsigned int)EtwpCoverageValidateCP((char **)a2, &v14) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((__int64)&EtwpCoverageLock, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpCoverageLock, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&EtwpCoverageLock, (__int64)v6, (__int64)&EtwpCoverageLock);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    v9 = *(unsigned int **)(a1 + 16);
    v10 = *(_DWORD *)(a2 + 8);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    Internal = TelemetryCoverageTableLocateInternal(v9, v10);
    if ( *Internal == v12 )
    {
      v4 = 1;
      *(_DWORD *)(a2 + 12) = v9[6];
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegion();
  }
  return v4;
}
