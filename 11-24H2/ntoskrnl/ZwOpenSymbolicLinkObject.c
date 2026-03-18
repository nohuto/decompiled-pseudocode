/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1406A8B10
 * Callers:
 *     DifZwOpenSymbolicLinkObjectWrapper @ 0x1406429C0 (DifZwOpenSymbolicLinkObjectWrapper.c)
 *     IoIsValidNameGraftingBuffer @ 0x1407157D0 (IoIsValidNameGraftingBuffer.c)
 *     PiDrvDbUnregisterNode @ 0x140739CA8 (PiDrvDbUnregisterNode.c)
 *     SiOpenArcNameObject @ 0x140817038 (SiOpenArcNameObject.c)
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 *     IopQueryRegistryKeySystemPath @ 0x1409C8568 (IopQueryRegistryKeySystemPath.c)
 *     SiTranslateSymbolicLink @ 0x140A2DCB4 (SiTranslateSymbolicLink.c)
 *     ExpTranslateSymbolicLink @ 0x140A63CA4 (ExpTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140A82014 (SepCleanupLUIDDeviceMapDirectory.c)
 *     BiTranslateSymbolicLink @ 0x140A83F4C (BiTranslateSymbolicLink.c)
 *     IoDeleteSymbolicLink @ 0x140A90000 (IoDeleteSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x140C1D550 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle, *(_QWORD *)&DesiredAccess);
}
