/*
 * XREFs of MiFlushWaitForReadInProgress @ 0x1404C9D74
 * Callers:
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 * Callees:
 *     MiWaitForCollidedFaultComplete @ 0x14023B89C (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x14023BBE8 (MiObtainProtoReference.c)
 *     MiInitializePageFaultPacket @ 0x1403975B0 (MiInitializePageFaultPacket.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiFlushWaitForReadInProgress(__int64 *a1, __int64 a2, char a3)
{
  char v6; // r9
  int v8[4]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v9[20]; // [rsp+40h] [rbp-C8h] BYREF

  memset_0(v9, 0, 0x98uLL);
  v8[0] = 1;
  MiInitializePageFaultPacket(0LL, 0LL, 0, 0LL, 0LL, (__int64)v9);
  MiObtainProtoReference(a2, v6 + 1);
  return MiWaitForCollidedFaultComplete(v9, a1, a2, a3, v8);
}
