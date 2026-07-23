/*
 * XREFs of CmpComputeComponentHashes @ 0x140872190
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14087ABD0 (CmpGetSymbolicLinkTarget.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpExpandPathInfo @ 0x14087246C (CmpExpandPathInfo.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 */

__int64 __fastcall CmpComputeComponentHashes(__m128i *a1, __int16 *a2, __int64 a3)
{
  __m128i v3; // xmm6
  char v4; // cl
  __int16 v6; // di
  __int16 v7; // bx
  _WORD *v8; // rsi
  __int16 v9; // r15
  __int16 v10; // bx
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // r14
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rsi
  _DWORD *v16; // rdi
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  __int64 Type; // rcx
  __m128i v20; // [rsp+20h] [rbp-40h]
  __m128i v21; // [rsp+30h] [rbp-30h] BYREF
  char v22; // [rsp+90h] [rbp+30h]

  v3 = *a1;
  v4 = 0;
  v22 = 0;
  v6 = _mm_cvtsi128_si32(v3);
  v21 = v3;
  v20 = v3;
  if ( v6 )
  {
    v7 = 0;
    v8 = (_WORD *)v3.m128i_i64[1];
    v9 = v3.m128i_i16[1];
    while ( v6 )
    {
      if ( v7 >= 32 )
        return 3221225485LL;
      if ( *v8 == 92 )
      {
        ++v7;
        v21.m128i_i16[0] -= v6;
        v21.m128i_i16[1] = v21.m128i_i16[0];
        if ( v7 > 8 && !v4 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          P = CurrentPrcb->PPLookasideList[8].P;
          ++P->TotalAllocates;
          v16 = RtlpInterlockedPopEntrySList(&P->ListHead);
          if ( v16 )
            goto LABEL_27;
          ++P->AllocateMisses;
          L = CurrentPrcb->PPLookasideList[8].L;
          ++L->TotalAllocates;
          v16 = RtlpInterlockedPopEntrySList(&L->ListHead);
          if ( v16
            || (Size = L->Size,
                Type = (unsigned int)L->Type,
                ++L->AllocateMisses,
                (v16 = (_DWORD *)guard_dispatch_icall_no_overrides(Type, Size)) != 0LL) )
          {
LABEL_27:
            *v16 = CurrentPrcb->Number;
          }
          if ( !v16 )
            return 3221225626LL;
          memset_0(v16, 0, 0x1E0uLL);
          v8 = (_WORD *)v20.m128i_i64[1];
          v9 = v20.m128i_i16[1];
          *(_QWORD *)(a3 + 160) = v16;
          v6 = v20.m128i_i16[0];
          v22 = 1;
        }
        v13 = (unsigned int)(v7 - 1);
        if ( (unsigned int)v13 >= 8 )
        {
          *(__m128i *)(*(_QWORD *)(a3 + 160) + 16 * ((unsigned int)(v7 - 9) + 6LL)) = v21;
          *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (unsigned int)(v7 - 9)) = CmpHashUnicodeComponent(&v21);
        }
        else
        {
          *(__m128i *)(a3 + 16 * ((unsigned int)v13 + 2LL)) = v21;
          *(_DWORD *)(a3 + 4 * v13) = CmpHashUnicodeComponent(&v21);
        }
        do
        {
          if ( *v8 != 92 )
            break;
          v6 -= 2;
          ++v8;
          v9 -= 2;
          v20.m128i_i16[0] = v6;
        }
        while ( v6 );
        v4 = v22;
        v20.m128i_i64[1] = (__int64)v8;
        v20.m128i_i16[1] = v9;
        v3 = v20;
        v21 = v20;
      }
      else
      {
        ++v8;
        v6 -= 2;
        v9 -= 2;
        v20.m128i_i64[1] = (__int64)v8;
        v20.m128i_i16[1] = v9;
        v20.m128i_i16[0] = v6;
      }
    }
    v10 = v7 + 1;
    if ( v10 <= 8 || v4 || (result = CmpExpandPathInfo(a3), (int)result >= 0) )
    {
      v11 = (unsigned int)(v10 - 1);
      if ( (unsigned int)v11 >= 8 )
      {
        *(__m128i *)(*(_QWORD *)(a3 + 160) + 16 * ((unsigned int)(v10 - 9) + 6LL)) = v3;
        *(_DWORD *)(*(_QWORD *)(a3 + 160) + 4LL * (unsigned int)(v10 - 9)) = CmpHashUnicodeComponent(&v21);
      }
      else
      {
        *(__m128i *)(a3 + 16 * ((unsigned int)v11 + 2LL)) = v3;
        *(_DWORD *)(a3 + 4 * v11) = CmpHashUnicodeComponent(&v21);
      }
      *a2 = v10;
      return 0LL;
    }
  }
  else
  {
    result = 0LL;
    *a2 = 0;
  }
  return result;
}
