/*
 * XREFs of IsCurrentDesktopComposed @ 0x140094360
 * Callers:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x140093938 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     _anonymous_namespace_::ContactVisualizationWorker @ 0x14018E770 (_anonymous_namespace_--ContactVisualizationWorker.c)
 *     _DwmLockScreenUpdates @ 0x140210F80 (_DwmLockScreenUpdates.c)
 *     SetAppCompatFlags @ 0x1402B1970 (SetAppCompatFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsCurrentDesktopComposed(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19200) )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19200);
    if ( *(_QWORD *)(v6 + 8) )
      return *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19200) + 8LL) + 64LL) & 1;
  }
  return v2;
}
