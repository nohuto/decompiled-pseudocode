/*
 * XREFs of ?_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D54E0
 * Callers:
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D32E0 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM@@@details@wil@@QEAA_NXZ @ 0x180065734 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViol.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VCapturedWindowSWRVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCapturedWindowSWRVisual@@@Z @ 0x1800CFAF8 (--4-$ComPtr@VCapturedWindowSWRVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCapturedWindowSWRVisual@@@.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800CFFF8 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z @ 0x1800D4564 (-_GetProxyWindowHandle@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D4D6C (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D4E70 (-_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateTabGroupMap(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        struct CapturedWindowSWRVisual *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  char *Element; // rax
  CProjectionBorderManager *v7; // rcx
  CBaseObject **v8; // rsi
  HWND *v9; // rbx
  int ProxyWindowHandle; // edi
  __int64 v11; // rdx
  CProjectionBorderManager *v13; // rcx
  CProjectionBorderManager *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND v16; // [rsp+40h] [rbp+8h] BYREF

  Element = (char *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
                      this + 6,
                      *(_QWORD *)a4);
  v8 = (CBaseObject **)Element;
  if ( !Element )
    return 2147549183LL;
  v9 = (HWND *)(Element + 16);
  if ( Element[32] )
  {
    ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v7, *v9, 0);
    if ( ProxyWindowHandle < 0 )
    {
      v11 = 1181LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)ProxyWindowHandle);
      return (unsigned int)ProxyWindowHandle;
    }
  }
  ProxyWindowHandle = CProjectionBorderManager::_SetScreenCaptureForWindow(v7, *v9, 0);
  if ( ProxyWindowHandle < 0 )
  {
    v11 = 1183LL;
    goto LABEL_5;
  }
  v16 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM>::GetImpl'::`2'::impl) )
  {
    ProxyWindowHandle = CProjectionBorderManager::_GetProxyWindowHandle(v13, *v9, &v16);
    if ( ProxyWindowHandle < 0 )
    {
      v11 = 1189LL;
      goto LABEL_5;
    }
    if ( v16 )
    {
      if ( *((_BYTE *)v8 + 32) )
      {
        ProxyWindowHandle = CProjectionBorderManager::_SetProjectionBorderForWindow(v14, v16, 0);
        if ( ProxyWindowHandle < 0 )
        {
          v11 = 1195LL;
          goto LABEL_5;
        }
      }
      ProxyWindowHandle = CProjectionBorderManager::_SetScreenCaptureForWindow(v14, v16, 0);
      if ( ProxyWindowHandle < 0 )
      {
        v11 = 1197LL;
        goto LABEL_5;
      }
    }
  }
  *v9 = a2;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v8 + 3);
  Microsoft::WRL::ComPtr<CapturedWindowSWRVisual>::operator=(v8 + 3, (volatile signed __int32 *)a3);
  return 0LL;
}
