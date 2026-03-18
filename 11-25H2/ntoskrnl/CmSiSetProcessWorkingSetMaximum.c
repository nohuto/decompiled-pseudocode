/*
 * XREFs of CmSiSetProcessWorkingSetMaximum @ 0x14065D024
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x1407C8AB0 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C5254 (MmAdjustWorkingSetSizeEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1409F4D94 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmSiRWLockReleaseExclusive @ 0x1409F4E3C (CmSiRWLockReleaseExclusive.c)
 */

__int64 CmSiSetProcessWorkingSetMaximum()
{
  unsigned int v0; // ebx
  int v1; // eax
  _BYTE v3[8]; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v4[3]; // [rsp+38h] [rbp-40h] BYREF

  memset(v4, 0, sizeof(v4));
  KiStackAttachProcess(*((_KPROCESS **)&CmpRegistryProcess + 1), 0, (__int64)v4);
  CmpVolumeManagerLockContextListExclusive(&xmmword_140EF6A70);
  v0 = 0;
  v3[0] = 0;
  v1 = MmAdjustWorkingSetSizeEx(xmmword_140EF6A80, 0x4000000uLL, 0, 1, 0, v3);
  if ( v1 < 0 )
    v0 = v1;
  else
    *((_QWORD *)&xmmword_140EF6A80 + 1) = 0x4000000LL;
  CmSiRWLockReleaseExclusive((ULONG_PTR)&xmmword_140EF6A70);
  KiUnstackDetachProcess((__int64)v4, 0LL);
  return v0;
}
