/*
 * XREFs of ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x1C009DE54
 * Callers:
 *     xxxDesktopThread @ 0x1C002ABF0 (xxxDesktopThread.c)
 *     RawInputThread @ 0x1C00D6580 (RawInputThread.c)
 * Callees:
 *     ??1LegacyInputDispatcher@@QEAA@XZ @ 0x1C009DE88 (--1LegacyInputDispatcher@@QEAA@XZ.c)
 */

LegacyInputDispatcher *__fastcall LegacyInputDispatcher::`scalar deleting destructor'(LegacyInputDispatcher *this)
{
  LegacyInputDispatcher::~LegacyInputDispatcher(this);
  if ( this )
    Win32FreePool(this);
  return this;
}
