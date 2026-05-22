/*
 * XREFs of ??_GCursorProcessor@@UEAAPEAXI@Z @ 0x1801456C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CursorProcessor@@UEAA@XZ @ 0x180145648 (--1CursorProcessor@@UEAA@XZ.c)
 */

CursorProcessor *__fastcall CursorProcessor::`scalar deleting destructor'(CursorProcessor *this, char a2)
{
  CursorProcessor::~CursorProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x80);
  return this;
}
