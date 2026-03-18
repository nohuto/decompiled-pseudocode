/*
 * XREFs of MiFinishLastForkPageTable @ 0x1404AEE2C
 * Callers:
 *     MiDoneWithThisPageGetAnother @ 0x140A6ED60 (MiDoneWithThisPageGetAnother.c)
 *     MiFreeForkMaps @ 0x140AAB334 (MiFreeForkMaps.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiUnlockWorkingSetOptimal @ 0x1402C04C8 (MiUnlockWorkingSetOptimal.c)
 *     MiLockWorkingSetOptimal @ 0x1402C0690 (MiLockWorkingSetOptimal.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
  unsigned __int64 v11; // r9
  __int64 result; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rbx
  ULONG_PTR ValidPte; // rbx
  __int64 v16; // r9
  unsigned __int64 v17; // rdi
  unsigned __int8 v18[16]; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v19[3]; // [rsp+50h] [rbp-68h] BYREF

  v18[0] = 0;
  memset(v19, 0, sizeof(v19));
  v4 = 1;
  v5 = (_QWORD *)(48 * a2 - 0x220000000000LL);
  v6 = v5[1] | 0x8000000000000000uLL;
  v7 = (__int64)(v6 << 25) >> 16 << 25 >> 16;
  if ( v7 >= 0xFFFFF68000000000uLL )
    v4 = v7 > 0xFFFFF6FFFFFFFFFFuLL;
  v8 = MiLockPageInline(48 * a2 - 0x220000000000LL);
  MiRemoveLockedPageChargeAndDecRef((ULONG_PTR)v5, v9, v10, v11);
  if ( !v4 )
    return MiUnlockPage((__int64)v5, v8);
  if ( (v5[3] & 0x3FFFFFFFFFFFFFFFuLL) <= 1 )
  {
    MiDecrementShareCountEx((unsigned __int64)v5, 0LL);
    return MiUnlockPage((__int64)v5, v8);
  }
  v13 = MiMapPageInHyperSpaceWorker(v5[5] & 0xFFFFFFFFFFLL, 0LL, 0x80000000) + 8 * ((v6 >> 3) & 0x1FF);
  v14 = *(_QWORD *)v13;
  *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
  *(_QWORD *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
  result = MiUnlockPage((__int64)v5, v8);
  if ( (v14 & 1) == 0 )
  {
    ValidPte = MiMakeValidPte(v6, a2, -2147483644);
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v19);
    v17 = MiLockWorkingSetOptimal((__int64)&BugCheckParameter1[2].ReadyListHead.Blink, v6, v18, v16);
    MiAllocateWsle((__int64)&BugCheckParameter1[2].ReadyListHead.Blink, v6, (ULONG_PTR)v5, 0, ValidPte, 0, 0LL);
    MiUnlockWorkingSetOptimal((__int64)&BugCheckParameter1[2].ReadyListHead.Blink, v17, v18[0]);
    return KiUnstackDetachProcess((__int64)v19, 0LL);
  }
  return result;
}
