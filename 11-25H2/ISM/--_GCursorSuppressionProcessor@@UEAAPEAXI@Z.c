/*
 * XREFs of ??_GCursorSuppressionProcessor@@UEAAPEAXI@Z @ 0x1801450A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CursorSuppressionProcessor@@UEAA@XZ @ 0x180144FEC (--1CursorSuppressionProcessor@@UEAA@XZ.c)
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
