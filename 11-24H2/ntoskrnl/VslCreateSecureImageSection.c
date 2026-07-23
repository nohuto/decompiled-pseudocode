/*
 * XREFs of VslCreateSecureImageSection @ 0x1404A6C40
 * Callers:
 *     <none>
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslCreateSecureImageSection(
        unsigned int a1,
        struct _MDL *a2,
        unsigned __int8 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 **a6)
{
  __int64 v7; // r15
  __int64 v9; // r14
  __int64 result; // rax
  int v11; // ebx
  __int64 *v12[10]; // [rsp+30h] [rbp-A9h] BYREF
  _BYTE v13[8]; // [rsp+80h] [rbp-59h] BYREF
  __int64 *v14; // [rsp+88h] [rbp-51h]
  __int64 *v15; // [rsp+90h] [rbp-49h]
  __int64 v16; // [rsp+98h] [rbp-41h]
  __int64 v17; // [rsp+A0h] [rbp-39h]
  __int64 v18; // [rsp+A8h] [rbp-31h]

  v7 = a3;
  v9 = a4;
  memset_0(v13, 0, 0x68uLL);
  memset_0(v12, 0, 0x48uLL);
  if ( a1 > 0x1FA )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v12, a2, a1 << 12, IoReadAccess, 0);
  if ( (int)result >= 0 )
  {
    v14 = v12[0];
    v15 = v12[7];
    v18 = a5;
    v16 = v7;
    v17 = v9;
    v11 = VslpEnterIumSecureMode(2u, 0x19u, 0, (__int64)v13);
    VslpUnlockPagesForTransfer(v12);
    if ( v11 >= 0 )
      *a6 = v15;
    return (unsigned int)v11;
  }
  return result;
}
