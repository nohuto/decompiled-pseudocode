/*
 * XREFs of JobTerminateNotify @ 0x1401AA5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Terminated@Win32JobObject@@YAXK@Z @ 0x1401AA430 (-Terminated@Win32JobObject@@YAXK@Z.c)
 *     IsModerncoreAtomTableSupported @ 0x14023B4A8 (IsModerncoreAtomTableSupported.c)
 */

void __fastcall JobTerminateNotify(Win32JobObject *this)
{
  unsigned int v1; // ebx

  v1 = (unsigned int)this;
  if ( (int)IsModerncoreAtomTableSupported() < 0 )
    Win32JobObject::Terminated((Win32JobObject *)v1);
}
