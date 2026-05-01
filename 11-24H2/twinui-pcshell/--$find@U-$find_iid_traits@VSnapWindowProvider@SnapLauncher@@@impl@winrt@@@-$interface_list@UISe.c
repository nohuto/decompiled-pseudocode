/*
 * XREFs of ??$find@U?$find_iid_traits@VSnapWindowProvider@SnapLauncher@@@impl@winrt@@@?$interface_list@UIServiceProvider@@UIUpdateViewValueSet@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VSnapWindowProvider@SnapLauncher@@@12@@Z @ 0x1805C1B20
 * Callers:
 *     ?find_interface@?$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1805C2090 (-find_interface@-$implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvid.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<IServiceProvider,IUpdateViewValueSet>::find<winrt::impl::find_iid_traits<SnapLauncher::SnapWindowProvider>>(
        __int64 *a1)
{
  _QWORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<IServiceProvider> && v1[1] == 0xFA096000AA003480uLL )
  {
    v2 = *a1;
    v3 = *a1 + 8;
    return v3 & -(__int64)(v2 != 0);
  }
  if ( *v1 == winrt::impl::guid_v<IUpdateViewValueSet> && v1[1] == 0x36081BD12BA27DBBLL )
  {
    v2 = *a1;
    v3 = *a1 + 16;
    return v3 & -(__int64)(v2 != 0);
  }
  return 0LL;
}
