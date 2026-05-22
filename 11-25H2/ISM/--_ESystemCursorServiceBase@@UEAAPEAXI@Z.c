/*
 * XREFs of ??_ESystemCursorServiceBase@@UEAAPEAXI@Z @ 0x1800F7790
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VWindowsCompositionGlobals@SystemCursors@@U?$default_delete@VWindowsCompositionGlobals@SystemCursors@@@std@@@std@@QEAA@XZ @ 0x18009BD74 (--1-$unique_ptr@VWindowsCompositionGlobals@SystemCursors@@U-$default_delete@VWindowsCompositionG.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SystemCursorServiceBase *__fastcall SystemCursorServiceBase::`vector deleting destructor'(
        SystemCursorServiceBase *this,
        char a2)
{
  *(_QWORD *)this = &SystemCursorServiceBase::`vftable';
  std::unique_ptr<SystemCursors::WindowsCompositionGlobals>::~unique_ptr<SystemCursors::WindowsCompositionGlobals>((_QWORD *)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
