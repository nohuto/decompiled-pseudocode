/*
 * XREFs of CcApplyLowIoPriorityToThread @ 0x1404D4698
 * Callers:
 *     CcWriteBehindPreProcess @ 0x14027A224 (CcWriteBehindPreProcess.c)
 *     CcWriteBehindReleaseFile @ 0x1404D8118 (CcWriteBehindReleaseFile.c)
 * Callees:
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x140279B04 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PsSetIoPriorityThread @ 0x140330D1C (PsSetIoPriorityThread.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeSetPriorityThread @ 0x140371FE0 (KeSetPriorityThread.c)
 *     CcUpdateSharedCacheMapFlag @ 0x140457374 (CcUpdateSharedCacheMapFlag.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall CcApplyLowIoPriorityToThread(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r14
  int v5; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 *v9; // rdi
  char *v10; // rax
  char *v11; // rbp
  char *v12; // rax
  char *v13; // rbp
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
    v10 = (char *)KeAbPreAcquire(v7 + 1280, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v10, (__int64)v9);
    if ( v11 )
      v11[10] = 1;
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
    v12 = (char *)KeAbPreAcquire(a1 + 1280, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(v9, v12, (__int64)v9);
    if ( v13 )
      v13[10] = 1;
    PsSetIoPriorityThread((__int64)CurrentThread, *(_DWORD *)(a1 + 1276));
    v14 = *(_DWORD *)(a1 + 1272);
    if ( v14 != 32 )
      KeSetPriorityThread(KeGetCurrentThread(), v14);
    if ( (a3[38] & 0x20000000) != 0 )
    {
      PsBoostThreadIoEx((__int64)CurrentThread, 1, 0, 0LL);
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
