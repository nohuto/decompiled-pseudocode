/*
 * XREFs of MmAssignProcessToJob @ 0x1408E8398
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1408E7184 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140A173D0 (PspAssignProcessToJob.c)
 * Callees:
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1402BAD10 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1404065E0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1408E84D0 (PspChangeJobMemoryUsageByProcess.c)
 *     MiUnlockVadRange @ 0x1408E8A30 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1408E8B10 (MiLockVadRange.c)
 */

__int64 __fastcall MmAssignProcessToJob(__int64 a1, __int64 a2, int a3)
{
  int v3; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int8 v9; // di
  _OWORD v11[3]; // [rsp+20h] [rbp-68h] BYREF

  v3 = 0;
  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)a1 )
  {
    v3 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v11);
  }
  v7 = MiLockVadRange(a1, -1LL, -1LL, 0LL);
  if ( v7 || (*(_DWORD *)(a1 + 1532) & 1) != 0 )
  {
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
    v8 = *(_QWORD *)(a1 + 984);
    *(_QWORD *)(a1 + 632) = *(_QWORD *)(a1 + 672);
    v9 = PspChangeJobMemoryUsageByProcess(a3 | 3u, v8, a1);
    _InterlockedOr((volatile signed __int32 *)(a1 + 496), 0x10u);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
  }
  else
  {
    v9 = 0;
  }
  MiUnlockVadRange(a1, -1LL, v7, 0LL);
  if ( v3 )
    KiUnstackDetachProcess((__int64)v11, 0);
  return v9;
}
