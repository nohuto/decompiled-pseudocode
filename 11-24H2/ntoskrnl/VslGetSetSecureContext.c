/*
 * XREFs of VslGetSetSecureContext @ 0x14070D58C
 * Callers:
 *     PspGetSetContextInternal @ 0x1409882C0 (PspGetSetContextInternal.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslGetSetSecureContext(__int64 a1, struct _MDL *a2, unsigned int a3)
{
  unsigned __int16 v6; // ax
  __int64 result; // rax
  unsigned int v8; // ebx
  __int64 *v9[10]; // [rsp+30h] [rbp-89h] BYREF
  _BYTE v10[2]; // [rsp+80h] [rbp-39h] BYREF
  unsigned __int16 v11; // [rsp+82h] [rbp-37h]
  __int64 *v12; // [rsp+88h] [rbp-31h]
  __int64 *v13; // [rsp+90h] [rbp-29h]

  memset_0(v10, 0, 0x68uLL);
  memset_0(v9, 0, 0x48uLL);
  v6 = 15;
  if ( !a1 )
    v6 = 14;
  v11 = v6;
  result = VslpLockPagesForTransfer((__int64)v9, a2, a3, (LOCK_OPERATION)(a1 != 0), 0);
  if ( (int)result >= 0 )
  {
    v12 = v9[0];
    v13 = v9[7];
    v8 = VslpEnterIumSecureMode(2u, v11, 0, (__int64)v10);
    VslpUnlockPagesForTransfer(v9);
    return v8;
  }
  return result;
}
