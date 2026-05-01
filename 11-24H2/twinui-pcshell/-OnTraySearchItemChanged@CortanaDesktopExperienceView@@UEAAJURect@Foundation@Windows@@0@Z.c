/*
 * XREFs of ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1803DB0C0
 * Callers:
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1803D8260 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B78DC (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802B2D20 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N@Z @ 0x1803D9770 (-GetMonitorInformation@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@11PEAW4ED.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x1803DA180 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnTraySearchItemChanged(__int64 a1, float *a2)
{
  float v3; // xmm7_4
  float v4; // xmm0_4
  HMONITOR v5; // rsi
  int MonitorInformation; // edi
  __int64 v7; // rdx
  HMONITOR v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  LONG right; // r14d
  LONG left; // esi
  int v14; // r13d
  int v15; // edi
  __m128i v16; // xmm0
  int IsThreadRTL; // eax
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  LONG top; // r15d
  LONG bottom; // r12d
  __m128i v24; // xmm1
  float v25; // xmm1_4
  float v26; // xmm6_4
  __m128i v27; // xmm0
  int v28; // eax
  __m128i v29; // xmm1
  float v30; // xmm1_4
  bool v31[4]; // [rsp+48h] [rbp-49h] BYREF
  int v32; // [rsp+4Ch] [rbp-45h] BYREF
  struct tagRECT v33; // [rsp+50h] [rbp-41h] BYREF
  struct tagRECT v34; // [rsp+60h] [rbp-31h] BYREF
  struct tagRECT v35; // [rsp+70h] [rbp-21h] BYREF
  RECT rc; // [rsp+80h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v3 = a2[1] + a2[3];
  v4 = *a2 + a2[2];
  rc.left = (int)*a2;
  rc.top = (int)a2[1];
  rc.right = (int)v4;
  rc.bottom = (int)v3;
  v5 = MonitorFromRect(&rc, 0);
  v32 = 0;
  v35 = 0LL;
  v31[0] = 0;
  v34 = 0LL;
  v33 = 0LL;
  MonitorInformation = CortanaDesktopExperienceView::GetMonitorInformation(
                         (CortanaDesktopExperienceView *)(a1 - 16),
                         v5,
                         &v34,
                         &v35,
                         &v33,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v32,
                         v31);
  if ( MonitorInformation < 0 )
  {
    v7 = 505LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)MonitorInformation);
    return (unsigned int)MonitorInformation;
  }
  v31[0] = 0;
  MonitorInformation = CortanaDesktopExperienceView::IsTraySearchBoxVisible(
                         (CortanaDesktopExperienceView *)(a1 - 16),
                         v5,
                         v31);
  if ( MonitorInformation < 0 )
  {
    v7 = 508LL;
    goto LABEL_3;
  }
  v10 = 344LL;
  if ( v34.right - v34.left < 1196 )
    v10 = 320LL;
  v11 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v10, (ExperienceManagerUtils *)v5, v9);
  right = v33.right;
  left = v33.left;
  v14 = v33.right - v33.left;
  v15 = v11;
  if ( ((v32 - 1) & 0xFFFFFFFD) != 0 )
  {
    v16 = _mm_cvtsi32_si128(v33.left);
  }
  else
  {
    IsThreadRTL = Mirror_IsThreadRTL();
    v18 = right;
    if ( IsThreadRTL )
      v18 = left;
    v16 = _mm_cvtsi32_si128(v18);
  }
  v19 = v14;
  *(_DWORD *)(a1 + 180) = _mm_cvtepi32_ps(v16).m128_u32[0];
  if ( v31[0] )
    v19 = v15;
  *(float *)(a1 + 188) = (float)v19;
  v20 = Mirror_IsThreadRTL();
  v21 = v32;
  if ( v20 && ((v32 - 1) & 0xFFFFFFFD) == 0 )
    *(float *)(a1 + 180) = *(float *)(a1 + 180) - *(float *)(a1 + 188);
  top = v33.top;
  bottom = v33.bottom;
  if ( ((v21 - 1) & 0xFFFFFFFD) != 0 )
    v24 = _mm_cvtsi32_si128(v33.bottom);
  else
    v24 = _mm_cvtsi32_si128(v33.top);
  v25 = _mm_cvtepi32_ps(v24).m128_f32[0];
  v26 = (float)(v33.bottom - v33.top);
  *(float *)(a1 + 184) = v25;
  *(float *)(a1 + 192) = v26;
  if ( (float)(v26 + v25) > v3 )
    *(float *)(a1 + 184) = v3 - v26;
  if ( ((v21 - 1) & 0xFFFFFFFD) != 0 )
  {
    v27 = _mm_cvtsi32_si128(left);
  }
  else
  {
    v28 = Mirror_IsThreadRTL();
    v21 = v32;
    if ( v28 )
      right = left;
    v27 = _mm_cvtsi32_si128(right);
  }
  *(_DWORD *)(a1 + 204) = _mm_cvtepi32_ps(v27).m128_u32[0];
  if ( v31[0] )
  {
    if ( (unsigned int)Mirror_IsThreadRTL() )
      v15 = -v15;
    v21 = v32;
    *(float *)(a1 + 204) = (float)v15 + *(float *)(a1 + 204);
  }
  *(float *)(a1 + 212) = (float)v14;
  if ( ((v21 - 1) & 0xFFFFFFFD) != 0 )
    v29 = _mm_cvtsi32_si128(bottom);
  else
    v29 = _mm_cvtsi32_si128(top);
  v30 = _mm_cvtepi32_ps(v29).m128_f32[0];
  *(float *)(a1 + 208) = v30;
  *(float *)(a1 + 216) = v26;
  if ( (float)(v26 + v30) > v3 )
    *(float *)(a1 + 208) = v3 - v26;
  return 0LL;
}
