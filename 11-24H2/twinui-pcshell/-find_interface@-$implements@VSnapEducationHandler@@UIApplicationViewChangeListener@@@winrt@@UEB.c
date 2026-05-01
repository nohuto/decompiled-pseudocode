/*
 * XREFs of ?find_interface@?$implements@VSnapEducationHandler@@UIApplicationViewChangeListener@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1802A0FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@VSnapEducationHandler@@@impl@winrt@@@?$interface_list@UIApplicationViewChangeListener@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VSnapEducationHandler@@@12@@Z @ 0x1802A0FC8 (--$find@U-$find_iid_traits@VSnapEducationHandler@@@impl@winrt@@@-$interface_list@UIApplicationVi.c)
 */

__int64 __fastcall winrt::implements<SnapEducationHandler,IApplicationViewChangeListener>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 8;
  return winrt::impl::interface_list<IApplicationViewChangeListener>::find<winrt::impl::find_iid_traits<SnapEducationHandler>>(v3);
}
