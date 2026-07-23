/*
 * XREFs of VslValidateSecureImagePages @ 0x14025E250
 * Callers:
 *     <none>
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14025F47C (VslpUnlockPagesForTransfer.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslValidateSecureImagePages(__int64 a1, int a2, unsigned __int64 a3, int a4, __int64 a5, int a6)
{
  int i; // edi
  int v11; // r13d
  unsigned __int64 v12; // rbx
  int v13; // r13d
  __int64 v14; // rcx
  _QWORD v17[10]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v19; // [rsp+98h] [rbp-68h]
  int v20; // [rsp+A0h] [rbp-60h]
  int v21; // [rsp+A4h] [rbp-5Ch]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  __int64 v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  int v25; // [rsp+C0h] [rbp-40h]

  memset_0(v18, 0, 0x68uLL);
  memset_0(v17, 0, 0x48uLL);
  for ( i = 0; a3; a3 -= v12 )
  {
    v11 = 0;
    v12 = a3;
    if ( (-(__int64)((a4 & 0xFFF) != 0) & 0xFFFFFFFFFFFFF000uLL) + 2072576 <= a3 )
      v12 = (-(__int64)((a4 & 0xFFF) != 0) & 0xFFFFFFFFFFFFF000uLL) + 2072576;
    LOBYTE(v11) = (v12 & 0xFFF) != 0;
    v13 = (v12 >> 12) + v11;
    i = VslpLockPagesForTransfer((unsigned int)v17, a4, v13 << 12, 0, 16);
    if ( i < 0 )
      break;
    v19 = a1;
    v22 = v17[0];
    LOBYTE(v14) = 2;
    v23 = v17[7];
    v25 = a6;
    v20 = a2;
    v21 = v13;
    v24 = a5;
    i = VslpEnterIumSecureMode(v14, 193LL, 0LL, v18);
    VslpUnlockPagesForTransfer(v17);
    if ( i < 0 )
      break;
    a4 += v12;
    a5 += v12;
    a2 += v13;
  }
  return (unsigned int)i;
}
