/*
 * XREFs of HvlpApplyIoCachePolicy @ 0x1405894AC
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140580E58 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 HvlpApplyIoCachePolicy()
{
  __int64 result; // rax
  _QWORD *v1; // rax
  __int16 v2; // bx
  __int128 v3; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+30h] [rbp-78h]
  __int64 v5; // [rsp+38h] [rbp-70h]
  _BYTE v6[80]; // [rsp+40h] [rbp-68h] BYREF

  result = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  LODWORD(v5) = 0;
  if ( HvlDefaultIoCacheBitmap )
  {
    v1 = HvlpAcquireHypercallPage((__int64)&v3, 1, (__int64)v6, 40LL);
    *(_DWORD *)v1 = 49;
    v1[1] = HvlDefaultIoCacheBitmap;
    v2 = HvcallInitiateHypercall(111);
    HvlpReleaseHypercallPage((unsigned int *)&v3);
    return v2 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
