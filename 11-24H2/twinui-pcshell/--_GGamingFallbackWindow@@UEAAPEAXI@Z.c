/*
 * XREFs of ??_GGamingFallbackWindow@@UEAAPEAXI@Z @ 0x1804FA088
 * Callers:
 *     ??_E?$heap_implements@VGamingFallbackWindow@@@impl@winrt@@W7EAAPEAXI@Z @ 0x1804F9F20 (--_E-$heap_implements@VGamingFallbackWindow@@@impl@winrt@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GamingFallbackWindow@@UEAA@XZ @ 0x1804F8E70 (--1GamingFallbackWindow@@UEAA@XZ.c)
 */

GamingFallbackWindow *__fastcall GamingFallbackWindow::`scalar deleting destructor'(
        GamingFallbackWindow *this,
        char a2)
{
  GamingFallbackWindow::~GamingFallbackWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
