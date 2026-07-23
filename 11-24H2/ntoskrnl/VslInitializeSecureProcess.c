/*
 * XREFs of VslInitializeSecureProcess @ 0x14058AA6C
 * Callers:
 *     KeSecureProcess @ 0x1405B5A1C (KeSecureProcess.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslInitializeSecureProcess(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _MDL *a6,
        unsigned __int64 a7,
        bool *a8)
{
  char v12; // bl
  __int64 result; // rax
  int v14; // esi
  __int64 *v15[10]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v16[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v17; // [rsp+88h] [rbp-78h]
  __int64 v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  __int64 v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  __int64 *v22; // [rsp+B0h] [rbp-50h]
  __int64 *v23; // [rsp+B8h] [rbp-48h]

  memset_0(v15, 0, 0x48uLL);
  memset_0(v16, 0, 0x68uLL);
  v17 = a1;
  v21 = a5;
  v12 = 0;
  v19 = a2;
  v18 = a3;
  v20 = a4;
  if ( !a7 )
    goto LABEL_6;
  if ( a7 > 0x1FA000 )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v15, a6, a7, IoReadAccess, 0);
  if ( (int)result >= 0 )
  {
    v22 = v15[0];
    v23 = v15[7];
LABEL_6:
    v14 = VslpEnterIumSecureMode(2u, 7u, 0, (__int64)v16);
    if ( a7 )
      VslpUnlockPagesForTransfer(v15);
    result = (unsigned int)v14;
    if ( v14 >= 0 )
      v12 = v18;
    *a8 = (v12 & 2) != 0;
  }
  return result;
}
