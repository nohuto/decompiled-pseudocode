/*
 * XREFs of CmSiSetProcessWorkingSetMaximum @ 0x140668AF4
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x1407D8250 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403CD164 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmSiRWLockReleaseExclusive @ 0x1409FD900 (CmSiRWLockReleaseExclusive.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x140A02430 (CmpVolumeManagerLockContextListExclusive.c)
 */

__int64 CmSiSetProcessWorkingSetMaximum()
{
  unsigned int v0; // ebx
  int v1; // eax
  _BYTE v3[8]; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v4[3]; // [rsp+38h] [rbp-40h] BYREF

  memset(v4, 0, sizeof(v4));
  KiStackAttachProcess(*((_KPROCESS **)&CmpRegistryProcess + 1), 0, (__int64)v4);
  CmpVolumeManagerLockContextListExclusive(&xmmword_140EF6E10);
  v0 = 0;
  v3[0] = 0;
  v1 = MmAdjustWorkingSetSizeEx(xmmword_140EF6E20, 0x4000000uLL, 0, 1, 0, v3);
  if ( v1 < 0 )
    v0 = v1;
  else
    *((_QWORD *)&xmmword_140EF6E20 + 1) = 0x4000000LL;
  CmSiRWLockReleaseExclusive((ULONG_PTR)&xmmword_140EF6E10);
  KiUnstackDetachProcess((__int64)v4, 0);
  return v0;
}
