/*
 * XREFs of ZwSaveKeyEx @ 0x1406A9650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Format)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, FileHandle);
}
