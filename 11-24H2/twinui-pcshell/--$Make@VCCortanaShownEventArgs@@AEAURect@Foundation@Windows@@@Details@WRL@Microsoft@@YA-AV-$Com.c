/*
 * XREFs of ??$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCCortanaShownEventArgs@@@12@AEAURect@Foundation@Windows@@@Z @ 0x1802C6374
 * Callers:
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1802449F0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1802455B0 (-OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInt.c)
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180246C70 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?OnClientWindowReadyForPresentationChanged@UndockedSearchAppExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1803BD740 (-OnClientWindowReadyForPresentationChanged@UndockedSearchAppExperienceManager@@AEAAJPEAUIClientW.c)
 *     ?OnVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803BDCB0 (-OnVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??0CCortanaShownEventArgs@@QEAA@URect@Foundation@Windows@@_N@Z @ 0x1801D8198 (--0CCortanaShownEventArgs@@QEAA@URect@Foundation@Windows@@_N@Z.c)
 *     ?Attach@?$ComPtr@VCCortanaShownEventArgs@@@WRL@Microsoft@@QEAAXPEAVCCortanaShownEventArgs@@@Z @ 0x180218F90 (-Attach@-$ComPtr@VCCortanaShownEventArgs@@@WRL@Microsoft@@QEAAXPEAVCCortanaShownEventArgs@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<CCortanaShownEventArgs,Windows::Foundation::Rect &>(
        __int64 *a1,
        __int128 *a2)
{
  void *v4; // rax
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v7 = *a2;
    v5 = CCortanaShownEventArgs::CCortanaShownEventArgs((__int64)v4, &v7, 0);
    Microsoft::WRL::ComPtr<CCortanaShownEventArgs>::Attach(a1, v5);
  }
  return a1;
}
