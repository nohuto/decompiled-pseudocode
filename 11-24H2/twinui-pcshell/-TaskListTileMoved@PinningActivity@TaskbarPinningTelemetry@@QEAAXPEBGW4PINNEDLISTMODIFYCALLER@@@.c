/*
 * XREFs of ?TaskListTileMoved@PinningActivity@TaskbarPinningTelemetry@@QEAAXPEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806967DC
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180691760 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800123B8 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Provider@TaskbarLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180166F28 (-Provider@TaskbarLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18017F364 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x1805E4D78 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     ?CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z @ 0x18068C50C (-CensorUnescapedUrl@AppIdCensorUtility@LoggingUtil@@SAXPEBG0PEAPEAG@Z.c)
 *     ?GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z @ 0x180690498 (-GetSecondaryTileLaunchArguments@TaskbarTelemetryHelper@@YAJPEBGPEAPEAG11@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TaskbarPinningTelemetry::PinningActivity::TaskListTileMoved(__int64 a1, unsigned __int16 *a2)
{
  void **v4; // rax
  const unsigned __int16 *v5; // rcx
  __int64 v6; // rcx
  void **v7; // rax
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r9
  unsigned __int16 *v10; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int16 *v11; // [rsp+50h] [rbp-29h] BYREF
  void *v12; // [rsp+58h] [rbp-21h] BYREF
  void *v13; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int16 *v14[2]; // [rsp+68h] [rbp-11h] BYREF
  __int64 v15; // [rsp+78h] [rbp-1h]
  unsigned __int16 *v16[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v17; // [rsp+90h] [rbp+17h]
  unsigned __int16 *v18[2]; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v19; // [rsp+A8h] [rbp+2Fh]

  v19 = 0LL;
  v18[0] = 0LL;
  v18[1] = 0LL;
  v17 = 0LL;
  v16[0] = 0LL;
  v16[1] = 0LL;
  v15 = 0LL;
  v14[0] = 0LL;
  v14[1] = 0LL;
  v13 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v14);
  v14[1] = (unsigned __int16 *)-1LL;
  v15 = -1LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v16);
  v16[1] = (unsigned __int16 *)-1LL;
  v17 = -1LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v18);
  v18[1] = (unsigned __int16 *)-1LL;
  v19 = -1LL;
  if ( (int)TaskbarTelemetryHelper::GetSecondaryTileLaunchArguments(a2, (unsigned __int16 *)v18, v16, v14) < 0 )
  {
    v7 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v13);
    LoggingUtil::AppIdCensorUtility::CensorAppIdBuffer(a2, (unsigned __int16 **)v7);
  }
  else
  {
    v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&v13);
    LoggingUtil::AppIdCensorUtility::CensorUnescapedUrl(v5, v18[0], (unsigned __int16 **)v4);
  }
  v8 = TaskbarLogging::Provider(v6);
  if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 0x200000000000LL) )
  {
    v10 = v14[0];
    v11 = v16[0];
    v12 = v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v9,
      (__int64)&unk_18082094F,
      *(_QWORD *)(a1 + 272) + 8LL,
      v9,
      &v12,
      &v11,
      &v10);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v13);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v14);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v16);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v18);
}
