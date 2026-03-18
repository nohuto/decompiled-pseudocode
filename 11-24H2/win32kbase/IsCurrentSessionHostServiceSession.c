/*
 * XREFs of IsCurrentSessionHostServiceSession @ 0x140100C78
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EAC08 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     InitializeWin32KSyscallFilter @ 0x1401005C0 (InitializeWin32KSyscallFilter.c)
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140100A20 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     UserIsCurrentSessionHostServiceSession @ 0x1401BEA40 (UserIsCurrentSessionHostServiceSession.c)
 *     ?InitializeInputGlobals@@YAJXZ @ 0x14023D618 (-InitializeInputGlobals@@YAJXZ.c)
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 *     Win32UserInitialize @ 0x1402E5DE4 (Win32UserInitialize.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     IsHostServiceSession @ 0x140100C94 (IsHostServiceSession.c)
 */

__int64 IsCurrentSessionHostServiceSession()
{
  unsigned int CurrentWin32kSessionId; // eax

  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  return IsHostServiceSession(CurrentWin32kSessionId);
}
