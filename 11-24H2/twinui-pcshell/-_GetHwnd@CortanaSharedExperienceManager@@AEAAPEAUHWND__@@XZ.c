/*
 * XREFs of ?_GetHwnd@CortanaSharedExperienceManager@@AEAAPEAUHWND__@@XZ @ 0x18037EFA4
 * Callers:
 *     ?GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z @ 0x18037B460 (-GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_GetViewWrapper@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18037F248 (-_GetViewWrapper@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerIntero.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaSharedExperienceManager::_GetHwnd(CortanaSharedExperienceManager *this)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v1; // rdx
  __int64 v2; // rbx
  ExperienceManagerUtils *v4; // [rsp+38h] [rbp+10h] BYREF

  CortanaSharedExperienceManager::_GetViewWrapper(this, &v4);
  if ( v4 )
    v2 = ExperienceManagerUtils::WindowFromViewWrapper(v4, v1);
  else
    v2 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v4);
  return v2;
}
