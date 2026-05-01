/*
 * XREFs of ?CalculateTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@AEAA?AURect@Foundation@Windows@winrt@@AEBUMonitorInfo@@AEBUtagRECT@@_N@Z @ 0x180247EA8
 * Callers:
 *     ?GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA?AURect@Foundation@Windows@winrt@@AEBUtagRECT@@@Z @ 0x180248AB0 (-GetTaskbarSearchBoxRect@SearchBoxOnTaskbarSearchAppPositioner@@UEAA-AURect@Foundation@Windows@w.c)
 * Callees:
 *     _anonymous_namespace_::GetInnerSearchBoxOffset @ 0x180248550 (_anonymous_namespace_--GetInnerSearchBoxOffset.c)
 */

__int64 __fastcall SearchBoxOnTaskbarSearchAppPositioner::CalculateTaskbarSearchBoxRect(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        char a5)
{
  bool v5; // zf
  int v9; // ebx
  int InnerSearchBoxOffset; // eax
  int v11; // r8d
  int v12; // ecx
  __m128i v13; // xmm0
  unsigned int v14; // eax
  __m128i v15; // xmm0
  int v16; // eax

  v5 = a3[20] == 2;
  *(_OWORD *)a2 = 0LL;
  if ( v5 )
  {
    if ( a5 )
      v9 = a4[2] - a3[17];
    else
      v9 = a3[15] - *a4;
    InnerSearchBoxOffset = anonymous_namespace_::GetInnerSearchBoxOffset(a3);
    v11 = a3[14];
    v12 = a3[16] - a4[1];
    *(float *)a2 = (float)((float)(v9 - InnerSearchBoxOffset) * 96.0) / (float)v11;
    v13 = _mm_cvtsi32_si128(MulDiv(v12, 96, v11));
    v14 = a3[17] - a3[15];
    *(_DWORD *)(a2 + 4) = _mm_cvtepi32_ps(v13).m128_u32[0];
    v15 = _mm_cvtsi32_si128(v14);
    v16 = a3[18] - a3[16];
    *(_DWORD *)(a2 + 8) = _mm_cvtepi32_ps(v15).m128_u32[0];
    *(float *)(a2 + 12) = (float)v16;
  }
  return a2;
}
