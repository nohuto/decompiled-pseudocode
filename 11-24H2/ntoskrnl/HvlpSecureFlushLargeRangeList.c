/*
 * XREFs of HvlpSecureFlushLargeRangeList @ 0x1406A0EC0
 * Callers:
 *     HvlFlushRangeListTb @ 0x1403AEEF0 (HvlFlushRangeListTb.c)
 *     HvlpSlowFlushListTbEx @ 0x1403CA27C (HvlpSlowFlushListTbEx.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x1403AF6A0 (HvlpReleaseHypercallPage.c)
 *     VslSlowFlushSecureRangeList @ 0x1403AF848 (VslSlowFlushSecureRangeList.c)
 *     VslFastFlushSecureRangeList @ 0x1403AF954 (VslFastFlushSecureRangeList.c)
 *     HvlpAcquireHypercallPage @ 0x140465ED0 (HvlpAcquireHypercallPage.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

char __fastcall HvlpSecureFlushLargeRangeList(int a1, unsigned int a2, char *a3)
{
  _QWORD *v3; // rdi
  unsigned int v5; // esi
  char v7; // bp
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+48h] [rbp-20h]
  char v13; // [rsp+78h] [rbp+10h] BYREF

  v13 = 0;
  v10 = 0LL;
  v3 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v5 = a2;
  v7 = 1;
  if ( a2 )
  {
    do
    {
      if ( v3 || (v3 = HvlpAcquireHypercallPage((__int64)&v10, 5, 0LL, 0LL)) != 0LL )
      {
        v8 = 512LL;
        if ( v5 < 0x200 )
          v8 = v5;
        memmove(v3, a3, 8LL * (unsigned int)v8);
        VslSlowFlushSecureRangeList(v12, (__int64)v3, a1, v8, 0, &v13);
      }
      else
      {
        v8 = 11LL;
        if ( v5 < 0xB )
          v8 = v5;
        VslFastFlushSecureRangeList(a1, a3, v8, &v13);
      }
      a3 += 8 * v8;
      v7 = v13 != 0 ? v7 : 0;
      v5 -= v8;
    }
    while ( v5 );
    if ( v3 )
      HvlpReleaseHypercallPage((unsigned int *)&v10);
  }
  return v7;
}
