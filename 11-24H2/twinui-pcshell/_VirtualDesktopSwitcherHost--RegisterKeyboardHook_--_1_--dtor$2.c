/*
 * XREFs of _VirtualDesktopSwitcherHost::RegisterKeyboardHook_::_1_::dtor$2 @ 0x180705B09
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall VirtualDesktopSwitcherHost::RegisterKeyboardHook_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 64), (const struct std::nothrow_t *)1);
}
