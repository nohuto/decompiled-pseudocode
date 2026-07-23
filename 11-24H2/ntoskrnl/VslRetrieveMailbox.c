/*
 * XREFs of VslRetrieveMailbox @ 0x14058B5D0
 * Callers:
 *     <none>
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslRetrieveMailbox(__int64 a1, _QWORD *a2, unsigned __int8 a3, struct _MDL *a4, unsigned int *a5)
{
  int v6; // r14d
  __int64 result; // rax
  __int128 v10; // xmm0
  unsigned int v11; // ebx
  __int64 *v12[10]; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v13[8]; // [rsp+88h] [rbp-41h] BYREF
  __int64 *v14; // [rsp+90h] [rbp-39h]
  __int64 *v15; // [rsp+98h] [rbp-31h]
  __int128 v16; // [rsp+A0h] [rbp-29h]
  __int64 v17; // [rsp+B0h] [rbp-19h]
  int v18; // [rsp+B8h] [rbp-11h]

  v6 = a3;
  memset_0(v13, 0, 0x68uLL);
  memset_0(v12, 0, 0x48uLL);
  if ( !*a2 && !a2[1] || (unsigned __int64)(*(_QWORD *)a5 - 1LL) > 0x1F9FFF )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v12, a4, *a5, IoModifyAccess, 0);
  if ( (int)result >= 0 )
  {
    v10 = *(_OWORD *)a2;
    v14 = v12[0];
    v15 = v12[7];
    v16 = v10;
    v17 = a1;
    v18 = v6;
    v11 = VslpEnterIumSecureMode(2u, 0x14u, 0, (__int64)v13);
    VslpUnlockPagesForTransfer(v12);
    if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
      *(_QWORD *)a5 = v15;
    return v11;
  }
  return result;
}
