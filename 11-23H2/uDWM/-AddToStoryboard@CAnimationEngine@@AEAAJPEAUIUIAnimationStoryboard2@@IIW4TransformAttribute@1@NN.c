/*
 * XREFs of ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180057CD8
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x1800572C0 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18001BFC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x180057F58 (-GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z.c)
 *     ?CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimationTransition2@@@Z @ 0x180057F88 (-CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@NPEAN3I33IMMMMPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@@Z @ 0x1800AADA8 (-CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationSt.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnimationEngine::AddToStoryboard(
        __int64 a1,
        struct IUIAnimationStoryboard2 *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        double a6,
        double a7,
        double *a8,
        double *a9,
        unsigned int a10,
        struct TA_TIMINGFUNCTION *a11,
        unsigned int a12,
        double *a13,
        double *a14,
        unsigned int a15)
{
  __int64 v15; // rbx
  struct IUIAnimationStoryboard2 *v16; // rdi
  int TransitionVisualSetIndex; // eax
  double *v19; // rsi
  double v20; // xmm6_8
  int v21; // eax
  unsigned int v22; // ebx
  CThemeAnimationScheduleHelper *v23; // rcx
  double v24; // xmm6_8
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(__int64, __int64, __int64 *); // rbx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 (__fastcall *v31)(__int64, double *, _QWORD, __int64 *); // rbx
  int v32; // [rsp+28h] [rbp-89h]
  struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *v33; // [rsp+80h] [rbp-31h]
  char v34; // [rsp+88h] [rbp-29h]
  struct IUIAnimationTransition2 *v35; // [rsp+90h] [rbp-21h] BYREF
  __int64 v36; // [rsp+98h] [rbp-19h] BYREF
  __int64 v37[3]; // [rsp+A0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+3Fh]

  v15 = a4;
  v16 = a2;
  v37[0] = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  TransitionVisualSetIndex = CAnimationEngine::GetTransitionVisualSetIndex((CAnimationEngine *)a1, a3);
  if ( TransitionVisualSetIndex >= 0 )
  {
    _mm_lfence();
    v19 = *(double **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40)
                                                         + 8LL * (unsigned int)TransitionVisualSetIndex)
                                             + 40LL)
                                 + 8 * v15)
                     + 8LL * a5
                     + 8);
    v34 = 0;
    if ( !*(_QWORD *)v19 )
    {
      v20 = 0.0;
      if ( a13 && a15 < a10 )
      {
        v20 = a8[a15];
        a8[a15] = *a13;
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD, double *, _QWORD, double *))(**(_QWORD **)(a1 + 8) + 24LL))(
              *(_QWORD *)(a1 + 8),
              a8,
              a10,
              v19);
      v22 = v21;
      if ( v21 < 0 )
      {
        v29 = 1220LL;
        goto LABEL_35;
      }
      v34 = 1;
      if ( a13 && a15 < a10 )
        a8[a15] = v20;
      v16 = a2;
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)v19 + 192LL))(*(_QWORD *)v19, 0LL, a12);
    v22 = v21;
    if ( v21 < 0 )
    {
      v29 = 1230LL;
    }
    else
    {
      if ( a6 > v19[1] )
      {
        v26 = *(_QWORD *)(a1 + 16);
        v27 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v26 + 40LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v37);
        v21 = v27(v26, v28, v37);
        v22 = v21;
        if ( v21 < 0 )
        {
          v29 = 1235LL;
          goto LABEL_35;
        }
        v16 = a2;
        v21 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, __int64))a2->lpVtbl->AddTransition)(
                a2,
                *(_QWORD *)v19,
                v37[0]);
        v22 = v21;
        if ( v21 < 0 )
        {
          v29 = 1236LL;
          goto LABEL_35;
        }
        v19[1] = a6;
      }
      if ( v34 )
        goto LABEL_10;
      v30 = *(_QWORD *)(a1 + 16);
      v31 = *(__int64 (__fastcall **)(__int64, double *, _QWORD, __int64 *))(*(_QWORD *)v30 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
      v21 = v31(v30, a8, a10, &v36);
      v22 = v21;
      if ( v21 >= 0 )
      {
        v16 = a2;
        v21 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, __int64))a2->lpVtbl->AddTransition)(
                a2,
                *(_QWORD *)v19,
                v36);
        v22 = v21;
        if ( v21 >= 0 )
        {
LABEL_10:
          if ( (a13 || a14) && *(_DWORD *)a11 == 1 )
          {
            v24 = a7;
            v21 = CThemeAnimationScheduleHelper::CreateAndAddChoppedCubicBezierTransition(
                    v23,
                    v16,
                    *(struct IUIAnimationVariable2 **)v19,
                    *(struct IUIAnimationTransitionLibrary2 **)(a1 + 16),
                    a7,
                    a8,
                    a9,
                    a10,
                    a13,
                    a14,
                    a15,
                    *((float *)a11 + 1),
                    *((float *)a11 + 2),
                    *((float *)a11 + 3),
                    *((float *)a11 + 4),
                    v33);
            v22 = v21;
            if ( v21 < 0 )
            {
              v29 = 1274LL;
              goto LABEL_35;
            }
          }
          else
          {
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
            v24 = a7;
            v21 = CAnimationEngine::CreateAnimationTransition((CAnimationEngine *)a1, a3, a11, a7, a9, a10, &v35);
            v22 = v21;
            if ( v21 < 0 )
            {
              v29 = 1251LL;
              goto LABEL_35;
            }
            v21 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, struct IUIAnimationTransition2 *))v16->lpVtbl->AddTransition)(
                    v16,
                    *(_QWORD *)v19,
                    v35);
            v22 = v21;
            if ( v21 < 0 )
            {
              v29 = 1254LL;
              goto LABEL_35;
            }
          }
          v19[1] = v24 + v19[1];
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v37);
          return 0LL;
        }
        v29 = 1245LL;
      }
      else
      {
        v29 = 1244LL;
      }
    }
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationengine.cpp",
      (const char *)(unsigned int)v21,
      v32);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v37);
    return v22;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v37);
  return 2147500037LL;
}
