/*
 * XREFs of HvlNotifyHpetEnabled @ 0x140584E70
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 HvlNotifyHpetEnabled()
{
  _QWORD *v0; // rax
  __int16 v1; // bx
  __int128 v3; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+30h] [rbp-78h]
  __int64 v5; // [rsp+38h] [rbp-70h]
  _BYTE v6[80]; // [rsp+40h] [rbp-68h] BYREF

  v4 = 0LL;
  LODWORD(v5) = 0;
  v3 = 0LL;
  v0 = HvlpAcquireHypercallPage((__int64)&v3, 1, (__int64)v6, 40LL);
  *(_DWORD *)v0 = 8;
  *((_BYTE *)v0 + 8) = 1;
  v1 = HvcallInitiateHypercall(111);
  HvlpReleaseHypercallPage((unsigned int *)&v3);
  return v1 != 0 ? 0xC0000001 : 0;
}
