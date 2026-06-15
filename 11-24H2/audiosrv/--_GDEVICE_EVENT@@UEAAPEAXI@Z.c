/*
 * XREFs of ??_GDEVICE_EVENT@@UEAAPEAXI@Z @ 0x1800636A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DEVICE_EVENT@@UEAA@XZ @ 0x1800636DC (--1DEVICE_EVENT@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

DEVICE_EVENT *__fastcall DEVICE_EVENT::`scalar deleting destructor'(DEVICE_EVENT *this, char a2)
{
  DEVICE_EVENT::~DEVICE_EVENT(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
