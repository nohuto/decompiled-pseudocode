/*
 * XREFs of IsForegroundLocked @ 0x1401886A0
 * Callers:
 *     xxxActiveWindowTracking @ 0x140187404 (xxxActiveWindowTracking.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x14018817C (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x140231B18 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x140275A1C (_anonymous_namespace_--FAllowForegroundActivate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsForegroundLocked(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v4 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 18904) || *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18896) )
    return 1;
  return v4;
}
