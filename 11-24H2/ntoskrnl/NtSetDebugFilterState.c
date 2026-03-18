/*
 * XREFs of NtSetDebugFilterState @ 0x14082AB30
 * Callers:
 *     DbgSetDebugFilterState @ 0x1405E76E0 (DbgSetDebugFilterState.c)
 *     VfInitBootDriversLoaded @ 0x140C3B240 (VfInitBootDriversLoaded.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall NtSetDebugFilterState(unsigned int a1, unsigned int a2, char a3)
{
  __int64 v5; // rdi
  KPROCESSOR_MODE PreviousMode; // dl
  int *v8; // rdx

  v5 = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return 3221225506LL;
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
  if ( a2 <= 0x1F )
    a2 = 1 << a2;
  *v8 = (a3 != 0 ? a2 : 0) | *v8 & ~a2;
  return 0LL;
}
