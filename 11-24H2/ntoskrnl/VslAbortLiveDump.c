/*
 * XREFs of VslAbortLiveDump @ 0x14058CB68
 * Callers:
 *     IopLiveDumpFreeDumpBuffers @ 0x14049B264 (IopLiveDumpFreeDumpBuffers.c)
 *     HvlPrepareLivedumpDescriptor @ 0x14058A494 (HvlPrepareLivedumpDescriptor.c)
 *     VslFinalizeLiveDumpInSk @ 0x14058CE7C (VslFinalizeLiveDumpInSk.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 VslAbortLiveDump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 63LL, 0, (__int64)v1);
}
