/*
 * XREFs of ??_G?$heap_implements@VTouchGestureComponent@@@impl@winrt@@UEAAPEAXI@Z @ 0x18058AEBC
 * Callers:
 *     ??_ETouchGestureComponent@@WDA@EAAPEAXI@Z @ 0x18058AE60 (--_ETouchGestureComponent@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TouchGestureComponent@@UEAA@XZ @ 0x18058AD80 (--1TouchGestureComponent@@UEAA@XZ.c)
 */

TouchGestureComponent *__fastcall winrt::impl::heap_implements<TouchGestureComponent>::`scalar deleting destructor'(
        TouchGestureComponent *a1,
        char a2)
{
  TouchGestureComponent::~TouchGestureComponent(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1A0);
  return a1;
}
