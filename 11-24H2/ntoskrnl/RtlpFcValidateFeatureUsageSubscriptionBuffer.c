/*
 * XREFs of RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x14078D434
 * Callers:
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A2AD64 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 * Callees:
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     RtlpFcCompareUsageSubscriptionToUsageSubscription @ 0x14049FC8C (RtlpFcCompareUsageSubscriptionToUsageSubscription.c)
 */

__int64 __fastcall RtlpFcValidateFeatureUsageSubscriptionBuffer(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // r9d
  unsigned int *v3; // r10
  ULONGLONG v4; // r11
  unsigned int v5; // r11d
  unsigned int i; // r8d
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  pullResult = 0LL;
  if ( a1 )
  {
    if ( a2 < 4
      || ((unsigned __int8)a1 & 3) != 0
      || RtlULongLongMult(*a1, 0x10uLL, &pullResult) < 0
      || pullResult + 4 < pullResult
      || pullResult + 4 > v4 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v5 = *v3;
      for ( i = v2; i < v5; ++i )
      {
        if ( i
          && (int)RtlpFcCompareUsageSubscriptionToUsageSubscription((__int64)&v3[4 * i - 3], (__int64)&v3[4 * i + 1]) >= 0 )
        {
          return (unsigned int)-1073741811;
        }
      }
    }
  }
  else
  {
    return a2 != 0 ? 0xC000000D : 0;
  }
  return v2;
}
