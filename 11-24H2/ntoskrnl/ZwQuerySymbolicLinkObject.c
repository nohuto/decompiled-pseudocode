/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x1406A9170
 * Callers:
 *     DifZwQuerySymbolicLinkObjectWrapper @ 0x140646730 (DifZwQuerySymbolicLinkObjectWrapper.c)
 *     IoIsValidNameGraftingBuffer @ 0x1407157D0 (IoIsValidNameGraftingBuffer.c)
 *     SiGetBiosSystemDisk @ 0x140816C70 (SiGetBiosSystemDisk.c)
 *     SiTranslateSymbolicLink @ 0x140A2DCB4 (SiTranslateSymbolicLink.c)
 *     ExpTranslateSymbolicLink @ 0x140A63CA4 (ExpTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x140A83F4C (BiTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle, LinkTarget);
}
