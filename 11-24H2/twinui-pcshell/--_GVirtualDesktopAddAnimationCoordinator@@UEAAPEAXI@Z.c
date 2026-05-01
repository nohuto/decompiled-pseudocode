/*
 * XREFs of ??_GVirtualDesktopAddAnimationCoordinator@@UEAAPEAXI@Z @ 0x1804E2A60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ItemAnimationCoordinatorBase@@QEAA@XZ @ 0x1804D8B88 (--1ItemAnimationCoordinatorBase@@QEAA@XZ.c)
 */

VirtualDesktopAddAnimationCoordinator *__fastcall VirtualDesktopAddAnimationCoordinator::`scalar deleting destructor'(
        VirtualDesktopAddAnimationCoordinator *this,
        char a2)
{
  *((_DWORD *)this + 61) = -1073741823;
  ItemAnimationCoordinatorBase::~ItemAnimationCoordinatorBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x100);
  return this;
}
