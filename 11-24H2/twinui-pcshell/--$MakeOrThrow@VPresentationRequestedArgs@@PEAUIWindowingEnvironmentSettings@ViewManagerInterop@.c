/*
 * XREFs of ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@@Z @ 0x1802E23C4
 * Callers:
 *     ?_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801FA2B8 (-_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentS.c)
 *     ?_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPresentationRequestedArgs@@@Z @ 0x1802A666C (-_CreatePresentationRequestedArgs@CApplicationManager@@AEAAJPEAUIViewEventArgs@ViewManagerIntero.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Attach@?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@QEAAXPEAVPresentationRequestedArgs@@@Z @ 0x1802E46BC (-Attach@-$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@QEAAXPEAVPresentationRequestedArgs@.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802ED88C (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0PresentationRequestedArgs@@QEAA@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1802EE1F4 (--0PresentationRequestedArgs@@QEAA@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@In.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::MakeOrThrow<PresentationRequestedArgs,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *,IApplicationView *>(
        _QWORD *a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **a2,
        struct IApplicationView **a3)
{
  void *v6; // rax
  PresentationRequestedArgs *v7; // rax
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  if ( v6 )
  {
    v7 = PresentationRequestedArgs::PresentationRequestedArgs((PresentationRequestedArgs *)v6, *a2, *a3);
    Microsoft::WRL::ComPtr<PresentationRequestedArgs>::Attach(a1, v7);
    v11 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x3F,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v8);
  return a1;
}
