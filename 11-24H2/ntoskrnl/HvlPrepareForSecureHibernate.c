/*
 * XREFs of HvlPrepareForSecureHibernate @ 0x140589550
 * Callers:
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     HvlpReleaseHypercallPage @ 0x1403AF6A0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140465ED0 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  LODWORD(a1) = VslpEnterIumSecureMode(2u, 262LL, 0, (__int64)v11);
  HvlpReleaseHypercallPage((unsigned int *)&v8);
  return (unsigned int)a1;
}
