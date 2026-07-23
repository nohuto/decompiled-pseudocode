/*
 * XREFs of CmSiSetProcessWorkingSetMaximum @ 0x140669CCC
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x1407D87A0 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmSiRWLockReleaseExclusive @ 0x1409F6640 (CmSiRWLockReleaseExclusive.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1409FF8F8 (CmpVolumeManagerLockContextListExclusive.c)
 */

__int64 CmSiSetProcessWorkingSetMaximum()
{
  unsigned int v0; // ebx
  int v1; // eax
  __int64 v2; // r8
  __int64 v3; // r9
  _BYTE v5[8]; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v6[3]; // [rsp+38h] [rbp-40h] BYREF

  memset(v6, 0, sizeof(v6));
  KiStackAttachProcess(*((_KPROCESS **)&CmpRegistryProcess + 1), 0, (__int64)v6);
  CmpVolumeManagerLockContextListExclusive(&xmmword_140EF7050);
  v0 = 0;
  v5[0] = 0;
  v1 = MmAdjustWorkingSetSizeEx(xmmword_140EF7060, 0x4000000uLL, 0, 1, 0, v5);
  if ( v1 < 0 )
    v0 = v1;
  else
    *((_QWORD *)&xmmword_140EF7060 + 1) = 0x4000000LL;
  CmSiRWLockReleaseExclusive((ULONG_PTR)&xmmword_140EF7050);
  KiUnstackDetachProcess((__int64)v6, 0, v2, v3);
  return v0;
}
