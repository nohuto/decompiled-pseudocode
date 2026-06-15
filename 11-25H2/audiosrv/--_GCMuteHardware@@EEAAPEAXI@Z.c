/*
 * XREFs of ??_GCMuteHardware@@EEAAPEAXI@Z @ 0x1800FDE10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMuteHardware@@EEAA@XZ @ 0x1800FDD3C (--1CMuteHardware@@EEAA@XZ.c)
 */

CMuteHardware *__fastcall CMuteHardware::`scalar deleting destructor'(CMuteHardware *this, char a2)
{
  CMuteHardware::~CMuteHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
