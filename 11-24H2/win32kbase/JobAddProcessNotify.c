/*
 * XREFs of JobAddProcessNotify @ 0x1401AA560
 * Callers:
 *     <none>
 * Callees:
 *     ?AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z @ 0x1401A9AC8 (-AddProcess@Win32JobObject@@YAXPEAU_EPROCESS@@@Z.c)
 *     IsModerncoreAtomTableSupported @ 0x14023B4A8 (IsModerncoreAtomTableSupported.c)
 */

void __fastcall JobAddProcessNotify(Win32JobObject *this)
{
  __int64 ProcessWin32Process; // rax
  struct _EPROCESS *v3; // rdx

  if ( (int)IsModerncoreAtomTableSupported() < 0 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(this);
    if ( ProcessWin32Process )
    {
      if ( *(_QWORD *)ProcessWin32Process )
      {
        if ( *(_BYTE *)(ProcessWin32Process + 1208) == 1 )
          Win32JobObject::AddProcess(this, v3);
      }
    }
  }
}
