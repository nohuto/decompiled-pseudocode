/*
 * XREFs of VslRegisterSecurePatch @ 0x14058DDCC
 * Callers:
 *     MiLoadHotPatch @ 0x140A9F9D4 (MiLoadHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x140266DCC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140267E9C (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslRegisterSecurePatch(unsigned int *a1, struct _MDL **a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 *v6[10]; // [rsp+30h] [rbp-79h] BYREF
  _BYTE v7[8]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v8; // [rsp+88h] [rbp-21h]
  __int64 v9; // [rsp+90h] [rbp-19h]
  __int64 v10; // [rsp+98h] [rbp-11h]
  __int64 *v11; // [rsp+A0h] [rbp-9h]
  __int64 *v12; // [rsp+A8h] [rbp-1h]

  memset_0(v7, 0, 0x68uLL);
  memset_0(v6, 0, 0x48uLL);
  result = VslpLockPagesForTransfer((__int64)v6, a2[1], *(unsigned __int16 *)a2, IoReadAccess, 0);
  if ( (int)result >= 0 )
  {
    v8 = *a1;
    v9 = a1[1];
    v10 = a1[6];
    v11 = v6[0];
    v12 = v6[7];
    v5 = VslpEnterIumSecureMode(2u, 72LL, 0, (__int64)v7);
    VslpUnlockPagesForTransfer(v6);
    return v5;
  }
  return result;
}
