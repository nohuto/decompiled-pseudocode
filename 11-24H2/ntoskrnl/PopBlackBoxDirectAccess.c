/*
 * XREFs of PopBlackBoxDirectAccess @ 0x140AAFBB4
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopBlackBoxDirectAccess(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // rax
  signed __int8 v7; // cf
  char *v8; // rbp
  __int64 v9; // rsi
  __int64 *Pool2; // rax
  __int64 v11; // rax

  v2 = 0;
  if ( *(_QWORD *)a1
    || *(_QWORD *)(a1 + 8)
    || *(_QWORD *)(a1 + 16)
    || *(_DWORD *)(a1 + 24) > 0x18u
    || *(_DWORD *)(a1 + 28) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (char *)KeAbPreAcquire((__int64)&PopBlackBoxLock, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&PopBlackBoxLock, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&PopBlackBoxLock, v6, (__int64)&PopBlackBoxLock);
    if ( v8 )
      v8[10] = 1;
    v9 = 104LL * *(int *)(a1 + 24);
    if ( *(__int64 (**)[2])((char *)&PopBlackBoxEntries + v9 + 80)
      || (Pool2 = (__int64 *)ExAllocatePool2(0x40uLL, 0x1000uLL, 0x206D654Du),
          (*(__int64 (**)[2])((char *)&PopBlackBoxEntries + v9 + 80) = (__int64 (*)[2])Pool2) != 0LL) )
    {
      *(_DWORD *)((char *)&PopBlackBoxEntries + v9 + 16) |= 2u;
      *(__int64 (**)[2])((char *)&PopBlackBoxEntries + v9 + 72) = (__int64 (*)[2])KiQueryUnbiasedInterruptTime();
      v11 = *(__int64 *)((char *)&PopBlackBoxEntries + v9 + 80);
      *(__int64 (**)[2])((char *)&PopBlackBoxEntries + v9 + 88) = (__int64 (*)[2])4096;
      *(__int64 (**)[2])((char *)&PopBlackBoxEntries + v9 + 96) = (__int64 (*)[2])4096;
      *a2 = v11;
      a2[1] = *(__int64 (**)[2])((char *)&PopBlackBoxEntries + v9 + 88);
    }
    else
    {
      v2 = -1073741670;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopBlackBoxLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopBlackBoxLock);
    KeAbPostRelease((ULONG_PTR)&PopBlackBoxLock);
    KeLeaveCriticalRegion();
  }
  return v2;
}
