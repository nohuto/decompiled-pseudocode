/*
 * XREFs of ??_EViewEventArgsForWindowingSettings@@UEAAPEAXI@Z @ 0x180419630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ViewEventArgsForWindowingSettings@@UEAA@XZ @ 0x180418C50 (--1ViewEventArgsForWindowingSettings@@UEAA@XZ.c)
 */

ViewEventArgsForWindowingSettings *__fastcall ViewEventArgsForWindowingSettings::`vector deleting destructor'(
        ViewEventArgsForWindowingSettings *this,
        char a2)
{
  ViewEventArgsForWindowingSettings::~ViewEventArgsForWindowingSettings(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
