/*
 * XREFs of ??$copy_to@UIVirtualDesktop@@@?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIVirtualDesktop@@@Z @ 0x18013A9AC
 * Callers:
 *     ?GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIObjectArray@@1@Z @ 0x18013A320 (-GetDesktopSwitchIncludeExcludeViews@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@PEAPEAUIO.c)
 *     ?GetLastActiveDesktop@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180553D40 (-GetLastActiveDesktop@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::copy_to<IVirtualDesktop>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return 0LL;
}
