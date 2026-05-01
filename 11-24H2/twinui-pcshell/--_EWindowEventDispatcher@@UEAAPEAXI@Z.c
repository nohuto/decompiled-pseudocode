/*
 * XREFs of ??_EWindowEventDispatcher@@UEAAPEAXI@Z @ 0x18041966C
 * Callers:
 *     ??_EWindowEventDispatcher@@WIA@EAAPEAXI@Z @ 0x180419310 (--_EWindowEventDispatcher@@WIA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1WindowEventDispatcher@@UEAA@XZ @ 0x180418C8C (--1WindowEventDispatcher@@UEAA@XZ.c)
 */

WindowEventDispatcher *__fastcall WindowEventDispatcher::`vector deleting destructor'(
        WindowEventDispatcher *this,
        char a2)
{
  WindowEventDispatcher::~WindowEventDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x218);
  return this;
}
