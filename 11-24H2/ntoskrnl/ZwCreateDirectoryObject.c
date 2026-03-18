/*
 * XREFs of ZwCreateDirectoryObject @ 0x1406A7990
 * Callers:
 *     DifZwCreateDirectoryObjectWrapper @ 0x14063D440 (DifZwCreateDirectoryObjectWrapper.c)
 *     ObpInitializeRootNamespace @ 0x140743CA8 (ObpInitializeRootNamespace.c)
 *     SepInitializationPhase1 @ 0x14078EEE0 (SepInitializationPhase1.c)
 *     ObpGetSilosRootDirectory @ 0x14082B0A0 (ObpGetSilosRootDirectory.c)
 *     SeGetTokenDeviceMap @ 0x14098519C (SeGetTokenDeviceMap.c)
 *     ExInitializeNls @ 0x140AC1714 (ExInitializeNls.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140C35790 (PspInitializeCpuPartitionsPhase1.c)
 *     CmpInitializeDriverStores @ 0x140C471E0 (CmpInitializeDriverStores.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle, *(_QWORD *)&DesiredAccess);
}
