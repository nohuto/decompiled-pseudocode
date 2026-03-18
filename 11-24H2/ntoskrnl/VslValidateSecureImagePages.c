/*
 * XREFs of VslValidateSecureImagePages @ 0x140266C70
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     VslpLockPagesForTransfer @ 0x140266DCC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140267E9C (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslValidateSecureImagePages(__int64 a1, int a2, unsigned __int64 a3, int a4, __int64 a5, int a6)
{
  int i; // edi
  int v11; // r13d
  unsigned __int64 v12; // rbx
  int v13; // r13d
  _QWORD v16[10]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v18; // [rsp+98h] [rbp-68h]
  int v19; // [rsp+A0h] [rbp-60h]
  int v20; // [rsp+A4h] [rbp-5Ch]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  int v24; // [rsp+C0h] [rbp-40h]

  memset_0(v17, 0, 0x68uLL);
  memset_0(v16, 0, 0x48uLL);
  for ( i = 0; a3; a3 -= v12 )
  {
    v11 = 0;
    v12 = a3;
    if ( (-(__int64)((a4 & 0xFFF) != 0) & 0xFFFFFFFFFFFFF000uLL) + 2072576 <= a3 )
      v12 = (-(__int64)((a4 & 0xFFF) != 0) & 0xFFFFFFFFFFFFF000uLL) + 2072576;
    LOBYTE(v11) = (v12 & 0xFFF) != 0;
    v13 = (v12 >> 12) + v11;
    i = VslpLockPagesForTransfer((unsigned int)v16, a4, v13 << 12, 0, 16);
    if ( i < 0 )
      break;
    v18 = a1;
    v21 = v16[0];
    v22 = v16[7];
    v24 = a6;
    v19 = a2;
    v20 = v13;
    v23 = a5;
    i = VslpEnterIumSecureMode(2u, 193LL, 0, (__int64)v17);
    VslpUnlockPagesForTransfer(v16);
    if ( i < 0 )
      break;
    a4 += v12;
    a5 += v12;
    a2 += v13;
  }
  return (unsigned int)i;
}
