/*
 * XREFs of HvlEnterSleepState @ 0x140583E90
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     VslTerminateSecureServices @ 0x14058B95C (VslTerminateSecureServices.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HvlEnterSleepState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int16 v5; // bx
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-30h]
  _BYTE v10[16]; // [rsp+40h] [rbp-28h] BYREF

  v8 = 0LL;
  v4 = a1;
  LODWORD(v9) = 0;
  v7 = 0LL;
  if ( (unsigned int)a1 >= 4 )
    VslTerminateSecureServices(a1, a2, a3, a4);
  *(_DWORD *)HvlpAcquireHypercallPage((__int64)&v7, 1, (__int64)v10, 8LL) = v4;
  v5 = HvcallInitiateHypercall(132);
  HvlpReleaseHypercallPage((unsigned int *)&v7);
  return v5 != 0 ? 0xC0000001 : 0;
}
