/*
 * XREFs of CmSiAcquireProcessLockedPagesCharge @ 0x1403CCFA8
 * Callers:
 *     HvpViewMapAcquireChargesAndLockViewPages @ 0x140980280 (HvpViewMapAcquireChargesAndLockViewPages.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403CD164 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmSiRWLockReleaseExclusive @ 0x1409FD900 (CmSiRWLockReleaseExclusive.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x140A02430 (CmpVolumeManagerLockContextListExclusive.c)
 */

__int64 __fastcall CmSiAcquireProcessLockedPagesCharge(_QWORD *a1, __int64 a2)
{
  struct _KPROCESS *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbp
  int v7; // ecx
  int v8; // r9d
  int v9; // edi
  _BYTE v11[8]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  v4 = (struct _KPROCESS *)a1[1];
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v4, &ApcState);
  CmpVolumeManagerLockContextListExclusive(a1 + 2);
  v5 = a1[5];
  v6 = a2 + a1[4];
  v7 = a2 + *((_DWORD *)a1 + 8);
  LOBYTE(v8) = 1;
  v11[0] = 0;
  v9 = MmAdjustWorkingSetSizeEx(v7, v5, 0, v8, 0, (__int64)v11);
  if ( v9 >= 0 )
  {
    a1[3] += a2;
    v9 = 0;
    a1[4] = v6;
  }
  CmSiRWLockReleaseExclusive((ULONG_PTR)(a1 + 2));
  KiUnstackDetachProcess((__int64)&ApcState, 0);
  return (unsigned int)v9;
}
