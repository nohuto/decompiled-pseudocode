/*
 * XREFs of ??_EVirtualDesktopRegistryHelpers@@UEAAPEAXI@Z @ 0x18054EB50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopRegistryHelpers@@UEAA@XZ @ 0x18054EB20 (--1VirtualDesktopRegistryHelpers@@UEAA@XZ.c)
 */

HKEY *__fastcall VirtualDesktopRegistryHelpers::`vector deleting destructor'(HKEY *this, char a2)
{
  VirtualDesktopRegistryHelpers::~VirtualDesktopRegistryHelpers(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
