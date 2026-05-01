/*
 * XREFs of ?RuntimeClassInitialize@CScrollButtonContainer@@QEAAJAEBUScrollViewerHostMetrics@@W4ScrollButtonContainerFlags@@PEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@@Z @ 0x1804D97C4
 * Callers:
 *     ??$MakeAndInitialize@VCScrollButtonContainer@@V1@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonContainerFlags@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVCScrollButtonContainer@@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonContainerFlags@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIDWriteTextFormat@@AEAPEAUISwitchThumbnailFactory@@@Z @ 0x1804D929C (--$MakeAndInitialize@VCScrollButtonContainer@@V1@AEBUScrollViewerHostMetrics@@AEAW4ScrollButtonC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@V?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemGrid@@@Details@WRL@Microsoft@@YAJPEAPEAV?$CWeakReference@VCSwitchItemGrid@@@WeakReference@@AEAPEAVCSwitchItemGrid@@@Z @ 0x1804C1184 (--$MakeAndInitialize@V-$CWeakReference@VCSwitchItemGrid@@@WeakReference@@V12@AEAPEAVCSwitchItemG.c)
 *     ?CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakReference@WeakReference@@PEAUIDWriteTextFormat@@PEAUISwitchThumbnailFactory@@AEBU_GUID@@PEAPEAX@Z @ 0x1804D1964 (-CGlyphButtonElement_CreateInstance@@YAJGW4GlyphButtonFlags@@AEBUGlyphButtonMetrics@@IPEAUIWeakR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CScrollButtonContainer::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r13
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, GUID *, __int64); // rdi
  int v9; // ebx
  __int64 v10; // rdx
  int v12; // eax
  __int64 v13; // rbx
  int Instance; // eax
  unsigned int v15; // edi
  int v16; // r9d
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // [rsp+38h] [rbp-50h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *(_OWORD *)(a1 + 240) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 256) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 272) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 288) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 304) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 320) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 336) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 352) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 368) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 384) = *(_OWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 400) = *(_QWORD *)(a2 + 160);
  *(_DWORD *)(a1 + 232) = a3;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 424), a4);
  v7 = a6;
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)a6 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 88));
  a6 = 0x100000001LL;
  v9 = v8(v7, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, a1 + 88);
  if ( v9 < 0 )
  {
    v10 = 57LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollbuttoncontainerelement.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  a6 = a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 432));
  v12 = Microsoft::WRL::Details::MakeAndInitialize<WeakReference::CWeakReference<CSwitchItemGrid>,WeakReference::CWeakReference<CSwitchItemGrid>,CSwitchItemGrid * &>(
          (_QWORD *)(a1 + 432),
          &a6);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\CustomWeakReference.h",
      (const char *)(unsigned int)v12);
    v10 = 58LL;
    goto LABEL_3;
  }
  a6 = *(_QWORD *)(a1 + 432);
  v13 = a6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&a6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 408));
  Instance = CGlyphButtonElement_CreateInstance(
               (*(_DWORD *)(a1 + 232) & 1) != 0 ? -6293 : -6386,
               1u,
               a1 + 280,
               2 * (*(_DWORD *)(a1 + 232) & 1u) + 13018,
               v13,
               a5,
               v7,
               v21,
               (_QWORD *)(a1 + 408));
  v15 = Instance;
  if ( Instance >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 416));
    if ( (*(_BYTE *)(a1 + 232) & 1) != 0 )
    {
      v16 = 13021;
      v17 = 1;
    }
    else
    {
      v17 = 0;
      v16 = 13019;
    }
    v18 = CGlyphButtonElement_CreateInstance(
            v17 != 0 ? -6292 : -6387,
            1u,
            a1 + 280,
            v16,
            v13,
            a5,
            v7,
            v22,
            (_QWORD *)(a1 + 416));
    v15 = v18;
    if ( v18 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, *(_QWORD *)(a1 + 408));
      v15 = v19;
      if ( v19 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, *(_QWORD *)(a1 + 416));
        v15 = v20;
        if ( v20 >= 0 )
        {
          v15 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x58,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollbuttoncontainerelement.cpp",
            (const char *)(unsigned int)v20);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x57,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollbuttoncontainerelement.cpp",
          (const char *)(unsigned int)v19);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollbuttoncontainerelement.cpp",
        (const char *)(unsigned int)v18);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollbuttoncontainerelement.cpp",
      (const char *)(unsigned int)Instance);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&a6);
  return v15;
}
