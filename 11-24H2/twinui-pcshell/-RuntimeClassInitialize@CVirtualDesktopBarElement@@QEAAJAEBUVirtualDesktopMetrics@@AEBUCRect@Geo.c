/*
 * XREFs of ?RuntimeClassInitialize@CVirtualDesktopBarElement@@QEAAJAEBUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804CFD88
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopBarElement@@UIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@PEAUIObservableObjectArray@@PEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@$$QEAPEAUIObservableObjectArray@@$$QEAPEAUIVirtualDesktopElementFactory@@$$QEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804BB0FC (--$MakeAndInitialize@VCVirtualDesktopBarElement@@UIMultitaskingViewElement@@AEAUVirtualDesktopMe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1801524EC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??4?$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@Z @ 0x1804C16F4 (--4-$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@.c)
 *     ?CScrollViewerHost_CreateInstance@@YAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU_MARGINS@@AEBURelativeMargins@@IPEAUIMultitaskingViewElement@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804CA3C8 (-CScrollViewerHost_CreateInstance@@YAJW4ScrollViewerHostFlags@@AEBUScrollViewerHostMetrics@@AEBU.c)
 *     ?Initialize@?$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThumbnailElement@@@Z @ 0x1804CA580 (-Initialize@-$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThu.c)
 *     ObservableProperty_bool_::AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___ @ 0x1804CF68C (ObservableProperty_bool_--AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___.c)
 *     ??$As@UIVirtualDesktopContainerElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopContainerElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804CF788 (--$As@UIVirtualDesktopContainerElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEB.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopContainerElement@@UIMultitaskingViewElement@@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@AEAPEAUIObservableObjectArray@@AEAPEAUIVirtualDesktopElementFactory@@PEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@012@AEAUVirtualDesktopMetrics@@AEBUCRect@Geometry@@AEAPEAUIObservableObjectArray@@AEAPEAUIVirtualDesktopElementFactory@@$$QEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804CF9F4 (--$MakeAndInitialize@VCVirtualDesktopContainerElement@@UIMultitaskingViewElement@@A_ea_1804CF9F4.c)
 *     ?_UpdateScrollElementVisibility@CVirtualDesktopBarElement@@IEAAXXZ @ 0x1804D063C (-_UpdateScrollElementVisibility@CVirtualDesktopBarElement@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CVirtualDesktopBarElement::RuntimeClassInitialize(
        CVirtualDesktopBarElement *this,
        const struct VirtualDesktopMetrics *a2,
        const struct Geometry::CRect *a3,
        struct IObservableObjectArray *a4,
        struct IVirtualDesktopElementFactory *a5,
        struct ISwitchThumbnailFactory *a6)
{
  _OWORD *v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // r12
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  int v12; // ebx
  __int64 v13; // rdx
  unsigned int Color; // edi
  __int64 v16; // r14
  __int64 (__fastcall *v17)(__int64, _QWORD, _QWORD, __int64, GUID *, char *); // rsi
  unsigned int v18; // r14d
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, _QWORD, _QWORD, __int64, GUID *, char *); // rbx
  struct ISwitchThumbnailFactory **v21; // rdi
  struct ISwitchThumbnailFactory *v22; // rbx
  __int64 (__fastcall *v23)(struct IVirtualDesktopElementFactory *, __int64, __int64, GUID *, char *); // rdi
  int v24; // eax
  unsigned int v25; // edi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // rax
  int Instance; // eax
  int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // [rsp+38h] [rbp-71h]
  __int64 v36; // [rsp+50h] [rbp-59h] BYREF
  __int64 (__fastcall ***v37)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-51h] BYREF
  int v38[2]; // [rsp+60h] [rbp-49h] BYREF
  struct ISwitchThumbnailFactory *v39; // [rsp+68h] [rbp-41h] BYREF
  struct IObservableObjectArray *v40[2]; // [rsp+70h] [rbp-39h] BYREF
  char v41; // [rsp+80h] [rbp-29h]
  __int128 v42; // [rsp+88h] [rbp-21h] BYREF
  _OWORD v43[2]; // [rsp+98h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  *(_QWORD *)&v42 = a3;
  v40[0] = a4;
  *(_QWORD *)v38 = a5;
  v7 = (_OWORD *)((char *)this + 232);
  v8 = 3LL;
  do
  {
    *v7 = *(_OWORD *)a2;
    v7[1] = *((_OWORD *)a2 + 1);
    v7[2] = *((_OWORD *)a2 + 2);
    v7[3] = *((_OWORD *)a2 + 3);
    v7[4] = *((_OWORD *)a2 + 4);
    v7[5] = *((_OWORD *)a2 + 5);
    v7[6] = *((_OWORD *)a2 + 6);
    v7 += 8;
    *(v7 - 1) = *((_OWORD *)a2 + 7);
    a2 = (const struct VirtualDesktopMetrics *)((char *)a2 + 128);
    --v8;
  }
  while ( v8 );
  *v7 = *(_OWORD *)a2;
  v7[1] = *((_OWORD *)a2 + 1);
  v7[2] = *((_OWORD *)a2 + 2);
  v7[3] = *((_OWORD *)a2 + 3);
  v7[4] = *((_OWORD *)a2 + 4);
  v7[5] = *((_OWORD *)a2 + 5);
  v7[6] = *((_OWORD *)a2 + 6);
  v9 = (__int64 *)((char *)this + 224);
  Microsoft::WRL::ComPtr<ISwitchThumbnailFactory>::operator=((__int64 *)this + 28, (__int64)a6);
  v10 = *((_QWORD *)this + 28);
  v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v10 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 11);
  v36 = 0x100000001LL;
  v12 = v11(v10, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 88);
  if ( v12 < 0 )
  {
    v13 = 19LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  Color = CImmersiveColor::GetColor(0xB6u);
  v16 = *v9;
  v17 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, char *))(*(_QWORD *)*v9 + 104LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 96);
  v36 = 0x100000001LL;
  v12 = v17(
          v16,
          *((_QWORD *)this + 11),
          Color,
          0x100000001LL,
          &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
          (char *)this + 768);
  if ( v12 < 0 )
  {
    v13 = 21LL;
    goto LABEL_5;
  }
  v18 = CImmersiveColor::GetColor(0x490u);
  if ( HIBYTE(v18) )
  {
    v19 = *v9;
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, char *))(*(_QWORD *)*v9 + 104LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 97);
    v36 = 0x100000001LL;
    v12 = v20(
            v19,
            *((_QWORD *)this + 11),
            v18,
            0x100000001LL,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            (char *)this + 776);
    if ( v12 < 0 )
    {
      v13 = 27LL;
      goto LABEL_5;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 97) + 32LL))(
            *((_QWORD *)this + 97),
            *((_QWORD *)this + 97),
            0LL,
            0LL);
    if ( v12 < 0 )
    {
      v13 = 28LL;
      goto LABEL_5;
    }
  }
  v21 = (struct ISwitchThumbnailFactory **)((char *)this + 728);
  v12 = WeakReference::CWeakRefSource<SwitchItemThumbnailElement>::Initialize((__int64 *)this + 91, (__int64)this);
  if ( v12 < 0 )
  {
    v13 = 31LL;
    goto LABEL_5;
  }
  v22 = *v21;
  v39 = *v21;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v39);
  v40[1] = this;
  v41 = 1;
  v23 = *(__int64 (__fastcall **)(struct IVirtualDesktopElementFactory *, __int64, __int64, GUID *, char *))(*(_QWORD *)a5 + 40LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 94);
  v24 = v23(a5, *v9, 1LL, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, (char *)this + 752);
  v25 = v24;
  if ( v24 >= 0 )
  {
    v26 = (*(__int64 (__fastcall **)(CVirtualDesktopBarElement *, _QWORD))(*(_QWORD *)this + 64LL))(
            this,
            *((_QWORD *)this + 94));
    v25 = v26;
    if ( v26 >= 0 )
    {
      v37 = 0LL;
      v36 = *v9;
      v27 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopContainerElement,IMultitaskingViewElement,VirtualDesktopMetrics &,Geometry::CRect const &,IObservableObjectArray * &,IVirtualDesktopElementFactory * &,ISwitchThumbnailFactory *>(
              (__int64 *)&v37,
              (CVirtualDesktopBarElement *)((char *)this + 232),
              (const struct Geometry::CRect *)v42,
              v40,
              (struct IVirtualDesktopElementFactory **)v38,
              (struct ISwitchThumbnailFactory **)&v36);
      v25 = v27;
      if ( v27 >= 0 )
      {
        v28 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopContainerElement>(
                &v37,
                (__int64 *)this + 92);
        v25 = v28;
        if ( v28 >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 93);
          v29 = *v9;
          memset(v43, 0, sizeof(v43));
          v42 = 0LL;
          Instance = CScrollViewerHost_CreateInstance(
                       3u,
                       (__int64)this + 376,
                       (__int64)&v42,
                       (__int64)v43,
                       96,
                       (__int64)v37,
                       v29,
                       v35,
                       (CVirtualDesktopBarElement *)((char *)this + 744));
          v25 = Instance;
          if ( Instance >= 0 )
          {
            v31 = (*(__int64 (__fastcall **)(CVirtualDesktopBarElement *, _QWORD))(*(_QWORD *)this + 64LL))(
                    this,
                    *((_QWORD *)this + 93));
            v25 = v31;
            if ( v31 >= 0 )
            {
              CVirtualDesktopBarElement::_UpdateScrollElementVisibility(this);
              v36 = (__int64)v22;
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v36);
              v32 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 92) + 40LL))(*((_QWORD *)this + 92));
              *(_QWORD *)v38 = v22;
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v38);
              v34 = ObservableProperty_bool_::AddListener__lambda_2481c7aedd1faa0c0b80517e0ae6abbe___(
                      v32,
                      (__int64 *)v38,
                      v33);
              v25 = v34;
              if ( v34 >= 0 )
              {
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
                v25 = 0;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x54,
                  (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
                  (const char *)(unsigned int)v34);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v36);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
                (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)this + 80LL))(this);
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x46,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
                (const char *)(unsigned int)v31);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
              (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)this + 80LL))(this);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x45,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
              (const char *)(unsigned int)Instance);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
            (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)this + 80LL))(this);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3B,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
            (const char *)(unsigned int)v28);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
          (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)this + 80LL))(this);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x39,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
          (const char *)(unsigned int)v27);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
        (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)this + 80LL))(this);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
        (const char *)(unsigned int)v26);
      (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)this + 80LL))(this);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)v24);
    (*(void (__fastcall **)(CVirtualDesktopBarElement *))(*(_QWORD *)this + 80LL))(this);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
  return v25;
}
