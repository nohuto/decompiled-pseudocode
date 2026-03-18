/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x1406A7D10
 * Callers:
 *     DifZwCreateSymbolicLinkObjectWrapper @ 0x14063E3C0 (DifZwCreateSymbolicLinkObjectWrapper.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x140713FB0 (IoCreateUnprotectedSymbolicLink.c)
 *     PiDrvDbRegisterNode @ 0x140738408 (PiDrvDbRegisterNode.c)
 *     ObpCreateDosDevicesDirectory @ 0x14074375C (ObpCreateDosDevicesDirectory.c)
 *     ObpInitializeRootNamespace @ 0x140743CA8 (ObpInitializeRootNamespace.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x1407732F8 (PspSiloInitializeSystemRootSymlink.c)
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 *     SeGetTokenDeviceMap @ 0x14098519C (SeGetTokenDeviceMap.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140C22798 (PiCreateDriverDataDirectoryRoot.c)
 *     CmpInitializeDriverStores @ 0x140C471E0 (CmpInitializeDriverStores.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateSymbolicLinkObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
