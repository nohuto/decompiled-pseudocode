/*
 * XREFs of IsDpiValidPlateau @ 0x1402F19FC
 * Callers:
 *     NtUserTransformRect @ 0x140165DA0 (NtUserTransformRect.c)
 *     IsValidKernelDpiAwarenessContext @ 0x140180A0C (IsValidKernelDpiAwarenessContext.c)
 *     NtUserEnsureDpiMetricsForDpi @ 0x1402947F0 (NtUserEnsureDpiMetricsForDpi.c)
 *     NtUserEnsureDpiServerInfoForDpi @ 0x140294870 (NtUserEnsureDpiServerInfoForDpi.c)
 *     NtUserForceWindowToDpiForTest @ 0x1402954F0 (NtUserForceWindowToDpiForTest.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDpiValidPlateau(__int64 a1, __int64 a2)
{
  if ( (unsigned int)a1 >= 0x60 && (a2 = (unsigned int)a1 / 0x18, (_DWORD)a1 == 24 * (_DWORD)a2) )
    return (unsigned int)(a1 - 72) < 0x1B0;
  else
    return (_DWORD)a1 == *(unsigned __int16 *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928) + 6998LL);
}
