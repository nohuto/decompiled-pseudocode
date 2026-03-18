/*
 * XREFs of CmpComputeComponentHashes @ 0x1408476D0
 * Callers:
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14088A6C0 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline @ 0x1404F0ABC (Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlUpcaseUnicodeChar @ 0x140848120 (RtlUpcaseUnicodeChar.c)
 *     CmpExpandPathInfo @ 0x140848278 (CmpExpandPathInfo.c)
 */

__int64 __fastcall CmpComputeComponentHashes(__m128i *a1, __int16 *a2, __int64 a3)
{
  __int64 v3; // rsi
  __m128i v4; // xmm6
  char v5; // cl
  __int16 v6; // r14
  _WORD *v7; // r12
  __int16 v8; // r15
  __int64 v9; // rbx
  __int16 v10; // r15
  __int64 v11; // r14
  _QWORD *v12; // r12
  int v13; // ebx
  WCHAR *v14; // rdi
  unsigned __int64 v15; // rsi
  WCHAR v16; // ax
  __int64 result; // rax
  __int16 v18; // r15
  unsigned __int16 v19; // di
  __int64 v20; // r13
  _QWORD *v21; // rsi
  int v22; // ebx
  unsigned __int64 v23; // rsi
  WCHAR *v24; // rdi
  unsigned __int64 v25; // rsi
  WCHAR v26; // ax
  __int64 v27; // rcx
  __int16 v28; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  _DWORD *v31; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Type; // rcx
  __int64 v34; // rsi
  WCHAR *v35; // rdi
  WCHAR v36; // ax
  WCHAR *v37; // rdi
  __int64 v38; // rsi
  WCHAR v39; // ax
  _QWORD *v40; // [rsp+28h] [rbp-29h]
  __m128i v41; // [rsp+38h] [rbp-19h]
  __m128i v42; // [rsp+48h] [rbp-9h]
  char v43; // [rsp+B8h] [rbp+67h]
  __int16 v46; // [rsp+D0h] [rbp+7Fh]

  v3 = a3;
  v4 = *a1;
  v5 = 0;
  v43 = 0;
  v6 = _mm_cvtsi128_si32(v4);
  v42 = v4;
  v41 = v4;
  if ( !v6 )
  {
    result = 0LL;
    *a2 = 0;
    return result;
  }
  v7 = (_WORD *)v4.m128i_i64[1];
  v8 = 0;
  while ( 1 )
  {
    v9 = (unsigned int)v8;
    if ( !v6 )
      break;
    if ( v8 >= 32 )
      return 3221225485LL;
    if ( *v7 == 92 )
    {
      v18 = v8 + 1;
      v19 = v42.m128i_i16[0] - v6;
      v46 = v18;
      v42.m128i_i16[0] = v19;
      v42.m128i_i16[1] = v19;
      if ( v18 > 8 && !v5 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[8].P;
        ++P->TotalAllocates;
        v31 = RtlpInterlockedPopEntrySList(&P->ListHead);
        if ( v31
          || (++P->AllocateMisses,
              L = CurrentPrcb->PPLookasideList[8].L,
              ++L->TotalAllocates,
              (v31 = RtlpInterlockedPopEntrySList(&L->ListHead)) != 0LL)
          || (Type = (unsigned int)L->Type,
              ++L->AllocateMisses,
              (v31 = (_DWORD *)guard_dispatch_icall_no_overrides(Type)) != 0LL) )
        {
          *v31 = CurrentPrcb->Number;
        }
        if ( !v31 )
          return 3221225626LL;
        memset_0(v31, 0, 0x1E0uLL);
        v3 = a3;
        v19 = v42.m128i_i16[0];
        v7 = (_WORD *)v41.m128i_i64[1];
        v6 = v41.m128i_i16[0];
        *(_QWORD *)(a3 + 160) = v31;
        v43 = 1;
      }
      v20 = (unsigned int)(v18 - 1);
      if ( (unsigned int)v20 >= 8 )
      {
        v21 = (_QWORD *)(v3 + 160);
        *(__m128i *)(*v21 + 16 * ((unsigned int)(v18 - 9) + 6LL)) = v42;
      }
      else
      {
        *(__m128i *)(v3 + 16 * ((unsigned int)v20 + 2LL)) = v42;
        v21 = (_QWORD *)(v3 + 160);
      }
      v40 = v21;
      v22 = 0;
      if ( (unsigned int)Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( v19 >= 2u )
        {
          v23 = v19;
          v24 = (WCHAR *)v42.m128i_i64[1];
          v25 = v23 >> 1;
          do
          {
            v26 = *v24;
            if ( *v24 >= 0x61u )
            {
              if ( v26 > 0x7Au )
                v26 = RtlUpcaseUnicodeChar(v26);
              else
                v26 -= 32;
            }
            ++v24;
            v22 = v26 + 37 * v22;
            --v25;
          }
          while ( v25 );
          v21 = v40;
        }
LABEL_39:
        v27 = a3;
        goto LABEL_40;
      }
      if ( !v19 )
        goto LABEL_39;
      v34 = (unsigned __int16)(((unsigned __int16)(v19 - 1) >> 1) + 1);
      v35 = (WCHAR *)v42.m128i_i64[1];
      do
      {
        v36 = *v35;
        if ( *v35 >= 0x61u )
        {
          if ( v36 > 0x7Au )
            v36 = RtlUpcaseUnicodeChar(v36);
          else
            v36 -= 32;
        }
        ++v35;
        v22 = v36 + 37 * v22;
        --v34;
      }
      while ( v34 );
      v27 = a3;
      v21 = (_QWORD *)(a3 + 160);
LABEL_40:
      if ( (unsigned int)v20 >= 8 )
        *(_DWORD *)(*v21 + 4LL * (unsigned int)(v18 - 9)) = v22;
      else
        *(_DWORD *)(v27 + 4 * v20) = v22;
      v28 = v41.m128i_i16[1];
      do
      {
        if ( *v7 != 92 )
          break;
        v6 -= 2;
        v28 -= 2;
        ++v7;
        v41.m128i_i16[0] = v6;
        v41.m128i_i16[1] = v28;
      }
      while ( v6 );
      v8 = v46;
      v3 = a3;
      v5 = v43;
      v41.m128i_i64[1] = (__int64)v7;
      v4 = v41;
      v42 = v41;
    }
    else
    {
      ++v7;
      v6 -= 2;
      v41.m128i_i16[1] -= 2;
      v41.m128i_i64[1] = (__int64)v7;
      v41.m128i_i16[0] = v6;
    }
  }
  v10 = v8 + 1;
  if ( v10 <= 8 || v5 || (result = CmpExpandPathInfo(v3), (int)result >= 0) )
  {
    v11 = (unsigned int)v9;
    v12 = (_QWORD *)(v3 + 160);
    if ( (unsigned int)v9 >= 8 )
      *(__m128i *)(*v12 + 16 * ((unsigned int)(v9 - 8) + 6LL)) = v4;
    else
      *(__m128i *)(v3 + 16 * (v9 + 2)) = v4;
    v13 = 0;
    if ( (unsigned int)Feature_CmpHashUnicodeComponentLengthCheck__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v42.m128i_u16[0] >= 2u )
      {
        v14 = (WCHAR *)v4.m128i_i64[1];
        v15 = (unsigned __int64)v42.m128i_u16[0] >> 1;
        do
        {
          v16 = *v14;
          if ( *v14 >= 0x61u )
          {
            if ( v16 > 0x7Au )
              v16 = RtlUpcaseUnicodeChar(v16);
            else
              v16 -= 32;
          }
          ++v14;
          v13 = v16 + 37 * v13;
          --v15;
        }
        while ( v15 );
        v3 = a3;
      }
    }
    else if ( v42.m128i_i16[0] )
    {
      v37 = (WCHAR *)v4.m128i_i64[1];
      v38 = (unsigned __int16)(((unsigned __int16)(v42.m128i_i16[0] - 1) >> 1) + 1);
      do
      {
        v39 = *v37;
        if ( *v37 >= 0x61u )
        {
          if ( v39 > 0x7Au )
            v39 = RtlUpcaseUnicodeChar(v39);
          else
            v39 -= 32;
        }
        ++v37;
        v13 = v39 + 37 * v13;
        --v38;
      }
      while ( v38 );
      v3 = a3;
      v12 = (_QWORD *)(a3 + 160);
    }
    if ( (unsigned int)v11 >= 8 )
      *(_DWORD *)(*v12 + 4LL * (unsigned int)(v11 - 8)) = v13;
    else
      *(_DWORD *)(v3 + 4 * v11) = v13;
    *a2 = v10;
    return 0LL;
  }
  return result;
}
