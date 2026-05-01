/*
 * XREFs of ?CurrentVirtualDesktopChanged@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1804B4040
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$As@UIVirtualDesktopItemInternal@@@?$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804B3C50 (--$As@UIVirtualDesktopItemInternal@@@-$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRe.c)
 *     ??4?$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z @ 0x1804B3F38 (--4-$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopItemCollection::CurrentVirtualDesktopChanged(
        VirtualDesktopItemCollection *this,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  __int64 (__fastcall ****v5)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall ****v6)(_QWORD, GUID *, __int64 *); // rsi
  int v7; // eax
  unsigned int v8; // ebx
  struct IUnknown **v9; // rax
  BOOL v10; // ebx
  __int64 v11; // rax
  struct IUnknown **v12; // rax
  BOOL v13; // ebx
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-10h] BYREF
  __int64 v17; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  char v19; // [rsp+60h] [rbp+30h] BYREF
  __int64 *v20; // [rsp+78h] [rbp+48h] BYREF

  v5 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))*((_QWORD *)this - 16);
  v6 = &v5[*((_QWORD *)this - 15)];
  while ( v5 != v6 )
  {
    v20 = 0LL;
    v7 = Microsoft::WRL::ComPtr<IObservableItem>::As<IVirtualDesktopItemInternal>(v5, (__int64 *)&v20);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8D,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
      return v8;
    }
    v9 = (struct IUnknown **)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v20 + 72))(v20, &v16);
    v10 = SHIsSameObject(*v9, a2);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    v11 = *v20;
    if ( v10 )
    {
      v19 = 0;
    }
    else
    {
      v12 = (struct IUnknown **)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 72))(v20, &v17);
      v13 = SHIsSameObject(*v12, a3);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v17);
      if ( !v13 )
        goto LABEL_9;
      v19 = 1;
      v11 = *v20;
    }
    v14 = (*(__int64 (**)(void))(v11 + 56))();
    ObservableProperty<bool>::operator=(v14, &v19);
LABEL_9:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v20);
    ++v5;
  }
  return 0LL;
}
