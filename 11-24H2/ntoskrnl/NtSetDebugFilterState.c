/*
 * XREFs of NtSetDebugFilterState @ 0x14082B360
 * Callers:
 *     DbgSetDebugFilterState @ 0x1405E4CD0 (DbgSetDebugFilterState.c)
 *     VfInitBootDriversLoaded @ 0x140C3D398 (VfInitBootDriversLoaded.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __cdecl NtSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  __int64 v5; // rdi
  KPROCESSOR_MODE PreviousMode; // dl
  int *v8; // rdx

  v5 = ComponentId;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return -1073741790;
  v8 = &Kd_WIN2000_Mask;
  if ( (unsigned int)v5 >= 0x9C )
  {
    if ( (_DWORD)v5 != -1 )
      v8 = (int *)&Kd_DEFAULT_Mask;
  }
  else
  {
    _mm_lfence();
    v8 = (int *)*(&KdComponentTable + v5);
  }
  if ( Level <= 0x1F )
    Level = 1 << Level;
  *v8 = (State != 0 ? Level : 0) | *v8 & ~Level;
  return 0;
}
