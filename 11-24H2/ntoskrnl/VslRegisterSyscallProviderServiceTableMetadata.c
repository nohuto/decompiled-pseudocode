/*
 * XREFs of VslRegisterSyscallProviderServiceTableMetadata @ 0x140710134
 * Callers:
 *     PsRegisterSyscallProviderServiceTableMetadata @ 0x140AA208C (PsRegisterSyscallProviderServiceTableMetadata.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x140266DCC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140267E9C (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslRegisterSyscallProviderServiceTableMetadata(unsigned int a1, unsigned int a2, struct _MDL *a3)
{
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 *v8[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v9[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v10; // [rsp+88h] [rbp-80h]
  __int64 *v11; // [rsp+90h] [rbp-78h]
  __int64 *v12; // [rsp+98h] [rbp-70h]

  v4 = a1;
  memset_0(v9, 0, 0x68uLL);
  memset_0(v8, 0, 0x48uLL);
  result = VslpLockPagesForTransfer((__int64)v8, a3, a2, IoReadAccess, 0);
  if ( (int)result >= 0 )
  {
    v11 = v8[0];
    v12 = v8[7];
    v10 = v4;
    v7 = VslpEnterIumSecureMode(2u, 233LL, 0, (__int64)v9);
    VslpUnlockPagesForTransfer(v8);
    return v7;
  }
  return result;
}
