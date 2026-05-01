/*
 * XREFs of ??_GSwitchItemCloseAnimationCoordinator@@UEAAPEAXI@Z @ 0x1804D8DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ItemAnimationCoordinatorBase@@QEAA@XZ @ 0x1804D8B88 (--1ItemAnimationCoordinatorBase@@QEAA@XZ.c)
 */

SwitchItemCloseAnimationCoordinator *__fastcall SwitchItemCloseAnimationCoordinator::`scalar deleting destructor'(
        SwitchItemCloseAnimationCoordinator *this,
        char a2)
{
  *((_DWORD *)this + 61) = -1073741823;
  ItemAnimationCoordinatorBase::~ItemAnimationCoordinatorBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xF8);
  return this;
}
