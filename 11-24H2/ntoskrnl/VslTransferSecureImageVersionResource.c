/*
 * XREFs of VslTransferSecureImageVersionResource @ 0x1404B3E90
 * Callers:
 *     <none>
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslTransferSecureImageVersionResource(__int64 a1, struct _MDL *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  __int64 *v10[10]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v11[8]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v12; // [rsp+88h] [rbp-90h]
  __int64 *v13; // [rsp+90h] [rbp-88h]
  __int64 *v14; // [rsp+98h] [rbp-80h]
  __int64 v15; // [rsp+A0h] [rbp-78h]

  memset_0(v11, 0, 0x68uLL);
  memset_0(v10, 0, 0x48uLL);
  if ( ((((unsigned __int16)a2 & 0xFFF) + a3 + 4095) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v10, a2, a3, IoReadAccess, 0);
  if ( (int)result >= 0 )
  {
    v13 = v10[0];
    v14 = v10[7];
    v12 = a1;
    v15 = a4;
    v9 = VslpEnterIumSecureMode(2u, 0x21u, 0, (__int64)v11);
    VslpUnlockPagesForTransfer(v10);
    return v9;
  }
  return result;
}
