/*
 * XREFs of _lambda_e7bc64b627cbb54866febc88068197a7_::operator() @ 0x1801D7AC0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4___::Run @ 0x1801D8040 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000FF1C (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180170310 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wi.c)
 *     ?IImmersiveApplication_GetNormalDisplayNameWithSubtitle@@YAJPEAUIImmersiveApplication@@PEBGPEAPEAG@Z @ 0x180191A80 (-IImmersiveApplication_GetNormalDisplayNameWithSubtitle@@YAJPEAUIImmersiveApplication@@PEBGPEAPE.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801991B4 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?GetAppChromeData@@YA?AV?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18019F380 (-GetAppChromeData@@YA-AV-$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper.c)
 *     ?GetAppTitleBarConfig@@YA?AV?$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18019F418 (-GetAppTitleBarConfig@@YA-AV-$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewMan.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall lambda_e7bc64b627cbb54866febc88068197a7_::operator()(struct IImmersiveApplication **a1)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, __int64 *); // rbx
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, GUID *, __int64 *); // rdi
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rdi
  int v12; // eax
  const unsigned __int16 *StringRawBuffer; // rax
  char v14; // bl
  __int64 v15; // rbx
  int (__fastcall *v16)(__int64, GUID *, __int64 *); // rdi
  __int64 v17; // rcx
  unsigned int v18; // r8d
  unsigned int v19; // r8d
  int v20; // eax
  int v21; // eax
  __int64 v23; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int16 *v24; // [rsp+28h] [rbp-18h] BYREF
  __int64 v25; // [rsp+30h] [rbp-10h]
  __int64 v26; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v28; // [rsp+70h] [rbp+30h] BYREF
  __int64 v29; // [rsp+78h] [rbp+38h] BYREF
  HSTRING string; // [rsp+80h] [rbp+40h] BYREF
  __int64 v31; // [rsp+88h] [rbp+48h] BYREF

  v31 = 0LL;
  v2 = *((_QWORD *)*a1 + 15);
  v3 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 144LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
  if ( v3(v2, &v31) >= 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::GetImpl'::`2'::impl,
      1u,
      3u,
      v5);
    string = 0LL;
    v28 = 0LL;
    CIAMGlobals::AcquireExclusive(v6, &v24);
    v7 = **((_QWORD **)*a1 + 13);
    if ( v7 )
    {
      v8 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v7 + 40LL);
      v9 = v28;
      v28 = 0LL;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( v8(v7, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v28) >= 0 )
      {
        v10 = v28;
        if ( v28 )
        {
          v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v28 + 480LL);
          WindowsDeleteString(string);
          string = 0LL;
          v12 = v11(v10, &string);
          if ( v12 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x605,
              (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
              (const char *)(unsigned int)v12);
        }
      }
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v24);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
    v25 = -1LL;
    v26 = -1LL;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    if ( (int)IImmersiveApplication_GetNormalDisplayNameWithSubtitle(a1[1], StringRawBuffer, &v24) >= 0 )
      (*(void (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v31 + 24LL))(v31, v24);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
    WindowsDeleteString(string);
    v23 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))a1 + 1,
                (__int64)&v23) >= 0 )
    {
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 216LL))(v23);
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v31 + 88LL))(v31, 128LL, v14 != 0 ? 0x80 : 0);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
  }
  v29 = 0LL;
  CIAMGlobals::AcquireExclusive(v4, &string);
  v15 = **((_QWORD **)*a1 + 13);
  if ( v15 )
  {
    v16 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v15 + 40LL);
    v17 = v29;
    v29 = 0LL;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v16(v15, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v29) >= 0 && v29 )
    {
      GetAppTitleBarConfig((__int64)&v28, v29, v18);
      if ( BYTE2(v28) )
      {
        v20 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, __int64 *))(*(_QWORD *)*a1 + 176LL))(*a1, &v28);
        if ( v20 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x634,
            (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
            (const char *)(unsigned int)v20);
      }
      GetAppChromeData((__int64)&v24, v29, v19);
      if ( (_BYTE)v25 )
      {
        v21 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, unsigned __int16 *))(*(_QWORD *)*a1 + 160LL))(
                *a1,
                v24);
        if ( v21 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x63A,
            (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
            (const char *)(unsigned int)v21);
      }
    }
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&string);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v29);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
}
