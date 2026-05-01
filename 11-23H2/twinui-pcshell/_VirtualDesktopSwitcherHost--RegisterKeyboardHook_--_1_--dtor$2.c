/*
 * XREFs of _VirtualDesktopSwitcherHost::RegisterKeyboardHook_::_1_::dtor$2 @ 0x180775B62
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void __fastcall VirtualDesktopSwitcherHost::RegisterKeyboardHook_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 80));
}
