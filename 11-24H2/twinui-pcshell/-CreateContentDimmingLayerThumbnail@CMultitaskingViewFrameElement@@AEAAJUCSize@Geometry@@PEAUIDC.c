/*
 * XREFs of ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x1804CB858
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@44PEAUIAnimationCoordinator@@@Z @ 0x1804CC5E4 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x1804CD2DC (-_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1801524EC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804CB3B8 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     ?s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NPEAUIDCompThumbnail@@PEAPEAU3@@Z @ 0x1804CD674 (-s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 CMultitaskingViewFrameElement::CreateContentDimmingLayerThumbnail(
        __int64 a1,
        __int64 a2,
        struct IDCompThumbnail *a3,
        __int64 a4,
        ...)
{
  struct IDCompThumbnail **v6; // r15
  _QWORD *v7; // r12
  float *v8; // rsi
  float v9; // xmm0_4
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, struct IDCompThumbnail *, _QWORD, __int64, GUID *, struct IDCompThumbnail ***); // rbx
  unsigned int Color; // eax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  struct IDCompThumbnail **v16; // rbx
  __int64 (__fastcall *v17)(struct IDCompThumbnail **, __int64, _QWORD, _QWORD); // rdi
  __int64 v18; // rdx
  int v19; // ebx
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, __int64, __int64, __int64, GUID *, __int64 *); // rdi
  int v22; // eax
  float v23; // xmm0_4
  int DimmingLayerThumbnail; // eax
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v27; // [rsp+98h] [rbp+48h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+58h]
  struct IDCompThumbnail **v29; // [rsp+B0h] [rbp+60h] BYREF
  va_list va; // [rsp+B0h] [rbp+60h]
  __int64 v31; // [rsp+B8h] [rbp+68h] BYREF
  va_list va1; // [rsp+B8h] [rbp+68h]
  va_list va2; // [rsp+C0h] [rbp+70h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v29 = va_arg(va1, struct IDCompThumbnail **);
  va_copy(va2, va1);
  v31 = va_arg(va2, _QWORD);
  v28 = a4;
  v27 = a2;
  v6 = v29;
  *v29 = 0LL;
  v7 = (_QWORD *)v31;
  *(_QWORD *)v31 = 0LL;
  v8 = (float *)(a1 + 348);
  if ( *(_DWORD *)(a1 + 356) )
  {
    v9 = HighContrastAwareOpacity<float>::operator float((float *)(a1 + 348));
    if ( v9 != HighContrastAwareOpacity<float>::operator float((float *)(a1 + 360)) )
    {
      v29 = 0LL;
      v10 = *(_QWORD *)(a1 + 488);
      v11 = *(__int64 (__fastcall **)(__int64, struct IDCompThumbnail *, _QWORD, __int64, GUID *, struct IDCompThumbnail ***))(*(_QWORD *)v10 + 104LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)va);
      v31 = 0x100000001LL;
      Color = CImmersiveColor::GetColor(0xABu);
      v13 = v11(v10, a3, Color, v31, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (struct IDCompThumbnail ***)va);
      v14 = v13;
      if ( v13 >= 0 )
      {
        v16 = v29;
        v17 = (__int64 (__fastcall *)(struct IDCompThumbnail **, __int64, _QWORD, _QWORD))*((_QWORD *)*v29 + 4);
        HighContrastAwareOpacity<float>::operator float(v8);
        v13 = v17(v16, v18, 0LL, 0LL);
        v14 = v13;
        if ( v13 >= 0 )
        {
          v19 = *(_DWORD *)(a1 + 356);
          v27 = 0LL;
          v20 = *(_QWORD *)(a1 + 488);
          v21 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v20 + 72LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
          LODWORD(v31) = 1;
          HIDWORD(v31) = v19;
          v22 = v21(v20, v28, v31, 3LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v27);
          v14 = v22;
          if ( v22 >= 0 )
          {
            v31 = a1;
            (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, _QWORD *, __int64), __int64 *))(*(_QWORD *)v27 + 80LL))(
              v27,
              LambdaCustomPaintProc__lambda_5e9c18940e8e88d162ff7728dae26002__ID2D1DeviceContext_,
              (__int64 *)va1);
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
            *v6 = (struct IDCompThumbnail *)v29;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
            *v7 = v27;
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
            v14 = 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x39F,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
              (const char *)(unsigned int)v22);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
          }
          goto LABEL_11;
        }
        v15 = 919LL;
      }
      else
      {
        v15 = 918LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)v13);
LABEL_11:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)va);
      return v14;
    }
  }
  v23 = HighContrastAwareOpacity<float>::operator float(v8);
  DimmingLayerThumbnail = CMultitaskingViewFrameElement::s_CreateDimmingLayerThumbnail(
                            *(struct ISwitchThumbnailFactory **)(a1 + 488),
                            v23,
                            a3,
                            v6);
  v14 = DimmingLayerThumbnail;
  if ( DimmingLayerThumbnail < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38E,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)DimmingLayerThumbnail);
  return v14;
}
