/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140023638
 * Callers:
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x140022C08 (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATION_PARAMS@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140022D10 (-GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATI.c)
 *     ?GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400234C4 (-GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x1400303A0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x140038494 (-Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z.c)
 *     ?GetModuleVersion@@YAXPEBGPEAPEAG@Z @ 0x1400448B4 (-GetModuleVersion@@YAXPEBGPEAPEAG@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1400467E8 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?GetEffectPackRegistryPath@@YAJU_GUID@@_KPEAG@Z @ 0x14004D298 (-GetEffectPackRegistryPath@@YAJU_GUID@@_KPEAG@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x14004DDDC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x14005D448 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z.c)
 *     DoLoadedModulesContainBlockedListAPO @ 0x140072320 (DoLoadedModulesContainBlockedListAPO.c)
 *     ?GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x14007485C (-GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140077648 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     _vsnwprintf @ 0x14005A0FC (_vsnwprintf.c)
 */

__int64 StringCchPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v5 = -2147024809;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147024774;
      goto LABEL_5;
    }
    if ( v6 == v4 )
LABEL_5:
      a1[v4] = 0;
  }
  return v5;
}
