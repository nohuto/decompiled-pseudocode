/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180085718
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180063D2C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800646B4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z @ 0x1800853C0 (-SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z.c)
 *     ?GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800854F0 (-GetApplicationViewTitle@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x180085670 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?GetGameEntryAttribs@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N11111PEAGPEAK@Z @ 0x180106EE4 (-GetGameEntryAttribs@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N11111PEAGPEAK@Z.c)
 *     ?IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z @ 0x18018FC4C (-IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z.c)
 *     ?CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z @ 0x1802BE358 (-CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x1802DCACC (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x1802DFD44 (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 *     ?EnsureTraceFileOpen@GameDVR_OutputDebug@@SAX_N@Z @ 0x18031A208 (-EnsureTraceFileOpen@GameDVR_OutputDebug@@SAX_N@Z.c)
 *     ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x180390738 (-GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?InstallWebSearchPackage@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0V?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@@Z @ 0x1803BC17C (-InstallWebSearchPackage@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@0V.c)
 *     ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x180576C10 (-PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$unique_any_t@V-$unique_.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1805F886C (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x1802D2638 (_vsnwprintf.c)
 */

__int64 StringCchPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147024774;
    }
    else if ( v6 != v4 )
    {
      return v5;
    }
    a1[v4] = 0;
    return v5;
  }
  v5 = -2147024809;
  if ( a2 )
    *a1 = 0;
  return v5;
}
