/*
 * XREFs of CmSiAcquireProcessLockedPagesCharge @ 0x1403C50A0
 * Callers:
 *     HvpViewMapAcquireChargesAndLockViewPages @ 0x140A4D5D8 (HvpViewMapAcquireChargesAndLockViewPages.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1409F4D94 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmSiRWLockReleaseExclusive @ 0x1409F4E3C (CmSiRWLockReleaseExclusive.c)
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
  KiUnstackDetachProcess((__int64)&ApcState, 0LL);
  return (unsigned int)v9;
}
