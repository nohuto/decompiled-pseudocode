/*
 * XREFs of ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A2390
 * Callers:
 *     rimHandleAnyPnpRemovePendingDevices @ 0x14005CA04 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1400D69F0 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     <none>
 */

__int64 GET_USERCRIT_DISPOSITION()
{
  return (*(_DWORD *)(PsGetCurrentThreadWin32Thread() + 24) >> 2) & 3;
}
