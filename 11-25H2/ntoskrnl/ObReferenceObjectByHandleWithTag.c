/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x14084F9F0
 * Callers:
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     SepReferenceTokenByHandle @ 0x140361130 (SepReferenceTokenByHandle.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403717F0 (NtSignalAndWaitForSingleObject.c)
 *     PopCreatePowerThread @ 0x140497308 (PopCreatePowerThread.c)
 *     MiReferenceAweHandle @ 0x1404D6AD4 (MiReferenceAweHandle.c)
 *     DbgkCaptureLiveKernelDump @ 0x14057B7B8 (DbgkCaptureLiveKernelDump.c)
 *     PspTimerDelayProcess @ 0x1405D9D90 (PspTimerDelayProcess.c)
 *     MiInsertNewZeroThread @ 0x1406844D0 (MiInsertNewZeroThread.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140C1D074 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
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
