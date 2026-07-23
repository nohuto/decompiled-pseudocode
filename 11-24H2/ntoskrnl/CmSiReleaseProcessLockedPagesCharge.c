/*
 * XREFs of CmSiReleaseProcessLockedPagesCharge @ 0x14046C89C
 * Callers:
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x140968640 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapAcquireChargesAndLockViewPages @ 0x140968A90 (HvpViewMapAcquireChargesAndLockViewPages.c)
 *     HvpViewMapReleaseChargesAndUnlockViewPages @ 0x14096CF10 (HvpViewMapReleaseChargesAndUnlockViewPages.c)
 *     HvpViewMapFreeView @ 0x140A40FA4 (HvpViewMapFreeView.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmSiRWLockReleaseExclusive @ 0x1409F6640 (CmSiRWLockReleaseExclusive.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1409FF8F8 (CmpVolumeManagerLockContextListExclusive.c)
 */

__int64 __fastcall CmSiReleaseProcessLockedPagesCharge(_QWORD *a1, __int64 a2)
{
  struct _KPROCESS *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v11[8]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  v4 = (struct _KPROCESS *)a1[1];
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v4, &ApcState);
  CmpVolumeManagerLockContextListExclusive(a1 + 2);
  v5 = a1[5];
  v6 = a1[4] - a2;
  v7 = *((_DWORD *)a1 + 8) - a2;
  v11[0] = 0;
  MmAdjustWorkingSetSizeEx(v7, v5, 0, 0, 0, (__int64)v11);
  a1[3] -= a2;
  a1[4] = v6;
  CmSiRWLockReleaseExclusive((ULONG_PTR)(a1 + 2));
  return KiUnstackDetachProcess((__int64)&ApcState, 0, v8, v9);
}
