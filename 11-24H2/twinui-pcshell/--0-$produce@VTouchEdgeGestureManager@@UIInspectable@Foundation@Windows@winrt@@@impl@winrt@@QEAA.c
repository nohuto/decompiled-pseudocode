/*
 * XREFs of ??0?$produce@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x18029FAC0
 * Callers:
 *     ??0?$producer@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18029FAA8 (--0-$producer@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QE.c)
 * Callees:
 *     ??0?$produce_base@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18029FAE4 (--0-$produce_base@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt.c)
 */

_QWORD *winrt::impl::produce<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable>::produce<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,void>::produce_base<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,void>();
  result = v0;
  *v0 = &winrt::impl::produce_base<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,void>::`vftable';
  return result;
}
