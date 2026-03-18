/*
 * XREFs of PspSetProcessAffinityUpdateMode @ 0x1407658B8
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     PspLockUnlockProcessExclusive @ 0x14041D224 (PspLockUnlockProcessExclusive.c)
 *     PspUpdateSingleProcessAffinity @ 0x140765AE0 (PspUpdateSingleProcessAffinity.c)
 */

__int64 __fastcall PspSetProcessAffinityUpdateMode(__int64 a1, int *a2)
{
  _KPROCESS *Process; // rsi
  int v4; // eax
  unsigned int v5; // edx
  __int64 v6; // r8
  signed __int32 DirectoryTableBase; // edx
  bool v8; // zf
  signed __int32 v9; // eax
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = *a2;
  v5 = (*a2 & 2) << 17;
  v6 = v5 | 0x80000;
  if ( (v4 & 1) == 0 )
    v6 = v5;
  _m_prefetchw(&Process[1].DirectoryTableBase);
  DirectoryTableBase = Process[1].DirectoryTableBase;
  do
  {
    if ( (DirectoryTableBase & 0xC0000) == (_DWORD)v6 )
      break;
    if ( (DirectoryTableBase & 0x40000) != 0 )
      return 3221225473LL;
    v9 = _InterlockedCompareExchange(
           (volatile signed __int32 *)&Process[1].DirectoryTableBase,
           v6 | DirectoryTableBase & 0xFFF3FFFF,
           DirectoryTableBase);
    v8 = DirectoryTableBase == v9;
    DirectoryTableBase = v9;
  }
  while ( !v8 );
  if ( (_DWORD)v6 == 0x40000 )
  {
    PspLockUnlockProcessExclusive((__int64)Process, a1, v6, 0x40000LL);
  }
  else if ( (v6 & 0x80000) != 0 && KeDynamicPartitioningSupported )
  {
    --*(_WORD *)(a1 + 484);
    v11 = KeAbPreAcquire((__int64)&PspAffinityUpdateLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspAffinityUpdateLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&PspAffinityUpdateLock,
        0,
        v11,
        (unsigned __int64)&PspAffinityUpdateLock);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    if ( !(unsigned int)KeIsEmptyAffinityEx(PspLastUpdateAffinityMask) )
      PspUpdateSingleProcessAffinity(a1, Process, PspLastUpdateAffinityMask);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspAffinityUpdateLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PspAffinityUpdateLock);
    KeAbPostRelease((ULONG_PTR)&PspAffinityUpdateLock);
    KiLeaveCriticalRegionUnsafe(a1, v12, v13, v14);
  }
  return 0LL;
}
