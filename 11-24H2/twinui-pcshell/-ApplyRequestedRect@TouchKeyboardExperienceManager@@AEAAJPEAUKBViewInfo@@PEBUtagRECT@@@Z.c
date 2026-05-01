/*
 * XREFs of ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x180080F80
 * Callers:
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180080818 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18046FD10 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180474600 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007EA0C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ @ 0x18007FF6C (-Instance@TouchKeyboardExperienceTelemetryLogger@@KAPEAV1@XZ.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x180080268 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x18008475C (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?BoostPriority@KBViewInfo@@QEAAXXZ @ 0x1800ADCB4 (-BoostPriority@KBViewInfo@@QEAAXXZ.c)
 *     ?UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@AEBUKBViewInfo@@@Z @ 0x1801A8784 (-UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@AEBUKBViewInfo@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180206804 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1802150E0 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?SetVisibleViewRect_@TouchKeyboardExperienceTelemetryLogger@@QEBAXAEBURect@Foundation@Windows@@@Z @ 0x1804743A0 (-SetVisibleViewRect_@TouchKeyboardExperienceTelemetryLogger@@QEBAXAEBURect@Foundation@Windows@@@.c)
 *     ?swap@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAXAEAV12@@Z @ 0x180479C80 (-swap@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::ApplyRequestedRect(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2,
        const struct tagRECT *a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, struct IApplicationFrame **); // rbx
  int v8; // eax
  TouchKeyboardExperienceManager *v9; // rcx
  unsigned int v10; // ebx
  struct IApplicationFrame *v11; // rcx
  int v12; // eax
  int v14; // eax
  HRGN v15; // rbx
  int updated; // eax
  __m128 v17; // xmm1
  struct tagRECT v18; // xmm5
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  int v22; // eax
  unsigned int v23; // edi
  struct IApplicationFrame *v24; // rcx
  __int64 v25; // rdx
  HRGN RectRgn; // rax
  const __m128i *v27; // rdi
  const __m128i *v28; // r14
  HRGN v29; // rbx
  float v30; // xmm1_4
  HRGN v31; // rax
  TouchKeyboardExperienceTelemetryLogger *v32; // rcx
  char v33; // r8
  __int64 v34; // r9
  struct IApplicationFrame *v35; // [rsp+20h] [rbp-40h] BYREF
  HRGN hrgnDst; // [rsp+28h] [rbp-38h] BYREF
  HRGN hrgnSrc2[2]; // [rsp+30h] [rbp-30h] BYREF
  HWND hWnd; // [rsp+40h] [rbp-20h] BYREF
  __m128 v39; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v35 = 0LL;
  v6 = *((_QWORD *)a2 + 1);
  v7 = *(__int64 (__fastcall **)(__int64, struct IApplicationFrame **))(*(_QWORD *)v6 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
  v8 = v7(v6, &v35);
  v10 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C5,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    v11 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return v10;
  }
  v14 = TouchKeyboardExperienceManager::SetHostedPos(v9, *((struct IApplicationFrameWrapper **)a2 + 1), v35, a3);
  v10 = v14;
  if ( v14 < 0 )
  {
    v25 = 4301LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_7:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
    return v10;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 32LL))(*((_QWORD *)a2 + 2), 0LL);
  v10 = v14;
  if ( v14 < 0 )
  {
    v25 = 4304LL;
    goto LABEL_33;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 80LL))(*((_QWORD *)a2 + 2));
  v10 = v14;
  if ( v14 < 0 )
  {
    v25 = 4305LL;
    goto LABEL_33;
  }
  hWnd = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)v35 + 24LL))(v35, &hWnd);
  v10 = v14;
  if ( v14 < 0 )
  {
    v25 = 4307LL;
    goto LABEL_33;
  }
  v15 = 0LL;
  hrgnDst = 0LL;
  if ( (__int64)(*((_QWORD *)a2 + 24) - *((_QWORD *)a2 + 23)) >> 4 )
  {
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &hrgnDst,
      RectRgn);
    v27 = (const __m128i *)*((_QWORD *)a2 + 23);
    v28 = (const __m128i *)*((_QWORD *)a2 + 24);
    v29 = hrgnDst;
    while ( v27 != v28 )
    {
      v39 = (__m128)_mm_loadu_si128(v27);
      hrgnSrc2[0] = 0LL;
      v30 = _mm_shuffle_ps(v39, v39, 85).m128_f32[0];
      v31 = CreateRectRgn(
              (int)v39.m128_f32[0],
              (int)v30,
              (int)(float)(_mm_shuffle_ps(v39, v39, 170).m128_f32[0] + v39.m128_f32[0]),
              (int)(float)(_mm_shuffle_ps(v39, v39, 255).m128_f32[0] + v30));
      wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
        hrgnSrc2,
        v31);
      if ( !hrgnSrc2[0] )
      {
        v10 = -2147024890;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10E5,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)0x80070006LL);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>(hrgnSrc2);
        goto LABEL_45;
      }
      if ( !CombineRgn(v29, v29, hrgnSrc2[0], 2) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10E6,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)0x8000FFFFLL);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>(hrgnSrc2);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>(&hrgnDst);
        v10 = -2147418113;
        goto LABEL_7;
      }
      if ( TouchKeyboardExperienceTelemetryLogger::IsEnabled() )
      {
        TouchKeyboardExperienceTelemetryLogger::Instance();
        TouchKeyboardExperienceTelemetryLogger::SetVisibleViewRect_(v32, (const struct Windows::Foundation::Rect *)&v39);
      }
      wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>(hrgnSrc2);
      ++v27;
    }
    if ( !SetWindowRgn(hWnd, v29, 1) )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10EA,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)0x8000FFFFLL);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl,
      1u,
      v33,
      v34);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>>::swap(
      (char *)this + 640,
      &hrgnDst);
    v15 = hrgnDst;
  }
  else if ( !SetWindowRgn(hWnd, 0LL, 1) )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10FA,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
  }
  updated = TouchKeyboardExperienceManager::UpdateBorderStyle(this, hWnd, a2);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x10FD,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
  *(struct tagRECT *)((char *)a2 + 120) = *a3;
  v17 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 + 168));
  v18 = *a3;
  *(struct tagRECT *)hrgnSrc2 = *a3;
  LODWORD(v19) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
  LODWORD(v20) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
  LODWORD(v21) = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
  if ( v17.m128_f32[0] != 0.0 || v21 != 0.0 || v20 != 0.0 || v19 != 0.0 )
  {
    LODWORD(hrgnSrc2[0]) += (int)v17.m128_f32[0];
    HIDWORD(hrgnSrc2[0]) += (int)v21;
    LODWORD(hrgnSrc2[1]) = (int)(float)((float)SLODWORD(hrgnSrc2[0]) + v20);
    HIDWORD(hrgnSrc2[1]) = (int)(float)((float)SHIDWORD(hrgnSrc2[0]) + v19);
    v18 = *(struct tagRECT *)hrgnSrc2;
  }
  *(struct tagRECT *)((char *)a2 + 136) = v18;
  v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 344LL))(*(_QWORD *)a2, 4LL);
  v23 = v22;
  if ( v22 >= 0 )
  {
    KBViewInfo::BoostPriority(a2);
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 112LL))(*((_QWORD *)a2 + 1));
    v10 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x110A,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_45:
      wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>(&hrgnDst);
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>(&hrgnDst);
      v10 = 0;
    }
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1103,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v22);
  if ( v15 )
    DeleteObject(v15);
  v24 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(struct IApplicationFrame *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return v23;
}
