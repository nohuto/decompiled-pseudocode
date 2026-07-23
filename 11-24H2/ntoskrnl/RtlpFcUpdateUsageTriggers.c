/*
 * XREFs of RtlpFcUpdateUsageTriggers @ 0x140A2B008
 * Callers:
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A2AD64 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 * Callees:
 *     RtlpFcCompareUsageSubscriptionToUsageSubscription @ 0x14049FC8C (RtlpFcCompareUsageSubscriptionToUsageSubscription.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     RtlpFcAddUsageSubscriptionFromUpdate @ 0x14078CCF4 (RtlpFcAddUsageSubscriptionFromUpdate.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x140A2B438 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 */

__int64 __fastcall RtlpFcUpdateUsageTriggers(
        _DWORD *a1,
        __int64 a2,
        void *a3,
        size_t a4,
        _DWORD *a5,
        unsigned __int64 *a6)
{
  __int64 v7; // r13
  __int64 result; // rax
  _DWORD *v10; // rbx
  unsigned __int64 v11; // rdi
  size_t v12; // rsi
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  _DWORD *v15; // rdx
  __int64 v16; // r15
  unsigned __int64 v17; // rcx
  __int64 v18; // r13
  _OWORD *v19; // r14
  int v20; // eax
  __int128 *v21; // rcx
  __int128 v22; // xmm0
  __int64 v23; // rdi
  size_t v24; // rbp
  unsigned __int64 v25; // [rsp+68h] [rbp+10h] BYREF
  __int64 v26; // [rsp+70h] [rbp+18h]

  v26 = (__int64)a3;
  v25 = 0LL;
  v7 = (__int64)a3;
  qsort(a3, a4, 0x14uLL, RtlpFcCompareUsageSubscriptionUpdates);
  result = RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable(a1, v7, a4, &v25);
  if ( (int)result >= 0 )
  {
    if ( v25 )
    {
      if ( v25 <= *a6 )
      {
        v10 = a5;
        v11 = 0LL;
        v12 = 0LL;
        *a5 = 0;
        v13 = (__int64)(v10 + 1);
        v25 = (unsigned __int64)(v10 + 1);
        if ( a1 )
        {
          v14 = (unsigned int)*a1;
          v15 = a1 + 1;
          if ( (_DWORD)v14 )
          {
            v16 = v7;
            LODWORD(v17) = *a1;
            v18 = v7 + 4;
            v19 = a1 + 1;
            do
            {
              v14 = (unsigned int)v17;
              if ( v12 >= a4 )
                break;
              v20 = RtlpFcCompareUsageSubscriptionToUsageSubscription((__int64)v19, v18);
              if ( v20 )
              {
                if ( v20 == 1 )
                {
                  RtlpFcAddUsageSubscriptionFromUpdate(v16, v10, (__int64 *)&v25);
                  v13 = v25;
                  ++v12;
                  v16 += 20LL;
                  v18 += 20LL;
                }
                else
                {
                  ++v11;
                  *(_OWORD *)v13 = *v19;
                  ++*v10;
                  v13 += 16LL;
                  v25 = v13;
                  ++v19;
                }
              }
              else
              {
                if ( !*(_DWORD *)v16 )
                {
                  *(_OWORD *)v13 = *v19;
                  *(_WORD *)(v13 + 6) = *(_WORD *)(v16 + 10);
                  v13 += 16LL;
                  ++*v10;
                  v25 = v13;
                }
                ++v11;
                ++v19;
                ++v12;
                v16 += 20LL;
                v18 += 20LL;
              }
              v17 = (unsigned int)*a1;
              v14 = v17;
            }
            while ( v11 < v17 );
            v7 = v26;
            v15 = a1 + 1;
          }
          if ( v11 < v14 )
          {
            v21 = (__int128 *)&v15[4 * v11];
            do
            {
              v22 = *v21;
              ++v11;
              ++v21;
              *(_OWORD *)v13 = v22;
              ++*v10;
              v13 += 16LL;
            }
            while ( v11 < (unsigned int)*a1 );
            v25 = v13;
          }
        }
        if ( v12 < a4 )
        {
          v23 = v7 + 20 * v12;
          v24 = a4 - v12;
          do
          {
            RtlpFcAddUsageSubscriptionFromUpdate(v23, v10, (__int64 *)&v25);
            v23 += 20LL;
            --v24;
          }
          while ( v24 );
        }
        return 0LL;
      }
      else
      {
        *a6 = v25;
        return 2147483653LL;
      }
    }
    else
    {
      *a6 = 0LL;
    }
  }
  return result;
}
