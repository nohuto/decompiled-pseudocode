/*
 * XREFs of ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x18051A8BC
 * Callers:
 *     ?GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z @ 0x18051A834 (-GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180016930 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x1800B75E8 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1800B88BC (-GetTelemetryIdForView@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeTraceLogging::GetAppLayoutItemName(struct IAppLayoutItem *a1, unsigned __int16 **a2)
{
  __int64 (__fastcall *v4)(struct IAppLayoutItem *, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int TelemetryIdForView; // eax
  unsigned __int16 **v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  ApplicationViewTraceLoggingHelpers *v15; // [rsp+50h] [rbp+10h] BYREF

  if ( (*(unsigned int (__fastcall **)(struct IAppLayoutItem *))(*(_QWORD *)a1 + 24LL))(a1) != 1 )
  {
    memset(v13, 0, 24);
    v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
            (__int64)v13,
            (__int64)L"Buffer",
            0xFFFFFFFFFFFFFFFFuLL);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(v13, a2);
      v8 = v11;
      if ( v11 >= 0 )
      {
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v13);
        return 0LL;
      }
      v12 = 514LL;
    }
    else
    {
      v12 = 513LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)v11);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v13);
    return v8;
  }
  v15 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct IAppLayoutItem *, GUID *, __int64 *))(*(_QWORD *)a1 + 48LL);
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v15);
  TelemetryIdForView = v4(a1, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v5);
  v8 = TelemetryIdForView;
  if ( TelemetryIdForView < 0 )
  {
    v9 = 505LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)TelemetryIdForView);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    return v8;
  }
  TelemetryIdForView = ApplicationViewTraceLoggingHelpers::GetTelemetryIdForView(v15, (struct IApplicationView *)a2, v7);
  v8 = TelemetryIdForView;
  if ( TelemetryIdForView < 0 )
  {
    v9 = 506LL;
    goto LABEL_6;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  return 0LL;
}
