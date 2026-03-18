/*
 * XREFs of UserGlobalAtomTableCallout @ 0x140166C60
 * Callers:
 *     RealInternalRemoveProp @ 0x1400416F0 (RealInternalRemoveProp.c)
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 *     DeleteStringPropertyAtoms @ 0x140168CA0 (DeleteStringPropertyAtoms.c)
 * Callees:
 *     IsProcessWin32kLockedOut @ 0x140158EE0 (IsProcessWin32kLockedOut.c)
 *     ApiSetIsCurrentProcessWinstaLocked @ 0x140193CC0 (ApiSetIsCurrentProcessWinstaLocked.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserGlobalAtomTableCallout_Old@@YAPEAXXZ @ 0x1401B2370 (-UserGlobalAtomTableCallout_Old@@YAPEAXXZ.c)
 *     GetCurrentProcessAtomTable @ 0x1401B2D78 (GetCurrentProcessAtomTable.c)
 *     IsModerncoreAtomTableSupported @ 0x14023B4A8 (IsModerncoreAtomTableSupported.c)
 *     ModerncoreAtomTable @ 0x14023B614 (ModerncoreAtomTable.c)
 */

void *UserGlobalAtomTableCallout()
{
  __int64 v1; // rcx
  _QWORD *CurrentProcessWin32Process; // rax

  if ( !(unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
    return UserGlobalAtomTableCallout_Old();
  if ( (int)IsModerncoreAtomTableSupported() < 0 )
    return (void *)GetCurrentProcessAtomTable(0LL);
  if ( IsProcessWin32kLockedOut((void *)0xFFFFFFFFFFFFFFFFLL) )
    return 0LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v1);
  if ( CurrentProcessWin32Process )
  {
    if ( *CurrentProcessWin32Process && (unsigned int)ApiSetIsCurrentProcessWinstaLocked() )
      return 0LL;
  }
  return (void *)ModerncoreAtomTable();
}
