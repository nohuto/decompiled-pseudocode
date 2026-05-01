/*
 * XREFs of ?RecalculateDesktopName@VirtualDesktopAcessibility@@AEAAJ_N@Z @ 0x18055B2D0
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x1800941D8 (-RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktop.c)
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18055B290 (-CurrentVirtualDesktopChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?VirtualDesktopNameChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x18055B5C0 (-VirtualDesktopNameChanged@VirtualDesktopAcessibility@@UEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180016930 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1801E5480 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?CompareOrdinal@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPEBG_K@Z @ 0x1801E9100 (-CompareOrdinal@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAHPE.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180211CD0 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ??4?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV012@@Z @ 0x180231F94 (--4-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV01.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopAcessibility::RecalculateDesktopName(VirtualDesktopAcessibility *this, char a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, struct IUnknown **); // rbx
  int v6; // eax
  int v7; // ebx
  struct IUnknown *v8; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  PCWSTR StringRawBuffer; // rax
  __int64 v15; // r8
  const WCHAR *v16; // rdx
  HWND DesktopWindow; // rax
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v20; // [rsp+28h] [rbp-28h] BYREF
  const WCHAR *v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h]
  __int64 v23; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 *v25; // [rsp+80h] [rbp+30h] BYREF
  HSTRING string; // [rsp+90h] [rbp+40h] BYREF
  struct IUnknown *v27; // [rsp+98h] [rbp+48h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 27) + 32LL))(*((_QWORD *)this + 27), &v20);
  v27 = 0LL;
  v4 = *((_QWORD *)this + 25);
  v5 = *(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v4 + 368LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
  v6 = v5(v4, &v27);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_29;
  }
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  v8 = v27;
  QueryInterface = v27->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 **))QueryInterface)(
          v8,
          &GUID_c9be252c_e386_425e_b33c_ca422112f51f,
          &v25);
  v7 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
      (const char *)(unsigned int)v10);
LABEL_5:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v21);
    goto LABEL_29;
  }
  string = 0LL;
  v11 = *v25;
  string = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v11 + 32))(v25, &string);
  v7 = v12;
  if ( v12 < 0 )
  {
    v13 = 84LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopaccessibility.cpp",
      (const char *)(unsigned int)v12);
LABEL_9:
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
    goto LABEL_5;
  }
  if ( string )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            (__int64)&v21,
            (__int64)StringRawBuffer,
            0xFFFFFFFFFFFFFFFFuLL);
    v7 = v12;
    if ( v12 < 0 )
    {
      v13 = 88LL;
      goto LABEL_8;
    }
  }
  else
  {
    v19 = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *, __int64 *))(**((_QWORD **)this + 24) + 104LL))(
           *((_QWORD *)this + 24),
           v27,
           &v19);
    if ( v7 < 0 )
      goto LABEL_9;
    v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
            &v21,
            (__int64)&_ImageBase,
            13501LL,
            v19 + 1);
    v7 = v12;
    if ( v12 < 0 )
    {
      v13 = 95LL;
      goto LABEL_8;
    }
  }
  if ( !SHIsSameObject(v27, *((struct IUnknown **)this + 26)) )
    goto LABEL_26;
  LODWORD(v15) = v22;
  if ( v22 == -1 )
  {
    if ( v21 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v21[v15] );
    }
    else
    {
      LODWORD(v15) = 0;
    }
  }
  v16 = &pvData;
  if ( v21 )
    v16 = v21;
  if ( Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CompareOrdinal(
         (const WCHAR **)this + 28,
         v16,
         v15) != 2 )
  {
LABEL_26:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::operator=(
      (_QWORD *)this + 28,
      (__int64 *)&v21);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 26, &v27);
    if ( a2 )
    {
      DesktopWindow = GetDesktopWindow();
      NotifyWinEvent(0x800Cu, DesktopWindow, 0, 0);
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&string);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v21);
  v7 = 0;
LABEL_29:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v27);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v20);
  return (unsigned int)v7;
}
