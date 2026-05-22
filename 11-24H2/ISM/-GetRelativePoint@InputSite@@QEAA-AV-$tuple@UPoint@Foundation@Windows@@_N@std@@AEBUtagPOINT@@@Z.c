/*
 * XREFs of ?GetRelativePoint@InputSite@@QEAA?AV?$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z @ 0x1800904D0
 * Callers:
 *     ?GetRelativePoints@GestureHandler@@AEAA?AV?$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@UtagPOINTF@@@Z @ 0x1800903E0 (-GetRelativePoints@GestureHandler@@AEAA-AV-$tuple@UtagPOINT@@U1@U1@@std@@AEBUGestureClient@1@Uta.c)
 *     ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x1801AE724 (-AveragePoint@@YA-AUPoint@Foundation@Windows@@PEBUInputInfo@@V-$ComPtr@VInputSite@@@WRL@Microsof.c)
 * Callees:
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x180038534 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?ScreenPointToRelative@CInputTransform@@QEBA?AUTransformedPoint@@AEBU2@@Z @ 0x1800857F0 (-ScreenPointToRelative@CInputTransform@@QEBA-AUTransformedPoint@@AEBU2@@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

__int64 __fastcall InputSite::GetRelativePoint(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __int128 *Transform; // rax
  __m128i v7; // xmm1
  __m128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  __int64 result; // rax
  _DWORD v16[2]; // [rsp+20h] [rbp-69h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-61h] BYREF
  _OWORD v18[4]; // [rsp+30h] [rbp-59h] BYREF
  char v19; // [rsp+70h] [rbp-19h]
  _OWORD v20[4]; // [rsp+80h] [rbp-9h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a1 + 480) )
  {
    Transform = LegacyInputSinkData::GetTransform(a1 + 48, v20);
    v7 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
    v8 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)a3);
    v19 = 0;
    v8.m128_u64[0] = _mm_unpacklo_ps(v8, _mm_cvtepi32_ps(v7)).m128_u64[0];
    v9 = Transform[1];
    v17 = v8.m128_u64[0];
    v10 = *Transform;
    v18[1] = v9;
    v11 = Transform[3];
    v18[0] = v10;
    v12 = Transform[2];
    v18[3] = v11;
    v18[2] = v12;
    CInputTransform::ScreenPointToRelative((float *)v18, (__int64)v16, (float *)&v17);
    v13 = (__m128)v16[0];
    v3 = 1;
    v14 = (__m128)v16[1];
  }
  else
  {
    v13 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)a3);
    v14 = (__m128)COERCE_UNSIGNED_INT((float)*(int *)(a3 + 4));
  }
  result = a2;
  *(_BYTE *)a2 = v3;
  *(_QWORD *)(a2 + 4) = _mm_unpacklo_ps(v13, v14).m128_u64[0];
  return result;
}
