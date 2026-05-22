/*
 * XREFs of ??_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z @ 0x1800809A8
 * Callers:
 *     ?ShellButtonListEntryDeletionCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x18009C4A0 (-ShellButtonListEntryDeletionCallback@GameControllerRawInputProvider@@CAJPEAX@Z.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800CB198 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 * Callees:
 *     ??1CompositionVisual@SystemCursors@@QEAA@XZ @ 0x18009BAA8 (--1CompositionVisual@SystemCursors@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

GameControllerRawInputProvider::ShellButtonListEntry *__fastcall GameControllerRawInputProvider::ShellButtonListEntry::`scalar deleting destructor'(
        GameControllerRawInputProvider::ShellButtonListEntry *this)
{
  SystemCursors::CompositionVisual::~CompositionVisual(this);
  operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
