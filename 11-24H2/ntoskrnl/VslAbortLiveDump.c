/*
 * XREFs of VslAbortLiveDump @ 0x140589E60
 * Callers:
 *     IopLiveDumpFreeDumpBuffers @ 0x140495C54 (IopLiveDumpFreeDumpBuffers.c)
 *     HvlPrepareLivedumpDescriptor @ 0x140587784 (HvlPrepareLivedumpDescriptor.c)
 *     VslFinalizeLiveDumpInSk @ 0x14058A16C (VslFinalizeLiveDumpInSk.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 VslAbortLiveDump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset_0(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(2u, 0x3Fu, 0, (__int64)v1);
}
