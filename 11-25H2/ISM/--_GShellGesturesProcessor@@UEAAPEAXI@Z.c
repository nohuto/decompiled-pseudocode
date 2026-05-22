/*
 * XREFs of ??_GShellGesturesProcessor@@UEAAPEAXI@Z @ 0x180197450
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ShellGesturesProcessor@@UEAA@XZ @ 0x180197230 (--1ShellGesturesProcessor@@UEAA@XZ.c)
 */

ShellGesturesProcessor *__fastcall ShellGesturesProcessor::`scalar deleting destructor'(
        ShellGesturesProcessor *this,
        char a2)
{
  ShellGesturesProcessor::~ShellGesturesProcessor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xC0);
  return this;
}
