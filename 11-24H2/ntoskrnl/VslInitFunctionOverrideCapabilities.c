/*
 * XREFs of VslInitFunctionOverrideCapabilities @ 0x14058F0A8
 * Callers:
 *     MiInitializeFunctionOverrides @ 0x140C4F99C (MiInitializeFunctionOverrides.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x140266DCC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140267E9C (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslInitFunctionOverrideCapabilities(struct _MDL *a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  __int64 *v4[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v5[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 *v6; // [rsp+88h] [rbp-80h]
  __int64 *v7; // [rsp+90h] [rbp-78h]

  memset_0(v5, 0, 0x68uLL);
  memset_0(v4, 0, 0x48uLL);
  result = VslpLockPagesForTransfer((__int64)v4, a1, 0x5Au, IoWriteAccess, 6u);
  if ( (int)result >= 0 )
  {
    v6 = v4[0];
    v7 = v4[7];
    v3 = VslpEnterIumSecureMode(2u, 227LL, 0, (__int64)v5);
    VslpUnlockPagesForTransfer(v4);
    return v3;
  }
  return result;
}
