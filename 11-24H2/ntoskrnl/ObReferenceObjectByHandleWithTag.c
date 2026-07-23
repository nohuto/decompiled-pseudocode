/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x140847A60
 * Callers:
 *     NtSignalAndWaitForSingleObject @ 0x1403B1560 (NtSignalAndWaitForSingleObject.c)
 *     SepReferenceTokenByHandle @ 0x1403E36B0 (SepReferenceTokenByHandle.c)
 *     PopCreatePowerThread @ 0x1404917D8 (PopCreatePowerThread.c)
 *     MiReferenceAweHandle @ 0x1404CF614 (MiReferenceAweHandle.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     DbgkCaptureLiveKernelDump @ 0x14057BF68 (DbgkCaptureLiveKernelDump.c)
 *     PspTimerDelayProcess @ 0x1405E3500 (PspTimerDelayProcess.c)
 *     MiInsertNewZeroThread @ 0x140690A00 (MiInsertNewZeroThread.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140C30294 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall ObReferenceObjectByHandleWithTag(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PVOID *Object,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  return ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, Tag, (__int64)Object, (__int64)HandleInformation, 0LL);
}
