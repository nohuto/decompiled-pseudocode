/*
 * XREFs of ?RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchThumbnailFactory@@PEAUISwitchItem@@@Z @ 0x1804D5388
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUThumbnailSizeMetrics@@AEBQEAUISwitchThumbnailFactory@@AEBQEAUISwitchItem@@@Z @ 0x1804C121C (--$MakeAndInitialize@VSwitchItemThumbnailElement@@UIMultitaskingViewElement@@AEBUThumbnailSizeMe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@?$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThumbnailElement@@@Z @ 0x1804CA580 (-Initialize@-$CWeakRefSource@VSwitchItemThumbnailElement@@@WeakReference@@QEAAJPEAVSwitchItemThu.c)
 *     ?RuntimeClassInitialize@CShrinkButtonElement@@QEAAJNPEAUISwitchThumbnailFactory@@@Z @ 0x1804D0C9C (-RuntimeClassInitialize@CShrinkButtonElement@@QEAAJNPEAUISwitchThumbnailFactory@@@Z.c)
 *     ObservableProperty_HWND_____::AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___ @ 0x1804D4A00 (ObservableProperty_HWND_____--AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SwitchItemThumbnailElement::RuntimeClassInitialize(
        SwitchItemThumbnailElement *this,
        const struct ThumbnailSizeMetrics *a2,
        struct ISwitchThumbnailFactory *a3,
        struct ISwitchItem *a4)
{
  const struct ThumbnailSizeMetrics *v5; // rbx
  int v7; // eax
  unsigned int v8; // edi
  _OWORD *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r8
  int v17; // eax
  int v18[2]; // [rsp+20h] [rbp-38h] BYREF
  SwitchItemThumbnailElement *v19; // [rsp+28h] [rbp-30h]
  char v20; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+68h] [rbp+10h] BYREF

  v5 = a2;
  v7 = CShrinkButtonElement::RuntimeClassInitialize(this, *((double *)a2 + 15), a3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (_OWORD *)((char *)this + 296);
    v11 = 2LL;
    do
    {
      *v10 = *(_OWORD *)v5;
      v10[1] = *((_OWORD *)v5 + 1);
      v10[2] = *((_OWORD *)v5 + 2);
      v10[3] = *((_OWORD *)v5 + 3);
      v10[4] = *((_OWORD *)v5 + 4);
      v10[5] = *((_OWORD *)v5 + 5);
      v10[6] = *((_OWORD *)v5 + 6);
      v10 += 8;
      *(v10 - 1) = *((_OWORD *)v5 + 7);
      v5 = (const struct ThumbnailSizeMetrics *)((char *)v5 + 128);
      --v11;
    }
    while ( v11 );
    *v10 = *(_OWORD *)v5;
    *((_QWORD *)v10 + 2) = *((_QWORD *)v5 + 2);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 72, (__int64)a4);
    v12 = WeakReference::CWeakRefSource<SwitchItemThumbnailElement>::Initialize((__int64 *)this + 75, (__int64)this);
    v13 = v12;
    if ( v12 >= 0 )
    {
      *(_QWORD *)v18 = *((_QWORD *)this + 75);
      v14 = *(_QWORD *)v18;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v18);
      v19 = this;
      v20 = 1;
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 72) + 40LL))(*((_QWORD *)this + 72));
      v22 = v14;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
      v17 = ObservableProperty_HWND_____::AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___(v15, &v22, v16);
      v13 = v17;
      if ( v17 >= 0 )
      {
        v13 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x29,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
          (const char *)(unsigned int)v17);
        (*(void (__fastcall **)(SwitchItemThumbnailElement *))(*(_QWORD *)this + 80LL))(this);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
        (const char *)(unsigned int)v12);
    }
    return v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
