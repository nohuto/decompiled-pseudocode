/*
 * XREFs of ??_GThumbnailDeviceFactory@@UEAAPEAXI@Z @ 0x1804920A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CreationThreadDispatcher@@UEAA@XZ @ 0x1801C4640 (--1CreationThreadDispatcher@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ThumbnailDeviceFactory *__fastcall ThumbnailDeviceFactory::`scalar deleting destructor'(
        ThumbnailDeviceFactory *this,
        char a2)
{
  CreationThreadDispatcher::~CreationThreadDispatcher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
