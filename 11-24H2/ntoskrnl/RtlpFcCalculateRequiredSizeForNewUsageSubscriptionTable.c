/*
 * XREFs of RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x140A2B438
 * Callers:
 *     RtlpFcUpdateUsageTriggers @ 0x140A2B008 (RtlpFcUpdateUsageTriggers.c)
 * Callees:
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     RtlpFcCompareUsageSubscriptionToUsageSubscription @ 0x14049FC8C (RtlpFcCompareUsageSubscriptionToUsageSubscription.c)
 */

NTSTATUS __fastcall RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable(
        _DWORD *a1,
        int *a2,
        unsigned __int64 a3,
        ULONGLONG *a4)
{
  ULONGLONG v4; // r10
  ULONGLONG v5; // rbx
  unsigned __int64 v6; // r11
  __int64 v8; // rdi
  ULONGLONG v9; // rbp
  int *v10; // rsi
  __int64 v11; // rdx
  int v12; // eax
  NTSTATUS result; // eax
  int v14; // ecx
  ULONGLONG v15; // rax
  int v16; // ecx
  unsigned __int64 v17; // r8
  int *v18; // rdx
  __int64 *v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  bool v22; // zf
  ULONGLONG v23; // rcx

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( a1 )
  {
    v4 = (unsigned int)*a1;
    v8 = (__int64)(a1 + 1);
    v9 = v4;
    if ( *a1 )
    {
      v10 = a2;
      v11 = (__int64)(a2 + 1);
      while ( 1 )
      {
        if ( v6 >= a3 )
          goto LABEL_10;
        v12 = RtlpFcCompareUsageSubscriptionToUsageSubscription(v8, v11);
        if ( !v12 )
          break;
        if ( v12 == 1 )
        {
          v16 = *v10;
          v15 = v4 + 1;
          v10 += 5;
          ++v6;
          v11 += 20LL;
          if ( v16 )
            v15 = v4;
LABEL_24:
          v4 = v15;
          goto LABEL_8;
        }
        ++v5;
        v8 += 16LL;
LABEL_8:
        if ( v5 >= v9 )
          goto LABEL_9;
      }
      v14 = *v10;
      v15 = v4 - 1;
      v10 += 5;
      ++v5;
      v8 += 16LL;
      ++v6;
      v11 += 20LL;
      if ( !v14 )
        v15 = v4;
      goto LABEL_24;
    }
  }
LABEL_9:
  if ( v6 < a3 )
  {
    v17 = a3 - v6;
    v18 = &a2[5 * v6];
    do
    {
      v22 = *v18 == 0;
      v23 = v4 + 1;
      v18 += 5;
      if ( !v22 )
        v23 = v4;
      v4 = v23;
      --v17;
    }
    while ( v17 );
  }
LABEL_10:
  if ( v4 )
  {
    result = RtlULongLongMult(v4, 0x10uLL, a4);
    if ( result >= 0 )
    {
      v20 = -1LL;
      v21 = *v19 + 4;
      if ( v21 >= *v19 )
        v20 = *v19 + 4;
      result = v21 < *v19 ? 0xC0000095 : 0;
      *v19 = v20;
    }
  }
  else
  {
    *a4 = 0LL;
    return 0;
  }
  return result;
}
