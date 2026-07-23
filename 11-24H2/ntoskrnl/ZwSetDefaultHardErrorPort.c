/*
 * XREFs of ZwSetDefaultHardErrorPort @ 0x1406AA730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDefaultHardErrorPort(HANDLE DefaultHardErrorPort)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DefaultHardErrorPort);
}
