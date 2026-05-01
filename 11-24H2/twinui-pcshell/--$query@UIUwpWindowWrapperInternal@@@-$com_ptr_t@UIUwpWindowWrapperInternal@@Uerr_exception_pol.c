/*
 * XREFs of ??$query@UIUwpWindowWrapperInternal@@@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV01@XZ @ 0x1800485A0
 * Callers:
 *     ?UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180047CE0 (-UwpWindowUniversalPropertyChanged@UwpWindowEventDispatcher@@UEAAJPEAUIUniversalPropertyChangedE.c)
 *     ?AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18041C400 (-AppViewUniversalPropertyChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewUniversalPropertyChange.c)
 *     ?DismissVirtualDesktopSwitcherHost@VirtualDesktopSwitcherController@@AE$AAAXXZ @ 0x1806BE61C (-DismissVirtualDesktopSwitcherHost@VirtualDesktopSwitcherController@@AE$AAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::query<IUwpWindowWrapperInternal>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a2 = v2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
