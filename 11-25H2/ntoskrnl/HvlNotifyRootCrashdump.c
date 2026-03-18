/*
 * XREFs of HvlNotifyRootCrashdump @ 0x140584428
 * Callers:
 *     HvlPrepareForRootCrashdump @ 0x1405844B4 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x140584908 (HvlResumeFromRootCrashdump.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlNotifyRootCrashdump(int a1)
{
  __int64 result; // rax
  _DWORD *v3; // rax
  __int128 v4; // [rsp+20h] [rbp-48h] BYREF
  __int64 v5; // [rsp+30h] [rbp-38h]
  __int64 v6; // [rsp+38h] [rbp-30h]
  _BYTE v7[16]; // [rsp+40h] [rbp-28h] BYREF

  v5 = 0LL;
  LODWORD(v6) = 0;
  result = HvlpRootFlags;
  v4 = 0LL;
  if ( (HvlpRootFlags & 4) != 0 )
  {
    v3 = HvlpAcquireHypercallPage((__int64)&v4, 1, (__int64)v7, 8LL);
    *v3 = 2;
    v3[1] = a1;
    HvcallInitiateHypercall(135);
    return HvlpReleaseHypercallPage((unsigned int *)&v4);
  }
  return result;
}
