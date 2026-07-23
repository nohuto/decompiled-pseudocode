/*
 * XREFs of MiFinishLastForkPageTable @ 0x1404A345C
 * Callers:
 *     MiDoneWithThisPageGetAnother @ 0x140A5F8D4 (MiDoneWithThisPageGetAnother.c)
 *     MiFreeForkMaps @ 0x140AAB234 (MiFreeForkMaps.c)
 * Callees:
 *     MiUnlockWorkingSetOptimal @ 0x14020A46C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x14020A640 (MiLockWorkingSetOptimal.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiFinishLastForkPageTable(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  BOOL v6; // ebx
  _QWORD *v7; // rbp
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int8 v10; // di
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rbx
  ULONG_PTR BugCheckParameter3; // rbx
  __int64 v20; // r9
  ULONG_PTR v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  char v24[16]; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v25[3]; // [rsp+50h] [rbp-68h] BYREF

  v24[0] = 0;
  memset(v25, 0, sizeof(v25));
  v6 = 1;
  v7 = (_QWORD *)(48 * a2 - 0x220000000000LL);
  v8 = v7[1] | 0x8000000000000000uLL;
  v9 = (__int64)(v8 << 25) >> 16 << 25 >> 16;
  if ( v9 >= 0xFFFFF68000000000uLL )
    v6 = v9 > 0xFFFFF6FFFFFFFFFFuLL;
  v10 = MiLockPageInline(48 * a2 - 0x220000000000LL, a2, a3, a4);
  MiRemoveLockedPageChargeAndDecRef((__int64)v7, v11, v12, v13);
  if ( !v6 )
    return MiUnlockPage((__int64)v7, v10);
  if ( (v7[3] & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
  {
    MiDecrementShareCountEx((__int64)v7, 0LL, v14, v15);
    return MiUnlockPage((__int64)v7, v10);
  }
  v17 = MiMapPageInHyperSpaceWorker(v7[5] & 0xFFFFFFFFFFLL, 0LL, 0x80000000) + 8 * ((v8 >> 3) & 0x1FF);
  v18 = *(_QWORD *)v17;
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  result = MiUnlockPage((__int64)v7, v10);
  if ( (v18 & 1) == 0 )
  {
    BugCheckParameter3 = MiMakeValidPte(v8, a2, -2147483644);
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v25);
    v21 = MiLockWorkingSetOptimal((__int64)&BugCheckParameter1[2].ReadyListHead.Blink, v8, (unsigned __int8 *)v24, v20);
    MiAllocateWsle(
      (__int64)&BugCheckParameter1[2].ReadyListHead.Blink,
      v8,
      (ULONG_PTR)v7,
      0,
      BugCheckParameter3,
      0,
      0LL);
    MiUnlockWorkingSetOptimal((__int64)&BugCheckParameter1[2].ReadyListHead.Blink, v21, v24[0]);
    return KiUnstackDetachProcess((__int64)v25, 0, v22, v23);
  }
  return result;
}
