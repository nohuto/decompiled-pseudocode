/*
 * XREFs of ?subtract_final_reference@?$root_implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@impl@winrt@@IEAAIXZ @ 0x1801C5B90
 * Callers:
 *     ?Release@?$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@winrt@@UEAAKXZ @ 0x1801C5B40 (-Release@-$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchE.c)
 *     ??1?$root_implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@impl@winrt@@MEAA@XZ @ 0x1802CE414 (--1-$root_implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::root_implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::subtract_final_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // edx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 8);
  do
  {
    if ( v1 < 0 )
      return winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v1));
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v1 - 1, v1);
  }
  while ( v4 != v1 );
  return v3;
}
