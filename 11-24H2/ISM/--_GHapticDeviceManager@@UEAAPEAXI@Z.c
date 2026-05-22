/*
 * XREFs of ??_GHapticDeviceManager@@UEAAPEAXI@Z @ 0x180189E80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1HapticDeviceManager@@UEAA@XZ @ 0x180189DB4 (--1HapticDeviceManager@@UEAA@XZ.c)
 */

HapticDeviceManager *__fastcall HapticDeviceManager::`scalar deleting destructor'(HapticDeviceManager *this, char a2)
{
  HapticDeviceManager::~HapticDeviceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
