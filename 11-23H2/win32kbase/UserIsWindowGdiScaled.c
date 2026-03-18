/*
 * XREFs of UserIsWindowGdiScaled @ 0x1C009B0E0
 * Callers:
 *     DxgkEngGetWindowGdiDpiScalingFactor @ 0x1C00E06B0 (DxgkEngGetWindowGdiDpiScalingFactor.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C0045FD0 (ValidateHwndEx.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UserIsWindowGdiScaled(__int64 a1, _WORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *ThreadWin32Thread; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // edx
  __int64 result; // rax

  if ( !IS_USERCRIT_OWNED_AT_ALL(a1, (__int64)a2, a3, a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 502LL);
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread )
    return 0LL;
  if ( !*ThreadWin32Thread )
    return 0LL;
  v7 = ValidateHwndEx(a1, 1, 0);
  if ( !v7 )
    return 0LL;
  v8 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !v8 )
    return 0LL;
  if ( !*v8 )
    return 0LL;
  if ( !*((_QWORD *)PtiCurrentShared() + 57) )
    return 0LL;
  if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) == 0 )
    return 0LL;
  v9 = *(_QWORD *)(v7 + 40);
  v10 = *(_DWORD *)(v9 + 288);
  if ( (v10 & 0xF) != 0 || (v10 & 0x40000000) == 0 )
    return 0LL;
  result = 1LL;
  *a2 = *(_WORD *)(v9 + 284);
  return result;
}
