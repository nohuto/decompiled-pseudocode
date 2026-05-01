/*
 * XREFs of ?ComputeVoiceAssistantWindowRect@VoiceAssistantPositioner@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1111H@Z @ 0x18050A59C
 * Callers:
 *     ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18050ACD8 (-CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAU.c)
 *     ?GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z @ 0x18050B6B0 (-GetCortanaAppDefaultLaunchPosition@VoiceAssistantPositioner@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall VoiceAssistantPositioner::ComputeVoiceAssistantWindowRect(
        __int64 a1,
        struct tagRECT *a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        RECT *a7,
        __m128i *a8,
        __m128i *a9,
        RECT *a10,
        int a11)
{
  char v11; // si
  __m128i v14; // xmm1
  __m128i v15; // xmm3
  __m128i v16; // xmm2
  int v17; // r8d
  LONG v18; // r9d
  LONG v19; // ecx
  unsigned __int64 v20; // xmm1_8
  LONG v21; // xmm1_4
  RECT rcSrc2; // [rsp+20h] [rbp-50h] BYREF
  RECT rc; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT rcDst; // [rsp+40h] [rbp-30h] BYREF
  RECT rcSrc1; // [rsp+50h] [rbp-20h] BYREF

  v11 = 0;
  *(_QWORD *)&rcSrc2.left = 0LL;
  v14 = *(__m128i *)a7;
  rcSrc1 = *a7;
  v15 = *a8;
  v16 = *a9;
  rc = *a10;
  if ( !a3 )
  {
    v18 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 8));
    rcSrc2.left = v18;
    goto LABEL_8;
  }
  v17 = a3 - 1;
  if ( !v17 )
  {
    v18 = v16.m128i_i32[0] + (int)(_mm_srli_si128(v16, 8).m128i_u32[0] - v16.m128i_i32[0]) / 2 - a4 / 2;
    rcSrc2.left = v18;
    v19 = _mm_srli_si128(v15, 8).m128i_i32[1];
    rcSrc2.top = v19;
    goto LABEL_10;
  }
  if ( v17 == 1 )
  {
    v18 = v15.m128i_i32[0] - a4;
    rcSrc2.left = v15.m128i_i32[0] - a4;
LABEL_8:
    v11 = 1;
    v19 = v16.m128i_i32[1] + (_mm_srli_si128(v16, 8).m128i_i32[1] - v16.m128i_i32[1]) / 2 - a5 / 2;
    goto LABEL_9;
  }
  v18 = v16.m128i_i32[0] + (int)(_mm_srli_si128(v16, 8).m128i_u32[0] - v16.m128i_i32[0]) / 2 - a4 / 2;
  v19 = v15.m128i_i32[1] - a5;
  rcSrc2.left = v18;
LABEL_9:
  rcSrc2.top = v19;
LABEL_10:
  rcSrc2.right = a4 + v18;
  rcSrc2.bottom = v19 + a5;
  if ( v11 )
  {
    if ( v19 >= v14.m128i_i32[1] )
    {
      v20 = _mm_srli_si128(v14, 8).m128i_u64[0];
      if ( v19 + a5 > SHIDWORD(v20) )
      {
        rcSrc2.bottom = HIDWORD(v20);
        rcSrc2.top = HIDWORD(v20) - a5;
      }
    }
    else
    {
      rcSrc2.top = v14.m128i_i32[1];
      rcSrc2.bottom = a5 + v14.m128i_i32[1];
    }
  }
  else if ( v18 >= v14.m128i_i32[0] )
  {
    v21 = _mm_srli_si128(v14, 8).m128i_u32[0];
    if ( a4 + v18 > v21 )
    {
      rcSrc2.right = v21;
      rcSrc2.left = v21 - a4;
    }
  }
  else
  {
    rcSrc2.left = v14.m128i_i32[0];
    rcSrc2.right = a4 + v14.m128i_i32[0];
  }
  rcDst = 0LL;
  if ( !IsRectEmpty(&rc) && IntersectRect(&rcDst, &rc, &rcSrc2) && *(_DWORD *)(a6 + 12) - rc.bottom <= a11 )
    OffsetRect(&rcSrc2, 0, rc.top - rcSrc2.bottom);
  *a2 = 0LL;
  IntersectRect(a2, &rcSrc1, &rcSrc2);
  return a2;
}
