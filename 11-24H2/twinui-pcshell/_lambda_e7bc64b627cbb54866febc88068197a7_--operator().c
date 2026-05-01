/*
 * XREFs of _lambda_e7bc64b627cbb54866febc88068197a7_::operator() @ 0x180309CF8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4___::Run @ 0x18030AA80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e387f2ee55bde35d068d310edc732ad4___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IImmersiveApplication_GetNormalDisplayNameWithSubtitle@@YAJPEAUIImmersiveApplication@@PEBGPEAPEAG@Z @ 0x180016530 (-IImmersiveApplication_GetNormalDisplayNameWithSubtitle@@YAJPEAUIImmersiveApplication@@PEBGPEAPE.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18001AD78 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowManagementIDKOnDesk.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180188F44 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D13C0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ?GetAppTitleBarConfig@@YA?AV?$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801D29FC (-GetAppTitleBarConfig@@YA-AV-$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewMan.c)
 *     ?GetAppChromeData@@YA?AV?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801FE0BC (-GetAppChromeData@@YA-AV-$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall lambda_e7bc64b627cbb54866febc88068197a7_::operator()(struct IImmersiveApplication **a1)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, __int64 *); // rbx
  char v4; // dl
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, GUID *, RTL_SRWLOCK **); // rbx
  RTL_SRWLOCK *v9; // rbx
  __int64 (__fastcall *v10)(RTL_SRWLOCK *, HSTRING *); // rdi
  int v11; // eax
  const unsigned __int16 *StringRawBuffer; // rax
  char v13; // bl
  __int64 v14; // rdi
  int (__fastcall *v15)(__int64, GUID *, __int64 *); // rbx
  unsigned int v16; // r8d
  unsigned int v17; // r8d
  int v18; // eax
  int v19; // eax
  __int64 v21; // [rsp+20h] [rbp-38h] BYREF
  RTL_SRWLOCK *v22; // [rsp+28h] [rbp-30h] BYREF
  char v23; // [rsp+30h] [rbp-28h]
  unsigned __int16 *v24; // [rsp+38h] [rbp-20h] BYREF
  __int64 v25; // [rsp+40h] [rbp-18h]
  __int64 v26; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+20h]
  HSTRING string; // [rsp+80h] [rbp+28h] BYREF
  __int64 v29; // [rsp+88h] [rbp+30h] BYREF
  __int64 v30; // [rsp+90h] [rbp+38h] BYREF
  RTL_SRWLOCK *v31; // [rsp+98h] [rbp+40h] BYREF

  v30 = 0LL;
  v2 = *((_QWORD *)*a1 + 15);
  v3 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 144LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  if ( v3(v2, &v30) >= 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::__private_IsEnabledPreCheck(
      `wil::Feature<__WilFeatureTraits_Feature_WindowManagementIDKOnDesktop>::GetImpl'::`2'::impl,
      v4);
    string = 0LL;
    v31 = 0LL;
    CIAMGlobals::AcquireExclusive(v6, &v22);
    v7 = **((_QWORD **)*a1 + 13);
    if ( v7 )
    {
      v8 = *(int (__fastcall **)(__int64, GUID *, RTL_SRWLOCK **))(*(_QWORD *)v7 + 40LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v31);
      if ( v8(v7, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v31) >= 0 )
      {
        v9 = v31;
        if ( v31 )
        {
          v10 = (__int64 (__fastcall *)(RTL_SRWLOCK *, HSTRING *))*((_QWORD *)v31->Ptr + 60);
          WindowsDeleteString(string);
          string = 0LL;
          v11 = v10(v9, &string);
          if ( v11 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x605,
              (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
              (const char *)(unsigned int)v11);
        }
      }
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v22);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v31);
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
    v25 = -1LL;
    v26 = -1LL;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    if ( (int)IImmersiveApplication_GetNormalDisplayNameWithSubtitle(a1[1], StringRawBuffer, &v24) >= 0 )
      (*(void (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v30 + 24LL))(v30, v24);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
    WindowsDeleteString(string);
    v21 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1 + 1,
                &v21) >= 0 )
    {
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 216LL))(v21);
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v30 + 88LL))(v30, 128LL, v13 != 0 ? 0x80 : 0);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  }
  v29 = 0LL;
  CIAMGlobals::AcquireExclusive(v5, &v31);
  v14 = **((_QWORD **)*a1 + 13);
  if ( v14 )
  {
    v15 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v14 + 40LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v29);
    if ( v15(v14, &GUID_79eaeb1a_4280_4be7_b345_9f7a790149f5, &v29) >= 0 )
    {
      if ( v29 )
      {
        GetAppTitleBarConfig((__int64)&string, v29, v16);
        if ( BYTE2(string) )
        {
          v18 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, HSTRING *))(*(_QWORD *)*a1 + 176LL))(
                  *a1,
                  &string);
          if ( v18 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x634,
              (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
              (const char *)(unsigned int)v18);
        }
        GetAppChromeData((__int64)&v22, v29, v17);
        if ( v23 )
        {
          v19 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, RTL_SRWLOCK *))(*(_QWORD *)*a1 + 160LL))(
                  *a1,
                  v22);
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x63A,
              (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
              (const char *)(unsigned int)v19);
        }
      }
    }
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v31);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v29);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
}
