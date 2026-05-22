/*
 * XREFs of ??_EHotkeyClientRegistration@@UEAAPEAXI@Z @ 0x1801C3240
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HotkeyClientRegistration@@UEAA@XZ @ 0x1801C2C08 (--1HotkeyClientRegistration@@UEAA@XZ.c)
 */

HotkeyClientRegistration *__fastcall HotkeyClientRegistration::`vector deleting destructor'(
        HotkeyClientRegistration *this,
        char a2)
{
  HotkeyClientRegistration::~HotkeyClientRegistration(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
