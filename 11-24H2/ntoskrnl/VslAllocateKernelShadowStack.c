/*
 * XREFs of VslAllocateKernelShadowStack @ 0x140A39874
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslAllocateKernelShadowStack(
        __int64 a1,
        unsigned int a2,
        int a3,
        const void *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 result; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v13; // [rsp+30h] [rbp-98h]
  int v14; // [rsp+38h] [rbp-90h]
  _BYTE v15[80]; // [rsp+40h] [rbp-88h] BYREF

  memset_0(v11, 0, 0x68uLL);
  if ( a5 > 9 )
    return 3221225485LL;
  v12 = a1;
  v13 = __PAIR64__(a5, a2);
  v14 = a3;
  memmove(v15, a4, 8LL * a5);
  result = VslpEnterIumSecureMode(2u, 0xE6u, 0, (__int64)v11);
  if ( (int)result >= 0 )
    *a6 = v13;
  return result;
}
