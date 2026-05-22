/*
 * XREFs of ??_GPTPProcessor@@UEAAPEAXI@Z @ 0x1801BE2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PTPProcessor@@UEAA@XZ @ 0x1801BE2BC (--1PTPProcessor@@UEAA@XZ.c)
 */

PTPProcessor *__fastcall PTPProcessor::`scalar deleting destructor'(PTPProcessor *this, char a2)
{
  PTPProcessor::~PTPProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
