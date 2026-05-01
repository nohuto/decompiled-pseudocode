/*
 * XREFs of ??_EPenWorkspaceScreenCaptureBroker@@UEAAPEAXI@Z @ 0x1803F02C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PenWorkspaceScreenCaptureBroker@@UEAA@XZ @ 0x1803F0228 (--1PenWorkspaceScreenCaptureBroker@@UEAA@XZ.c)
 */

PenWorkspaceScreenCaptureBroker *__fastcall PenWorkspaceScreenCaptureBroker::`vector deleting destructor'(
        PenWorkspaceScreenCaptureBroker *this,
        char a2)
{
  PenWorkspaceScreenCaptureBroker::~PenWorkspaceScreenCaptureBroker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
