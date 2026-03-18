/*
 * XREFs of HvlPrepareForSecureHibernate @ 0x140585EE0
 * Callers:
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HvlPrepareForSecureHibernate(_OWORD *a1)
{
  _OWORD *v2; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v8; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+30h] [rbp-98h]
  unsigned __int64 v10; // [rsp+38h] [rbp-90h]
  _BYTE v11[8]; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-80h]

  v9 = 0LL;
  LODWORD(v10) = 0;
  v8 = 0LL;
  v2 = HvlpAcquireHypercallPage((__int64)&v8, 1, 0LL, 88LL);
  v3 = a1[1];
  *v2 = *a1;
  v4 = a1[2];
  v2[1] = v3;
  v5 = a1[3];
  v2[2] = v4;
  v6 = a1[4];
  v2[3] = v5;
  v2[4] = v6;
  memset_0(v11, 0, 0x68uLL);
  v12 = v10 >> 12;
  LODWORD(a1) = VslpEnterIumSecureMode(2u, 0x106u, 0, (__int64)v11);
  HvlpReleaseHypercallPage((unsigned int *)&v8);
  return (unsigned int)a1;
}
