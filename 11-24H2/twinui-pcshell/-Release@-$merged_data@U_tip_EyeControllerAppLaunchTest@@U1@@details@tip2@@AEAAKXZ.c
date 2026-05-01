/*
 * XREFs of ?Release@?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@AEAAKXZ @ 0x18048FDB4
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18048E32C (--1-$com_ptr_t@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_returncod.c)
 *     ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180490A58 (-_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180491418 (-ensure_data@-$tip_test@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180491794 (-reset@-$com_ptr_t@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@Uerr_retur.c)
 * Callees:
 *     ??1?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@QEAA@XZ @ 0x18048E34C (--1-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 72);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>::~merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
