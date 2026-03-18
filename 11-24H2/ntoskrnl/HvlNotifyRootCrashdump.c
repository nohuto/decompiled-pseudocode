/*
 * XREFs of HvlNotifyRootCrashdump @ 0x140587BA8
 * Callers:
 *     HvlPrepareForRootCrashdump @ 0x140587C34 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x140588088 (HvlResumeFromRootCrashdump.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x1403AF6A0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x1403AF710 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x140465ED0 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
