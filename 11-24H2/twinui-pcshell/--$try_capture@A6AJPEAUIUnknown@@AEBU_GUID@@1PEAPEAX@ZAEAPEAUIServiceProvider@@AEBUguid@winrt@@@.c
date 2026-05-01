/*
 * XREFs of ??$try_capture@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBUguid@winrt@@@?$com_ptr@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@winrt@@QEAA_NA6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZAEAPEAUIServiceProvider@@AEBUguid@1@@Z @ 0x18058C6CC
 * Callers:
 *     ?Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z @ 0x1800D06A4 (-Initialize@TouchEdgeGestureManager@@QEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall winrt::com_ptr<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>::try_capture<long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider * &,winrt::guid const &>(
        __int64 *a1,
        int (__fastcall *a2)(_QWORD, __int64, void *, __int64 *),
        _QWORD *a3,
        __int64 a4)
{
  if ( *a1 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(a1);
  return a2(*a3, a4, &winrt::impl::guid_v<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>, a1) >= 0;
}
