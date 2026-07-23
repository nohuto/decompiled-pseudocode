/*
 * XREFs of VslResetKernelShadowStack @ 0x140A4627C
 * Callers:
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslResetKernelShadowStack(int a1, __int64 *a2)
{
  __int64 result; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  int v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]

  memset_0(v5, 0, 0x68uLL);
  v7 = *a2;
  v6 = a1;
  result = VslpEnterIumSecureMode(2u, 0xE8u, 0, (__int64)v5);
  if ( (int)result >= 0 )
    *a2 = v7;
  return result;
}
