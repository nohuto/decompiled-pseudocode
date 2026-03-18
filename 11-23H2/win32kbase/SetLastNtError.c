/*
 * XREFs of SetLastNtError @ 0x1C00D5700
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C005C570 (NtUserEnumDisplayMonitors.c)
 *     NtUserGetAsyncKeyState @ 0x1C0070AB0 (NtUserGetAsyncKeyState.c)
 *     NtUserGetInputContainerId @ 0x1C01447A0 (NtUserGetInputContainerId.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0146840 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C014A350 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     NtUserSystemParametersInfo @ 0x1C014C2C0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall SetLastNtError(NTSTATUS a1)
{
  ULONG v1; // eax

  v1 = RtlNtStatusToDosError(a1);
  return UserSetLastError(v1);
}
