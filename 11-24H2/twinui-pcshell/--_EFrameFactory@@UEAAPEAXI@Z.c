/*
 * XREFs of ??_EFrameFactory@@UEAAPEAXI@Z @ 0x1802E4150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1FrameFactory@@UEAA@XZ @ 0x1802E37F0 (--1FrameFactory@@UEAA@XZ.c)
 */

FrameFactory *__fastcall FrameFactory::`vector deleting destructor'(FrameFactory *this, char a2)
{
  FrameFactory::~FrameFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
