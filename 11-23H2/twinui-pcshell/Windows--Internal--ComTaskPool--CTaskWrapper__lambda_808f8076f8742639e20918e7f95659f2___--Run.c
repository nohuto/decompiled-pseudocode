/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_808f8076f8742639e20918e7f95659f2___::Run @ 0x180052E50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180036FE0 (-GetApplication@CWinRTApplicationView@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x180052EC0 (-SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1803CE39C (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_808f8076f8742639e20918e7f95659f2___::Run(
        __int64 a1)
{
  const unsigned __int16 *v2; // rbx
  int v3; // eax
  __int64 v5; // rbx
  __int64 *AddressOf; // rax
  int Application; // eax
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, __int64, GUID *, __int64 *); // rdi
  unsigned __int16 **v10; // r8
  int v11; // [rsp+20h] [rbp-30h]
  struct HWND__ v12[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h]
  __int64 v14; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v16; // [rsp+70h] [rbp+20h] BYREF
  __int64 v17; // [rsp+78h] [rbp+28h] BYREF
  EdpHelpers *v18; // [rsp+80h] [rbp+30h] BYREF

  v2 = 0LL;
  *(_QWORD *)&v12[0].unused = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( (unsigned int)EdpGetIsManaged() )
  {
    v17 = 0LL;
    v5 = *(_QWORD *)(a1 + 16);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v17);
    Application = CWinRTApplicationView::GetApplication(
                    (CWinRTApplicationView *)(v5 + 152),
                    (struct IImmersiveApplication **)AddressOf);
    if ( Application >= 0 )
    {
      v16 = 0LL;
      v8 = v17;
      v9 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v17 + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
      if ( v9(v8, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v16) >= 0
        && (*(int (__fastcall **)(__int64, EdpHelpers **))(*(_QWORD *)v16 + 32LL))(v16, &v18) >= 0 )
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v12);
        v13 = -1LL;
        v14 = -1LL;
        if ( (int)EdpHelpers::GetEnterpriseIdForWindow(v18, v12, v10) >= 0 )
        {
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
          v2 = *(const unsigned __int16 **)&v12[0].unused;
          goto LABEL_2;
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)Application,
        v11);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v12);
  }
LABEL_2:
  v3 = CApplicationViewBase::SetEnterpriseId((CApplicationViewBase *)(*(_QWORD *)(a1 + 16) + 24LL), v2);
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v3,
      v11);
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v12);
}
