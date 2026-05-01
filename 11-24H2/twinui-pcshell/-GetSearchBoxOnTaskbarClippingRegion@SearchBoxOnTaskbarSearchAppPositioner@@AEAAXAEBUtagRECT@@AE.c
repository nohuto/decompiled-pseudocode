/*
 * XREFs of ?GetSearchBoxOnTaskbarClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAAXAEBUtagRECT@@AEBUMonitorInfo@@_NPEAU2@AEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1802487F8
 * Callers:
 *     ?GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AUSearchAppSizeAndBorderInfo@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x1802485A8 (-GetSearchBoxOnTaskbarAppRectAndClippingRegion@SearchBoxOnTaskbarSearchAppPositioner@@AEAA-AUSea.c)
 * Callees:
 *     _anonymous_namespace_::GetInnerSearchBoxOffset @ 0x180248550 (_anonymous_namespace_--GetInnerSearchBoxOffset.c)
 *     ??$emplace_back@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?A_T$$QEAUtagRECT@@@Z @ 0x180297090 (--$emplace_back@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-A_T$$QEAUt.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::GetSearchBoxOnTaskbarClippingRegion(
        __int64 a1,
        int *a2,
        __int64 a3,
        char a4,
        _DWORD *a5,
        __int64 a6)
{
  _DWORD *v6; // rsi
  __int64 result; // rax
  int v10; // r8d
  int v11; // edx
  __int128 v13; // xmm1
  int v14; // eax
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  int InnerSearchBoxOffset; // edx
  _DWORD *v18; // rdx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  _OWORD v23[5]; // [rsp+38h] [rbp-49h] BYREF
  int v24; // [rsp+88h] [rbp+7h]
  __m128i v25; // [rsp+98h] [rbp+17h] BYREF

  v6 = a2 + 1;
  result = (unsigned int)a2[1];
  v10 = a2[2] - *a2;
  v11 = a2[3] - result;
  *a5 = 0;
  a5[1] = 0;
  a5[2] = v10;
  a5[3] = v11;
  if ( *(_DWORD *)(a3 + 80) == 2 )
  {
    v13 = *(_OWORD *)(a3 + 16);
    v14 = *(_DWORD *)(a3 + 80);
    v23[0] = *(_OWORD *)a3;
    v23[2] = *(_OWORD *)(a3 + 32);
    v15 = *(__m128i *)(a3 + 64);
    v23[1] = v13;
    v16 = *(__m128i *)(a3 + 48);
    v25 = v15;
    v23[4] = v15;
    v23[3] = v16;
    v24 = v14;
    InnerSearchBoxOffset = anonymous_namespace_::GetInnerSearchBoxOffset((__int64)v23);
    if ( a4 )
    {
      if ( a2[2] == InnerSearchBoxOffset + _mm_cvtsi128_si32(_mm_srli_si128(v25, 4)) )
      {
        v25.m128i_i32[0] = 0;
        v18 = a2 + 1;
        v19 = *a2;
LABEL_7:
        v25.m128i_i32[1] = *(_DWORD *)(a3 + 64) - *v18;
        if ( a4 )
          v20 = *(_DWORD *)(a3 + 60);
        else
          v20 = a2[2];
        v25.m128i_i32[2] = v20 - v19;
        v21 = *(_DWORD *)(a3 + 72) - *v18;
        goto LABEL_12;
      }
    }
    else if ( InnerSearchBoxOffset + *a2 == _mm_cvtsi128_si32(_mm_srli_si128(v16, 12)) )
    {
      v18 = v6;
      v19 = *a2;
      v25.m128i_i32[0] = *(_DWORD *)(a3 + 68) - *a2;
      goto LABEL_7;
    }
    v22 = *(_DWORD *)(a3 + 64) - *v6;
    v25.m128i_i32[0] = 0;
    v25.m128i_i32[1] = v22;
    v25.m128i_i32[2] = *(_DWORD *)(a3 + 60) - *a2;
    v25.m128i_i32[3] = *(_DWORD *)(a3 + 72) - *v6;
    std::vector<tagRECT>::emplace_back<tagRECT>(a6, &v25);
    v25.m128i_i32[0] = *(_DWORD *)(a3 + 68) - *a2;
    v25.m128i_i32[1] = *(_DWORD *)(a3 + 64) - *v6;
    v25.m128i_i32[2] = a2[2] - *a2;
    v21 = *(_DWORD *)(a3 + 72) - *v6;
LABEL_12:
    v25.m128i_i32[3] = v21;
    return std::vector<tagRECT>::emplace_back<tagRECT>(a6, &v25);
  }
  return result;
}
