/*
 * XREFs of ??_GCursorSuppressionProcessor@@UEAAPEAXI@Z @ 0x180147270
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CursorSuppressionProcessor@@UEAA@XZ @ 0x1801471BC (--1CursorSuppressionProcessor@@UEAA@XZ.c)
 */

CursorSuppressionProcessor *__fastcall CursorSuppressionProcessor::`scalar deleting destructor'(
        CursorSuppressionProcessor *this,
        char a2)
{
  CursorSuppressionProcessor::~CursorSuppressionProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
