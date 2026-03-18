/*
 * XREFs of ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x140212458
 * Callers:
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 *     xxxDesktopThread @ 0x1402864A0 (xxxDesktopThread.c)
 * Callees:
 *     ??1LegacyInputDispatcher@@QEAA@XZ @ 0x14021248C (--1LegacyInputDispatcher@@QEAA@XZ.c)
 */

LegacyInputDispatcher *__fastcall LegacyInputDispatcher::`scalar deleting destructor'(LegacyInputDispatcher *this)
{
  LegacyInputDispatcher::~LegacyInputDispatcher(this);
  if ( this )
    Win32FreePool(this);
  return this;
}
