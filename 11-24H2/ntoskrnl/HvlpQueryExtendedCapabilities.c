/*
 * XREFs of HvlpQueryExtendedCapabilities @ 0x140589318
 * Callers:
 *     HvlpDetermineEnlightenments @ 0x140588CEC (HvlpDetermineEnlightenments.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall HvlpQueryExtendedCapabilities(_QWORD *a1)
{
  _QWORD *v2; // rsi
  __int16 v3; // bx
  __int128 v5; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h]
  __int64 v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  LODWORD(v7) = 0;
  v2 = HvlpAcquireHypercallPage((__int64)&v5, 2, (__int64)&v8, 8LL);
  v3 = HvcallInitiateHypercall(32769);
  HvlpReleaseHypercallPage((unsigned int *)&v5);
  if ( v3 )
    return 0;
  *a1 = *v2;
  return 1;
}
