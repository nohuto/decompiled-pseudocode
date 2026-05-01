/*
 * XREFs of ??_GSnapFlyoutHost@@UEAAPEAXI@Z @ 0x18059D8C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SnapFlyoutHost@@UEAA@XZ @ 0x18059D194 (--1SnapFlyoutHost@@UEAA@XZ.c)
 */

SnapFlyoutHost *__fastcall SnapFlyoutHost::`scalar deleting destructor'(SnapFlyoutHost *this, char a2)
{
  SnapFlyoutHost::~SnapFlyoutHost(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
