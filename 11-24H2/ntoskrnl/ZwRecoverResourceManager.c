/*
 * XREFs of ZwRecoverResourceManager @ 0x1406AA2D0
 * Callers:
 *     CmpInitCmRM @ 0x140AE6674 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
