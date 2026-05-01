/*
 * XREFs of ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801E0F4C
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18006EDDC (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     _lambda_8b454e1137a63a08af271cf145abd5bf_::operator() @ 0x180511A00 (_lambda_8b454e1137a63a08af271cf145abd5bf_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18002962C (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18004D2BC (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     IsPeoplePane @ 0x18006C830 (IsPeoplePane.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x18006CB44 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18010D2A4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1801EF8FC (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z @ 0x180220240 (-_UsePreferredSizeForStandaloneWindows@CDesktopPositioner@@AEBA_NPEAUIApplicationView@@@Z.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180268238 (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ??0_lambda_3de5d145e6ce0c9b4d563a35329ea675_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@@ZAEAW42@AEAJ@Z @ 0x18028CA38 (--0_lambda_3de5d145e6ce0c9b4d563a35329ea675_@@QEAA@AEAP8CPinnedList@@EAAJW4TaskbarLayoutType@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1803DE724 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180515818 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CDesktopPositioner::_GetRestorePosition(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct PositionerPropertySetHelpers::ViewSizePreferences *a3,
        struct IApplicationViewPosition **a4)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // dl
  struct IApplicationView *v10; // rdx
  int LaunchPosition; // eax
  unsigned int v12; // ebx
  __int64 (__fastcall *v14)(struct IApplicationView *, unsigned int *); // rbx
  int v15; // eax
  CDesktopPositioner *v16; // rcx
  __int64 v17; // rdi
  int (__fastcall *v18)(__int64, _QWORD, struct IApplicationView **); // rbx
  int (__fastcall *v19)(struct IApplicationView *, __int64 *); // rbx
  struct IApplicationView *v20; // rbx
  int (__fastcall *v21)(struct IApplicationView *, GUID *, __int64 *); // rdi
  __int64 *v22; // rax
  int v23; // eax
  CDesktopPositioner *v24; // rcx
  int v25; // eax
  int v26; // eax
  struct IApplicationView *v27; // [rsp+20h] [rbp-79h] BYREF
  struct IApplicationView *v28; // [rsp+28h] [rbp-71h] BYREF
  __int64 v29; // [rsp+30h] [rbp-69h] BYREF
  int v30; // [rsp+38h] [rbp-61h] BYREF
  int v31; // [rsp+3Ch] [rbp-5Dh] BYREF
  struct IApplicationViewPosition **v32; // [rsp+40h] [rbp-59h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v33; // [rsp+48h] [rbp-51h] BYREF
  int v34; // [rsp+54h] [rbp-45h]
  unsigned int v35[2]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v36; // [rsp+60h] [rbp-39h]
  __int64 v37; // [rsp+68h] [rbp-31h]
  __int16 v38; // [rsp+70h] [rbp-29h]
  __int64 v39; // [rsp+78h] [rbp-21h] BYREF
  __int64 v40; // [rsp+80h] [rbp-19h]
  __int64 v41; // [rsp+88h] [rbp-11h]
  RECT rc; // [rsp+90h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v27 = a2;
  v32 = a4;
  *a4 = 0LL;
  v6 = _lambda_3de5d145e6ce0c9b4d563a35329ea675_::_lambda_3de5d145e6ce0c9b4d563a35329ea675_(&v39, &v27, this, &v32);
  *(_QWORD *)v35 = retaddr;
  v36 = (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp";
  v37 = 0LL;
  v38 = 1424;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PeopleBar>::ReportUsage(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetImpl'::`2'::impl,
    1u,
    v7,
    v8);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)&v33, v9);
  if ( IsPeoplePane(**(__int64 ***)v6)
    && (LaunchPosition = CDesktopPositioner::_GetLaunchPosition(
                           *(CDesktopPositioner **)(v6 + 8),
                           **(struct IApplicationView ***)v6,
                           **(struct IApplicationViewPosition ****)(v6 + 16)),
        v12 = LaunchPosition,
        LaunchPosition < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x594,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)LaunchPosition);
    wil::details::ReportFeatureError(
      (wil::details *)v12,
      (int)&v33,
      (struct wil::ThreadErrorContext *)0x60F183,
      (unsigned int)v35,
      (const struct DiagnosticsInfo *)v27);
  }
  else
  {
    v12 = 0;
  }
  if ( v33 )
    *((_DWORD *)v33 + 4) = v34;
  if ( (v12 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x599,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v12);
    return v12;
  }
  if ( !*v32 )
  {
    if ( !ApplicationViewHelpers::CanMaximizeView(v27, v10) )
      return 2147943568LL;
    rc = 0LL;
    v28 = 0LL;
    *(_QWORD *)v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
    v14 = *(__int64 (__fastcall **)(struct IApplicationView *, unsigned int *))(*(_QWORD *)v27 + 488LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v35);
    v36 = -1LL;
    v37 = -1LL;
    v15 = v14(v27, v35);
    v12 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5AE,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v15);
LABEL_39:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v35);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
      return v12;
    }
    if ( *(_QWORD *)v35 )
      goto LABEL_36;
    if ( a3 )
    {
      if ( *(_QWORD *)a3 )
      {
        v17 = *((_QWORD *)this + 37);
        v18 = *(int (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v17 + 48LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
        if ( v18(v17, *(_QWORD *)a3, &v28) >= 0 )
        {
          v30 = 0;
          v39 = 0LL;
          v40 = 0LL;
          v41 = 0LL;
          v19 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)v27 + 136LL);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v39);
          v40 = -1LL;
          v41 = -1LL;
          if ( v19(v27, &v39) >= 0 )
            (*(void (__fastcall **)(struct IApplicationView *, __int64, int *))(*(_QWORD *)v28 + 152LL))(v28, v39, &v30);
          v31 = 0;
          v29 = 0LL;
          if ( v30 )
          {
            v20 = v28;
            v21 = *(int (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)v28 + 104LL);
            v22 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v29);
            if ( v21(v20, &GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, v22) >= 0
              && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 32LL))(v29, &v31) >= 0 )
            {
              if ( v31 == 2 )
              {
                v23 = (*(__int64 (__fastcall **)(__int64, RECT *))(*(_QWORD *)v29 + 24LL))(v29, &rc);
                if ( v23 < 0 )
                  wil::details::in1diag3::_Log_Hr(
                    retaddr,
                    (void *)0x5CD,
                    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                    (const char *)(unsigned int)v23);
              }
              else
              {
                v33 = 0LL;
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
                if ( (int)CDesktopPositioner::_GetFullPositionSnapshot(v24, v28, &v33) >= 0 )
                {
                  v25 = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, RECT *))(*(_QWORD *)v33 + 56LL))(
                          v33,
                          &rc);
                  if ( v25 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x5D8,
                      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                      (const char *)(unsigned int)v25);
                }
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
              }
            }
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v39);
        }
      }
    }
    if ( *(_QWORD *)v35
      || CDesktopPositioner::_UsePreferredSizeForStandaloneWindows(v16, v27)
      || IsRectEmpty(&rc)
      || CDesktopPositioner::_GetOffsetPosition(this, &rc, v32) < 0 )
    {
LABEL_36:
      v29 = 0LL;
      if ( (int)CDesktopPositioner::_GetPreferredPosition(this, v27, &rc, v32) < 0 )
      {
        v26 = CDesktopPositioner::_GetLaunchPosition(this, v27, v32);
        v12 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5EB,
            (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v26);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
          goto LABEL_39;
        }
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v35);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
  }
  return 0LL;
}
