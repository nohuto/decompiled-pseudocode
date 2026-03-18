/*
 * XREFs of MiFlushWaitForReadInProgress @ 0x1404C9AA4
 * Callers:
 *     MiFlushSection @ 0x14033E540 (MiFlushSection.c)
 * Callees:
 *     MiWaitForCollidedFaultComplete @ 0x14033DB60 (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x14033DEAC (MiObtainProtoReference.c)
 *     MiInitializePageFaultPacket @ 0x140379270 (MiInitializePageFaultPacket.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiFlushWaitForReadInProgress(ULONG_PTR a1, ULONG_PTR a2, unsigned __int8 a3)
{
  char v6; // r9
  int v8[4]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v9[20]; // [rsp+40h] [rbp-C8h] BYREF

  memset_0(v9, 0, 0x98uLL);
  v8[0] = 1;
  MiInitializePageFaultPacket(0LL, 0LL, 0, 0LL, 0LL, (__int64)v9);
  MiObtainProtoReference(a2, v6 + 1);
  return MiWaitForCollidedFaultComplete(v9, a1, a2, a3, v8);
}
