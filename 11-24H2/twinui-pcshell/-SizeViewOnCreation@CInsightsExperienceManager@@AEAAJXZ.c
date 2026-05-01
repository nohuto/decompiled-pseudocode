/*
 * XREFs of ?SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ @ 0x1803A7B68
 * Callers:
 *     ?OnViewCreated@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803A76E0 (-OnViewCreated@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B78DC (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802B2D20 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z @ 0x1803A7AA0 (-SetViewSizeAndPosition@CInsightsExperienceManager@@AEAAJUtagRECT@@@Z.c)
 */

__int64 __fastcall CInsightsExperienceManager::SizeViewOnCreation(CInsightsExperienceManager *this)
{
  const struct _tlgProvider_t *v2; // rax
  HMONITOR v3; // rbx
  HMONITOR v4; // r8
  int v5; // edi
  HMONITOR v6; // r8
  int v7; // ebp
  int v8; // ebx
  __int64 v9; // rdx
  RECT rcWork; // xmm6
  int IsThreadRTL; // eax
  int v13; // r10d
  int v14; // r11d
  LONG v15; // ecx
  LONG v16; // eax
  LONG v17; // r9d
  __m128i v18; // xmm6
  LONG v19; // edx
  int v20; // eax
  POINT pt[2]; // [rsp+20h] [rbp-58h] BYREF
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_1807F0A8E,
      0LL);
  pt[0] = 0LL;
  v3 = MonitorFromPoint(0LL, 1u);
  v5 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x148, (ExperienceManagerUtils *)v3, v4);
  mi.cbSize = 40;
  v7 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x22C, (ExperienceManagerUtils *)v3, v6);
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v3, &mi) )
  {
    v8 = -2147418113;
    v9 = 381LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  rcWork = mi.rcWork;
  IsThreadRTL = Mirror_IsThreadRTL();
  v13 = _mm_cvtsi128_si32((__m128i)rcWork);
  v14 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcWork, 8));
  if ( IsThreadRTL )
    v15 = v13;
  else
    v15 = v14 - v5;
  v16 = v15 + v5;
  v17 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcWork, 12));
  v18 = _mm_srli_si128((__m128i)rcWork, 4);
  v19 = v17 - v7;
  if ( v15 + v5 > v14 )
    v16 = v14;
  pt[1].x = v16;
  if ( v15 < v13 )
    v15 = v13;
  v20 = _mm_cvtsi128_si32(v18);
  pt[0].x = v15;
  if ( v19 < v20 )
    v19 = v20;
  pt[0].y = v19;
  pt[1].y = v17;
  v8 = CInsightsExperienceManager::SetViewSizeAndPosition(this, (struct tagRECT *)pt);
  if ( v8 < 0 )
  {
    v9 = 383LL;
    goto LABEL_5;
  }
  return 0LL;
}
