/*
 * XREFs of ?ConvertLargeIntegerToDwmWindowCloseEventToken@CWindowList@@AEAA?AUDWM_WINDOW_CLOSE_EVENT_TOKEN@@AEBT_LARGE_INTEGER@@@Z @ 0x18009B164
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800915A0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CWindowList::ConvertLargeIntegerToDwmWindowCloseEventToken(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  *a2 = *a3;
  return a2;
}
