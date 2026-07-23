/*
 * XREFs of VslFillSecureAllocation @ 0x1404AA5E0
 * Callers:
 *     <none>
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslFillSecureAllocation(__int64 a1, __int64 a2, unsigned __int64 a3, struct _MDL *a4)
{
  int i; // ebx
  unsigned int v9; // r14d
  __int64 *v11[10]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v12[8]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+88h] [rbp-A0h]
  __int64 v14; // [rsp+90h] [rbp-98h]
  __int64 *v15; // [rsp+98h] [rbp-90h]
  __int64 *v16; // [rsp+A0h] [rbp-88h]

  memset_0(v12, 0, 0x68uLL);
  memset_0(v11, 0, 0x48uLL);
  for ( i = 0; a3; a3 -= v9 )
  {
    v9 = a3;
    if ( 2072576 - ((unsigned __int16)a4 & 0xFFFu) <= a3 )
      v9 = 2072576 - ((unsigned __int16)a4 & 0xFFF);
    i = VslpLockPagesForTransfer((__int64)v11, a4, v9, IoReadAccess, 0);
    if ( i < 0 )
      break;
    v15 = v11[0];
    v16 = v11[7];
    v13 = a1;
    v14 = a2;
    i = VslpEnterIumSecureMode(2u, 0x17u, 0, (__int64)v12);
    VslpUnlockPagesForTransfer(v11);
    if ( i < 0 )
      break;
    a4 = (struct _MDL *)((char *)a4 + v9);
    a2 += v9;
  }
  return (unsigned int)i;
}
