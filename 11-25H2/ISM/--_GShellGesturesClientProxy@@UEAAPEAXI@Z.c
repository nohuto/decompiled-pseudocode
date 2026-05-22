/*
 * XREFs of ??_GShellGesturesClientProxy@@UEAAPEAXI@Z @ 0x180058590
 * Callers:
 *     <none>
 * Callees:
 *     ??1ShellGesturesClientProxy@@UEAA@XZ @ 0x1800585CC (--1ShellGesturesClientProxy@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ShellGesturesClientProxy *__fastcall ShellGesturesClientProxy::`scalar deleting destructor'(
        ShellGesturesClientProxy *this,
        char a2)
{
  ShellGesturesClientProxy::~ShellGesturesClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
