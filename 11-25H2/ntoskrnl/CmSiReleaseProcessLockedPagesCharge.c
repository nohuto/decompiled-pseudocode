/*
 * XREFs of CmSiReleaseProcessLockedPagesCharge @ 0x1403C519C
 * Callers:
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x140881B00 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapReleaseChargesAndUnlockViewPages @ 0x140A40714 (HvpViewMapReleaseChargesAndUnlockViewPages.c)
 *     HvpViewMapFreeView @ 0x140A46244 (HvpViewMapFreeView.c)
 *     HvpViewMapAcquireChargesAndLockViewPages @ 0x140A4D5D8 (HvpViewMapAcquireChargesAndLockViewPages.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1409F4D94 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmSiRWLockReleaseExclusive @ 0x1409F4E3C (CmSiRWLockReleaseExclusive.c)
 */

__int64 __fastcall CmSiReleaseProcessLockedPagesCharge(_QWORD *a1, __int64 a2)
{
  struct _KPROCESS *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbx
  int v7; // ecx
  _BYTE v9[8]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  v4 = (struct _KPROCESS *)a1[1];
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v4, &ApcState);
  CmpVolumeManagerLockContextListExclusive(a1 + 2);
  v5 = a1[5];
  v6 = a1[4] - a2;
  v7 = *((_DWORD *)a1 + 8) - a2;
  v9[0] = 0;
  MmAdjustWorkingSetSizeEx(v7, v5, 0, 0, 0, (__int64)v9);
  a1[3] -= a2;
  a1[4] = v6;
  CmSiRWLockReleaseExclusive((ULONG_PTR)(a1 + 2));
  return KiUnstackDetachProcess((__int64)&ApcState, 0LL);
}
