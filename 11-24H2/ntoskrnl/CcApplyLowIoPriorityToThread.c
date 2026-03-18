/*
 * XREFs of CcApplyLowIoPriorityToThread @ 0x1404DAC78
 * Callers:
 *     CcWriteBehindPreProcess @ 0x1402A8434 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindReleaseFile @ 0x1404DE6F8 (CcWriteBehindReleaseFile.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x14020973C (PsSetIoPriorityThread.c)
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x1402A7D0C (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140461D64 (CcUpdateSharedCacheMapFlag.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

char __fastcall CcApplyLowIoPriorityToThread(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r14
  int v5; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  _QWORD *v12; // rax
  _QWORD *v13; // rbp
  KPRIORITY v14; // edx

  CurrentThread = KeGetCurrentThread();
  v5 = a3[1];
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x51FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a2 )
  {
    LOBYTE(v5) = CcIsWriteBehindThreadpoolAtLowPriority(a1);
    if ( !(_BYTE)v5 || *(_QWORD *)(v7 + 1256) || *(_DWORD *)(v8 + 524) || (*(_DWORD *)(v8 + 152) & 0x10000) != 0 )
      return v5;
    v9 = (unsigned __int64 *)(v7 + 1280);
    v10 = KeAbPreAcquire(v7 + 1280, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, (__int64)v10, (__int64)v9);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    if ( CcIsWriteBehindThreadpoolAtLowPriority(a1) && !*(_QWORD *)(a1 + 1256) && !a3[131] && (a3[38] & 0x10000) == 0 )
    {
      *(_QWORD *)(a1 + 1256) = CurrentThread;
      *(_QWORD *)(a1 + 1264) = a3;
      *(_DWORD *)(a1 + 1276) = PsSetIoPriorityThread((__int64)CurrentThread, 0);
    }
  }
  else
  {
    if ( *(struct _KTHREAD **)(a1 + 1256) != CurrentThread )
      return v5;
    v9 = (unsigned __int64 *)(a1 + 1280);
    v12 = KeAbPreAcquire(a1 + 1280, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, (__int64)v12, (__int64)v9);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    PsSetIoPriorityThread((__int64)CurrentThread, *(_DWORD *)(a1 + 1276));
    v14 = *(_DWORD *)(a1 + 1272);
    if ( v14 != 32 )
      KeSetPriorityThread(KeGetCurrentThread(), v14);
    if ( (a3[38] & 0x20000000) != 0 )
    {
      PsBoostThreadIoEx((__int64)CurrentThread, 1, 0LL, 0LL);
      CcUpdateSharedCacheMapFlag((__int64)a3, 0x20000000, 0);
    }
    *(_QWORD *)(a1 + 1256) = 0LL;
    *(_QWORD *)(a1 + 1264) = 0LL;
    *(_DWORD *)(a1 + 1276) = 5;
    *(_DWORD *)(a1 + 1272) = 32;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v9);
  LOBYTE(v5) = KeAbPostRelease((ULONG_PTR)v9);
  return v5;
}
