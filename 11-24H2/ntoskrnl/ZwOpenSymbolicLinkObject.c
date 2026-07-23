/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1406A9AB0
 * Callers:
 *     SepVerifyUIAccessChildProcessImage @ 0x140607418 (SepVerifyUIAccessChildProcessImage.c)
 *     DifZwOpenSymbolicLinkObjectWrapper @ 0x140640F80 (DifZwOpenSymbolicLinkObjectWrapper.c)
 *     IoIsValidNameGraftingBuffer @ 0x140713360 (IoIsValidNameGraftingBuffer.c)
 *     PiDrvDbUnregisterNode @ 0x140737BD8 (PiDrvDbUnregisterNode.c)
 *     SiOpenArcNameObject @ 0x140817778 (SiOpenArcNameObject.c)
 *     IopProcessSetInterfaceState @ 0x1408B1BC4 (IopProcessSetInterfaceState.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409B81B0 (IopQueryRegistryKeySystemPath.c)
 *     SiTranslateSymbolicLink @ 0x140A226F4 (SiTranslateSymbolicLink.c)
 *     ExpTranslateSymbolicLink @ 0x140A5C5A4 (ExpTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A7CBF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiTranslateSymbolicLink @ 0x140A7EA6C (BiTranslateSymbolicLink.c)
 *     IoDeleteSymbolicLink @ 0x140A8C640 (IoDeleteSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x140C1F590 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
