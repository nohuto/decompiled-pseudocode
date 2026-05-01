/*
 * XREFs of ??_EXamlLauncherState@@UEAAPEAXI@Z @ 0x180145430
 * Callers:
 *     <none>
 * Callees:
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x180145470 (--1XamlLauncherState@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

XamlLauncherState *__fastcall XamlLauncherState::`vector deleting destructor'(XamlLauncherState *this, char a2)
{
  XamlLauncherState::~XamlLauncherState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x488);
  return this;
}
