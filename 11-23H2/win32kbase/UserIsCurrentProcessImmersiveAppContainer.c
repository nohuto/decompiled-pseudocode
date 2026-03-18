/*
 * XREFs of UserIsCurrentProcessImmersiveAppContainer @ 0x1C008F800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall UserIsCurrentProcessImmersiveAppContainer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  _BOOL8 result; // rax
  int v6; // ecx

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  result = 0;
  if ( ProcessWin32Process )
  {
    if ( *(_QWORD *)ProcessWin32Process )
    {
      if ( *(_DWORD *)(ProcessWin32Process + 900) )
      {
        v6 = *(_DWORD *)(ProcessWin32Process + 824);
        if ( (v6 & 0x30) == 0x10 && (v6 & 0x200) == 0 )
          return 1;
      }
    }
  }
  return result;
}
