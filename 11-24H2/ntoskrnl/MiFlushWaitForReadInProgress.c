/*
 * XREFs of MiFlushWaitForReadInProgress @ 0x140272338
 * Callers:
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 * Callees:
 *     MiObtainProtoReference @ 0x14034594C (MiObtainProtoReference.c)
 *     MiInitializePageFaultPacket @ 0x140351870 (MiInitializePageFaultPacket.c)
 *     MiWaitForCollidedFaultComplete @ 0x1404270E4 (MiWaitForCollidedFaultComplete.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiFlushWaitForReadInProgress(int a1, __int64 a2, char a3)
{
  int v6; // r9d
  int v7; // r9d
  int v9[4]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v10[160]; // [rsp+40h] [rbp-C8h] BYREF

  memset_0(v10, 0, 0x98uLL);
  v9[0] = 1;
  MiInitializePageFaultPacket(0, 0, 0, 0, 0LL, (__int64)v10);
  MiObtainProtoReference(a2, (unsigned int)(v6 + 1));
  LOBYTE(v7) = a3;
  return MiWaitForCollidedFaultComplete((unsigned int)v10, a1, a2, v7, (__int64)v9);
}
