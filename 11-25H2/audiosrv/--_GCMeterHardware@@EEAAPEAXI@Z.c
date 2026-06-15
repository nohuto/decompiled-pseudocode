/*
 * XREFs of ??_GCMeterHardware@@EEAAPEAXI@Z @ 0x1800FA930
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMeterHardware@@EEAA@XZ @ 0x1800FA8B4 (--1CMeterHardware@@EEAA@XZ.c)
 */

CMeterHardware *__fastcall CMeterHardware::`scalar deleting destructor'(CMeterHardware *this, char a2)
{
  CMeterHardware::~CMeterHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
