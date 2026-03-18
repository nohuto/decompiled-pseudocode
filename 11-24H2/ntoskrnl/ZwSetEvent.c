/*
 * XREFs of ZwSetEvent @ 0x1406A65D0
 * Callers:
 *     DifZwSetEventWrapper @ 0x140647FE0 (DifZwSetEventWrapper.c)
 *     PspShutdownCsrProcess @ 0x140772FB4 (PspShutdownCsrProcess.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A79530 (PiDrvDbLoadNodeWorkerCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, PreviousState);
}
