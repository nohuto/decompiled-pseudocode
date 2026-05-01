/*
 * XREFs of ??_EVirtualDesktopManagerSuspensionToken@@UEAAPEAXI@Z @ 0x180552E20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktopManagerSuspensionToken@@UEAA@XZ @ 0x1805527A0 (--1VirtualDesktopManagerSuspensionToken@@UEAA@XZ.c)
 */

VirtualDesktopManagerSuspensionToken *__fastcall VirtualDesktopManagerSuspensionToken::`vector deleting destructor'(
        VirtualDesktopManagerSuspensionToken *this,
        char a2)
{
  VirtualDesktopManagerSuspensionToken::~VirtualDesktopManagerSuspensionToken(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
