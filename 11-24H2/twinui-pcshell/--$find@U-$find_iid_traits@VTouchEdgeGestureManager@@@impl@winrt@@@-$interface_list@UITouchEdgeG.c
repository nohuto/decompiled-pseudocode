/*
 * XREFs of ??$find@U?$find_iid_traits@VTouchEdgeGestureManager@@@impl@winrt@@@?$interface_list@UITouchEdgeGesture@@UIGameFocusEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VTouchEdgeGestureManager@@@12@@Z @ 0x18058AB1C
 * Callers:
 *     ??$find@U?$find_iid_traits@VTouchEdgeGestureManager@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VTouchEdgeGestureManager@@@12@@Z @ 0x18058AAE0 (--$find@U-$find_iid_traits@VTouchEdgeGestureManager@@@impl@winrt@@@-$interface_list@UIInspectabl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<ITouchEdgeGesture,IGameFocusEvents>::find<winrt::impl::find_iid_traits<TouchEdgeGestureManager>>(
        _QWORD *a1)
{
  _QWORD *v1; // rdx

  v1 = (_QWORD *)a1[1];
  if ( *v1 == winrt::impl::guid_v<ITouchEdgeGesture> && v1[1] == 0xF666938BA852EAELL )
    return *a1;
  if ( *v1 == winrt::impl::guid_v<IGameFocusEvents> && v1[1] == 0xF6A78C31A98278BEuLL )
    return (*a1 + 8LL) & -(__int64)(*a1 != 0LL);
  return 0LL;
}
