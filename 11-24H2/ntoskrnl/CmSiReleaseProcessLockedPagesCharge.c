/*
 * XREFs of CmSiReleaseProcessLockedPagesCharge @ 0x1403CD0AC
 * Callers:
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x14097FE30 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapAcquireChargesAndLockViewPages @ 0x140980280 (HvpViewMapAcquireChargesAndLockViewPages.c)
 *     HvpViewMapReleaseChargesAndUnlockViewPages @ 0x140984700 (HvpViewMapReleaseChargesAndUnlockViewPages.c)
 *     HvpViewMapFreeView @ 0x140A4A284 (HvpViewMapFreeView.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403CD164 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmSiRWLockReleaseExclusive @ 0x1409FD900 (CmSiRWLockReleaseExclusive.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x140A02430 (CmpVolumeManagerLockContextListExclusive.c)
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
  return KiUnstackDetachProcess((__int64)&ApcState, 0);
}
