/*
 * XREFs of ??_GCursorProcessor@@UEAAPEAXI@Z @ 0x180147890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CursorProcessor@@UEAA@XZ @ 0x180147818 (--1CursorProcessor@@UEAA@XZ.c)
 */

CursorProcessor *__fastcall CursorProcessor::`scalar deleting destructor'(CursorProcessor *this, char a2)
{
  CursorProcessor::~CursorProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
