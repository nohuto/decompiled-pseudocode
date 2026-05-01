/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::GamingOverlay::GameBarWindowControl_enum_winrt::Windows::Internal::GamingOverlay::GameBarWindowState___lambda_619067457216c3990f36ed941ddd13a8___::Invoke @ 0x180352080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$As@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180340DCC (--$As@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WeakRef@WRL@Microsoft@@Q.c)
 *     ?OnGameBarWindowStateChanged@GamingOverlayExperienceManager@@AEAAXAEBUGameBarWindowControl@GamingOverlay@Internal@Windows@winrt@@AEBW4GameBarWindowState@3456@@Z @ 0x180355578 (-OnGameBarWindowStateChanged@GamingOverlayExperienceManager@@AEAAXAEBUGameBarWindowControl@Gamin.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::GamingOverlay::GameBarWindowControl_enum_winrt::Windows::Internal::GamingOverlay::GameBarWindowState___lambda_619067457216c3990f36ed941ddd13a8___::Invoke(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 v3; // rbx
  const struct winrt::Windows::Internal::GamingOverlay::GameBarWindowControl *v4; // rdx
  __int64 result; // rax
  struct IInspectable *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v3 = a1 + 16;
  v6 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>(
              (Microsoft::WRL::WeakRef *)(a1 + 16),
              &v6) >= 0
    && v6 )
  {
    GamingOverlayExperienceManager::OnGameBarWindowStateChanged(
      *(GamingOverlayExperienceManager **)(v3 + 8),
      v4,
      (const enum winrt::Windows::Internal::GamingOverlay::GameBarWindowState *)&v7);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  result = 0LL;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      LODWORD(v6) = *winrt::to_hresult(&v6);
      result = (unsigned int)v6;
      continue;
    }
    break;
  }
  return result;
}
