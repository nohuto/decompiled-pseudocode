/*
 * XREFs of ??_GPTPProcessor@@UEAAPEAXI@Z @ 0x1801C57D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PTPProcessor@@UEAA@XZ @ 0x1801C5794 (--1PTPProcessor@@UEAA@XZ.c)
 */

PTPProcessor *__fastcall PTPProcessor::`scalar deleting destructor'(PTPProcessor *this, char a2)
{
  PTPProcessor::~PTPProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
