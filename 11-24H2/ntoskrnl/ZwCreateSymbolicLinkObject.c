/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x1406A8CB0
 * Callers:
 *     DifZwCreateSymbolicLinkObjectWrapper @ 0x14063C980 (DifZwCreateSymbolicLinkObjectWrapper.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x140711B40 (IoCreateUnprotectedSymbolicLink.c)
 *     PiDrvDbRegisterNode @ 0x140736338 (PiDrvDbRegisterNode.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074168C (ObpCreateDosDevicesDirectory.c)
 *     ObpInitializeRootNamespace @ 0x140741BD8 (ObpInitializeRootNamespace.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140773518 (PspSiloInitializeSystemRootSymlink.c)
 *     IopProcessSetInterfaceState @ 0x1408B1BC4 (IopProcessSetInterfaceState.c)
 *     SeGetTokenDeviceMap @ 0x14096D9AC (SeGetTokenDeviceMap.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140C247C8 (PiCreateDriverDataDirectoryRoot.c)
 *     CmpInitializeDriverStores @ 0x140C49330 (CmpInitializeDriverStores.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LinkTarget)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
