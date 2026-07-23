/*
 * XREFs of ZwQuerySymbolicLinkObject @ 0x1406AA110
 * Callers:
 *     SepVerifyUIAccessChildProcessImage @ 0x140607418 (SepVerifyUIAccessChildProcessImage.c)
 *     DifZwQuerySymbolicLinkObjectWrapper @ 0x140644CF0 (DifZwQuerySymbolicLinkObjectWrapper.c)
 *     IoIsValidNameGraftingBuffer @ 0x140713360 (IoIsValidNameGraftingBuffer.c)
 *     SiGetBiosSystemDisk @ 0x1408173B0 (SiGetBiosSystemDisk.c)
 *     SiTranslateSymbolicLink @ 0x140A226F4 (SiTranslateSymbolicLink.c)
 *     ExpTranslateSymbolicLink @ 0x140A5C5A4 (ExpTranslateSymbolicLink.c)
 *     BiTranslateSymbolicLink @ 0x140A7EA6C (BiTranslateSymbolicLink.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
