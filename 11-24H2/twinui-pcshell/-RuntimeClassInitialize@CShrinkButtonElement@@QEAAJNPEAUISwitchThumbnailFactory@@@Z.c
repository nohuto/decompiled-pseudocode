/*
 * XREFs of ?RuntimeClassInitialize@CShrinkButtonElement@@QEAAJNPEAUISwitchThumbnailFactory@@@Z @ 0x1804D0C9C
 * Callers:
 *     ?RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchThumbnailFactory@@PEAUISwitchItem@@@Z @ 0x1804D5388 (-RuntimeClassInitialize@SwitchItemThumbnailElement@@QEAAJAEBUThumbnailSizeMetrics@@PEAUISwitchTh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@Z @ 0x1804C16F4 (--4-$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchThumbnailFactory@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShrinkButtonElement::RuntimeClassInitialize(
        CShrinkButtonElement *this,
        double a2,
        struct ISwitchThumbnailFactory *a3)
{
  char *v3; // rsi
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, GUID *, char *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = (char *)this + 240;
  *((double *)this + 29) = a2;
  Microsoft::WRL::ComPtr<ISwitchThumbnailFactory>::operator=((__int64 *)this + 30, (__int64)a3);
  v5 = *(_QWORD *)v3;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(**(_QWORD **)v3 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 11);
  v7 = v6(v5, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 88);
  if ( v7 < 0 )
  {
    v8 = 12LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\shrinkbuttonelement.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v9 = *(_QWORD *)v3;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(**(_QWORD **)v3 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 33);
  v7 = v10(v9, *((_QWORD *)this + 11), 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 264);
  if ( v7 < 0 )
  {
    v8 = 13LL;
    goto LABEL_7;
  }
  v11 = *(_QWORD *)v3;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v11 + 112LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 31);
  v7 = v12(v11, *((_QWORD *)this + 33), 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 248);
  if ( v7 < 0 )
  {
    v8 = 14LL;
    goto LABEL_7;
  }
  return (unsigned int)v7;
}
