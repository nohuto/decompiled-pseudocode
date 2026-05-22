/*
 * XREFs of ??_EMagnifierProcessor@@UEAAPEAXI@Z @ 0x1801AD4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MagnifierProcessor@@UEAA@XZ @ 0x1801AD32C (--1MagnifierProcessor@@UEAA@XZ.c)
 */

MagnifierProcessor *__fastcall MagnifierProcessor::`vector deleting destructor'(MagnifierProcessor *this, char a2)
{
  MagnifierProcessor::~MagnifierProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
