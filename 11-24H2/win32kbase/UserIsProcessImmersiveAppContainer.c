/*
 * XREFs of UserIsProcessImmersiveAppContainer @ 0x1400BF0C0
 * Callers:
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x140014D00 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_W32PROCESS@@@Z @ 0x1400BF050 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserIsProcessImmersiveAppContainer(__int64 a1)
{
  __int64 ProcessWin32Process; // rax
  unsigned int v2; // ecx
  __int64 v4; // rdx

  ProcessWin32Process = PsGetProcessWin32Process(a1);
  v2 = 0;
  if ( !ProcessWin32Process || !*(_QWORD *)ProcessWin32Process )
    return 0LL;
  if ( *(_DWORD *)(ProcessWin32Process + 876) )
  {
    v4 = *(_QWORD *)(ProcessWin32Process + 816);
    if ( (v4 & 0x30) == 0x10 )
      return (v4 & 0x200) == 0;
  }
  return v2;
}
