/*
 * XREFs of ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x1804C206C
 * Callers:
 *     ??$MakeAndInitialize@VCSwitchItemElement@@UIMultitaskingViewElement@@USwitchItemElementInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@$$QEAUSwitchItemElementInitializeArgs@CSwitchItemElement@@@Z @ 0x1804B7030 (--$MakeAndInitialize@VCSwitchItemElement@@UIMultitaskingViewElement@@USwitchItemElementInitializ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003CD84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005F300 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$AsWeak@VICortanaWNFNotification@Cortana@TwinUI@@@WRL@Microsoft@@YAJPEAVICortanaWNFNotification@Cortana@TwinUI@@PEAVWeakRef@01@@Z @ 0x1803DE214 (--$AsWeak@VICortanaWNFNotification@Cortana@TwinUI@@@WRL@Microsoft@@YAJPEAVICortanaWNFNotificatio.c)
 *     ObservableProperty_Microsoft::WRL::ComPtr_IWICBitmap___::AddListener__lambda_2c2119f3dd10f8dbad56a05ca320bbc2___ @ 0x1804C0D90 (ObservableProperty_Microsoft--WRL--ComPtr_IWICBitmap___--AddListener__lambda_2c2119f3dd10f8dbad5.c)
 *     ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_775801dc926fad4e7766c846adb2ec1f___ @ 0x1804C0E8C (ObservableProperty_Windows--Internal--NativeString_Windows--Internal--CoTaskMemPoli_ea_1804C0E8C.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemGrid@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@AEAPEAVCSwitchItemGrid@@@Z @ 0x1804C1184 (--$MakeAndInitialize@V-$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemG.c)
 *     ??$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Z @ 0x1804C121C (--$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMe.c)
 *     ??4?$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@Z @ 0x1804C16F4 (--4-$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@.c)
 *     ?CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D1964 (-CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CSwitchItemElement::RuntimeClassInitialize(
        CSwitchItemElement *this,
        const struct CSwitchItemElement::SwitchItemElementInitializeArgs *a2)
{
  _OWORD *v4; // rax
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // r12
  char *v9; // r13
  __int64 *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  unsigned __int64 v16; // r9
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  int v19; // eax
  __int64 *v20; // rdi
  const struct ThumbnailSizeMetrics *v21; // rbx
  int v22; // eax
  int v23; // eax
  int v24; // ebx
  int Instance; // eax
  int v26; // eax
  int v27; // eax
  __int64 (__fastcall ***v28)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v29)(_QWORD, GUID *, __int64 *); // rsi
  int v30; // eax
  int v31; // eax
  __int64 v32; // rbx
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rbx
  __int64 v36; // r8
  int v37; // eax
  __int64 v39[2]; // [rsp+50h] [rbp-28h] BYREF
  char v40; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]
  __int64 v42; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v43; // [rsp+C8h] [rbp+50h] BYREF
  __int64 (__fastcall ***v44)(_QWORD, GUID *, __int64 *); // [rsp+D0h] [rbp+58h] BYREF
  __int64 *v45; // [rsp+D8h] [rbp+60h] BYREF

  v4 = *(_OWORD **)a2;
  v5 = (_OWORD *)((char *)this + 288);
  v6 = 2LL;
  do
  {
    *v5 = *v4;
    v5[1] = v4[1];
    v5[2] = v4[2];
    v5[3] = v4[3];
    v5[4] = v4[4];
    v5[5] = v4[5];
    v5[6] = v4[6];
    v5 += 8;
    *(v5 - 1) = v4[7];
    v4 += 8;
    --v6;
  }
  while ( v6 );
  *v5 = *v4;
  *((_QWORD *)v5 + 2) = *((_QWORD *)v4 + 2);
  v7 = *((_QWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 248) = *(_OWORD *)v7;
  *(_OWORD *)((char *)this + 264) = *(_OWORD *)(v7 + 16);
  *((_QWORD *)this + 35) = *(_QWORD *)(v7 + 32);
  *((_QWORD *)this + 82) = *((_QWORD *)this + 34);
  v8 = (_QWORD *)((char *)this + 584);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 73, *((_QWORD *)a2 + 3));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 72, *((_QWORD *)a2 + 5));
  v9 = (char *)this + 568;
  Microsoft::WRL::ComPtr<ISwitchThumbnailFactory>::operator=((__int64 *)this + 71, *((_QWORD *)a2 + 7));
  v39[0] = 0LL;
  v42 = (__int64)v39;
  v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v42);
  v11 = Microsoft::WRL::AsWeak<TwinUI::Cortana::ICortanaWNFNotification>(
          *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 4),
          v10);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14 = *(_QWORD *)v9;
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(**(_QWORD **)v9 + 112LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 11);
    v42 = 0x100000001LL;
    v11 = v15(v14, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 88);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 34LL;
      goto LABEL_7;
    }
    v17 = *(_QWORD *)v9;
    v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(**(_QWORD **)v9 + 112LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 78);
    v42 = 0x100000001LL;
    v11 = v18(
            v17,
            *((_QWORD *)this + 11),
            0x100000001LL,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            (char *)this + 624);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 37LL;
      goto LABEL_7;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 78) + 232LL))(*((_QWORD *)this + 78), 0LL);
    v42 = (__int64)this;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 83);
    v19 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CSwitchItemGrid>,WeakReference::CWeakReference<CSwitchItemGrid>,CSwitchItemGrid * &>(
            (_QWORD *)this + 83,
            &v42);
    v12 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
        (const char *)(unsigned int)v19);
      v16 = v12;
      v13 = 40LL;
      goto LABEL_8;
    }
    v20 = (__int64 *)*((_QWORD *)this + 83);
    v42 = (__int64)v20;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v42);
    v39[1] = (__int64)this;
    v40 = 1;
    v21 = *(const struct ThumbnailSizeMetrics **)a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 76);
    v22 = Microsoft::WRL::Details::MakeAndInitialize<SwitchItemThumbnailElement,IMultitaskingViewElement,ThumbnailSizeMetrics const &,ISwitchThumbnailFactory * const &,ISwitchItem * const &>(
            (_QWORD *)this + 76,
            v21,
            (struct ISwitchThumbnailFactory **)a2 + 7,
            (struct ISwitchItem **)a2 + 3);
    v12 = v22;
    if ( v22 >= 0 )
    {
      v23 = (*(__int64 (__fastcall **)(CSwitchItemElement *, _QWORD))(*(_QWORD *)this + 64LL))(
              this,
              *((_QWORD *)this + 76));
      v12 = v23;
      if ( v23 >= 0 )
      {
        v24 = *((_DWORD *)a2 + 2);
        if ( v24 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 75);
          Instance = CGlyphButtonElement_CreateInstance(
                       59579LL,
                       v24 == 2,
                       (char *)this + 440,
                       13017LL,
                       v20,
                       *((_QWORD *)a2 + 6),
                       *((_QWORD *)a2 + 7));
          v12 = Instance;
          if ( Instance < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4A,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
              (const char *)(unsigned int)Instance);
            (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)this + 80LL))(this);
            goto LABEL_15;
          }
          v26 = (*(__int64 (__fastcall **)(CSwitchItemElement *, _QWORD))(*(_QWORD *)this + 64LL))(
                  this,
                  *((_QWORD *)this + 75));
          v12 = v26;
          if ( v26 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4C,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
              (const char *)(unsigned int)v26);
            (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)this + 80LL))(this);
            goto LABEL_15;
          }
        }
        v44 = 0LL;
        v43 = 0LL;
        v27 = Microsoft::WRL::WeakRef::As<IInspectable>(v39, (__int64 *)&v44);
        v12 = v27;
        if ( v27 >= 0 )
        {
          v28 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v44;
          v29 = **v44;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
          v30 = v29(v28, &GUID_ee3a7544_b067_4a8c_8ed8_da1d4e9bfd02, &v43);
          v12 = v30;
          if ( v30 >= 0 )
          {
            if ( v43 )
            {
              v31 = (*(__int64 (__fastcall **)(_QWORD, char *, char *, _QWORD, __int64))(*(_QWORD *)*v8 + 72LL))(
                      *v8,
                      (char *)this + 336,
                      (char *)this + 344,
                      *((unsigned int *)a2 + 16),
                      v43);
              v12 = v31;
              if ( v31 >= 0 )
              {
                v32 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 32LL))(*v8);
                v45 = v20;
                Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v45);
                v34 = ObservableProperty_Microsoft::WRL::ComPtr_IWICBitmap___::AddListener__lambda_2c2119f3dd10f8dbad56a05ca320bbc2___(
                        v32,
                        (__int64 *)&v45,
                        v33);
                v12 = v34;
                if ( v34 >= 0 )
                {
                  v35 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 24LL))(*v8);
                  v45 = v20;
                  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v45);
                  v37 = ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_775801dc926fad4e7766c846adb2ec1f___(
                          v35,
                          (__int64 *)&v45,
                          v36);
                  v12 = v37;
                  if ( v37 >= 0 )
                  {
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v44);
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v42);
                    v12 = 0;
                    goto LABEL_36;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x6A,
                    (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
                    (const char *)(unsigned int)v37);
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v44);
                  (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)this + 80LL))(this);
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x62,
                    (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
                    (const char *)(unsigned int)v34);
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v44);
                  (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)this + 80LL))(this);
                }
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x59,
                  (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
                  (const char *)(unsigned int)v31);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v44);
                (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)this + 80LL))(this);
              }
            }
            else
            {
              v12 = -2147418113;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x55,
                (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
                (const char *)0x8000FFFFLL);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v44);
              (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)this + 80LL))(this);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x54,
              (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
              (const char *)(unsigned int)v30);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v44);
            (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)this + 80LL))(this);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x53,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
            (const char *)(unsigned int)v27);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v43);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v44);
          (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)this + 80LL))(this);
        }
        goto LABEL_15;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
        (const char *)(unsigned int)v23);
      (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)this + 80LL))(this);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
        (const char *)(unsigned int)v22);
      (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)this + 80LL))(this);
    }
LABEL_15:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v42);
    goto LABEL_36;
  }
  v13 = 32LL;
LABEL_7:
  v16 = (unsigned int)v11;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
    (const char *)v16);
LABEL_36:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v39);
  return v12;
}
