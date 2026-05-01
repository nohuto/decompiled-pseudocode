/*
 * XREFs of ??_E?$heap_implements@VTouchEdgeGestureManager@@@impl@winrt@@UEAAPEAXI@Z @ 0x18058AE80
 * Callers:
 *     ??_E?$heap_implements@VTouchEdgeGestureManager@@@impl@winrt@@WBI@EAAPEAXI@Z @ 0x18058AE50 (--_E-$heap_implements@VTouchEdgeGestureManager@@@impl@winrt@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1TouchEdgeGestureManager@@UEAA@XZ @ 0x1800CFA50 (--1TouchEdgeGestureManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TouchEdgeGestureManager *__fastcall winrt::impl::heap_implements<TouchEdgeGestureManager>::`vector deleting destructor'(
        TouchEdgeGestureManager *a1,
        char a2)
{
  TouchEdgeGestureManager::~TouchEdgeGestureManager(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1B8);
  return a1;
}
