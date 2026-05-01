/*
 * XREFs of ??_GVirtualDesktop@@UEAAPEAXI@Z @ 0x180498210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1VirtualDesktop@@UEAA@XZ @ 0x1804981B0 (--1VirtualDesktop@@UEAA@XZ.c)
 */

VirtualDesktop *__fastcall VirtualDesktop::`scalar deleting destructor'(VirtualDesktop *this, char a2)
{
  VirtualDesktop::~VirtualDesktop(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x120);
  return this;
}
