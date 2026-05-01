/*
 * XREFs of ??_GEmulatedFullScreenManager@@UEAAPEAXI@Z @ 0x18021696C
 * Callers:
 *     ??_EEmulatedFullScreenManager@@WCI@EAAPEAXI@Z @ 0x18056AA40 (--_EEmulatedFullScreenManager@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1EmulatedFullScreenManager@@UEAA@XZ @ 0x1802C24BC (--1EmulatedFullScreenManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

EmulatedFullScreenManager *__fastcall EmulatedFullScreenManager::`scalar deleting destructor'(
        EmulatedFullScreenManager *this,
        char a2)
{
  EmulatedFullScreenManager::~EmulatedFullScreenManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
