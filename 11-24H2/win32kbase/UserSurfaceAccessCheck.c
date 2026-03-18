/*
 * XREFs of UserSurfaceAccessCheck @ 0x1400D6330
 * Callers:
 *     UserScreenAccessCheck @ 0x1400D62E0 (UserScreenAccessCheck.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserUnsafeIsProcessDwm @ 0x1400CFCD0 (UserUnsafeIsProcessDwm.c)
 *     ApiSetIsCurrentProcessWinstaLocked @ 0x140193CC0 (ApiSetIsCurrentProcessWinstaLocked.c)
 */

__int64 __fastcall UserSurfaceAccessCheck(__int64 a1)
{
  unsigned int v2; // ebx
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // r8
  __int64 v6; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx

  v2 = 0;
  v3 = PtiCurrent(a1);
  v5 = v3;
  if ( !a1
    || (v6 = *((_QWORD *)v3 + 62)) != 0 && ***(_QWORD ***)(v6 + 8) == a1
    || (_InterlockedCompareExchange((volatile signed __int32 *)v5 + 132, 0, 0) & 8) != 0
    || (unsigned int)UserUnsafeIsProcessDwm(**((_QWORD **)v5 + 58)) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v8 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( (*(_DWORD *)(v8 + 12) & 0x40010) == 0x40010 && !(unsigned int)ApiSetIsCurrentProcessWinstaLocked() )
      return 1;
  }
  return v2;
}
