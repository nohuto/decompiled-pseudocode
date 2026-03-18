/*
 * XREFs of MiFinishLastForkPageTable @ 0x1404A903C
 * Callers:
 *     MiDoneWithThisPageGetAnother @ 0x140A66AF0 (MiDoneWithThisPageGetAnother.c)
 *     MiFreeForkMaps @ 0x140AB02C4 (MiFreeForkMaps.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiUnlockWorkingSetOptimal @ 0x14024231C (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402424F0 (MiLockWorkingSetOptimal.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiFinishLastForkPageTable(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  BOOL v4; // ebx
  _QWORD *v5; // rbp
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rcx
  unsigned __int8 v8; // di
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 result; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rbx
  ULONG_PTR ValidPte; // rbx
  unsigned __int64 v15; // rdi
  char v16[16]; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v17[3]; // [rsp+50h] [rbp-68h] BYREF

  v16[0] = 0;
  memset(v17, 0, sizeof(v17));
  v4 = 1;
  v5 = (_QWORD *)(48 * a2 - 0x220000000000LL);
  v6 = v5[1] | 0x8000000000000000uLL;
  v7 = (__int64)(v6 << 25) >> 16 << 25 >> 16;
  if ( v7 >= 0xFFFFF68000000000uLL )
    v4 = v7 > 0xFFFFF6FFFFFFFFFFuLL;
  v8 = MiLockPageInline(48 * a2 - 0x220000000000LL);
  MiRemoveLockedPageChargeAndDecRef((ULONG_PTR)v5, v9, v10);
  if ( !v4 )
    return MiUnlockPage((__int64)v5, v8);
  if ( (v5[3] & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
  {
    MiDecrementShareCountEx((unsigned __int64)v5, 0LL);
    return MiUnlockPage((__int64)v5, v8);
  }
  v12 = MiMapPageInHyperSpaceWorker(v5[5] & 0xFFFFFFFFFFLL, 0LL, 0x80000000LL) + 8 * ((v6 >> 3) & 0x1FF);
  v13 = *(_QWORD *)v12;
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  result = MiUnlockPage((__int64)v5, v8);
  if ( (v13 & 1) == 0 )
  {
    ValidPte = MiMakeValidPte(v6, a2, -2147483644);
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v17);
    v15 = MiLockWorkingSetOptimal((__int64)&BugCheckParameter1[2].ReadyListHead.Blink, v6, (unsigned __int8 *)v16);
    MiAllocateWsle((__int64)&BugCheckParameter1[2].ReadyListHead.Blink, v6, (ULONG_PTR)v5, 0, ValidPte, 0, 0LL);
    MiUnlockWorkingSetOptimal((__int64)&BugCheckParameter1[2].ReadyListHead.Blink, v15, v16[0]);
    return KiUnstackDetachProcess((__int64)v17, 0);
  }
  return result;
}
