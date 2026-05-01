/*
 * XREFs of ??_EXamlAltTabViewHost@@UEAAPEAXI@Z @ 0x180119AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XamlAltTabViewHost@@UEAA@XZ @ 0x180119AFC (--1XamlAltTabViewHost@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

XamlAltTabViewHost *__fastcall XamlAltTabViewHost::`vector deleting destructor'(XamlAltTabViewHost *this, char a2)
{
  XamlAltTabViewHost::~XamlAltTabViewHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x228);
  return this;
}
