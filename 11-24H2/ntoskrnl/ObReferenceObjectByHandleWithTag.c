/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x14084B7A0
 * Callers:
 *     SepReferenceTokenByHandle @ 0x140359440 (SepReferenceTokenByHandle.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403C29A0 (NtSignalAndWaitForSingleObject.c)
 *     PopCreatePowerThread @ 0x140496E48 (PopCreatePowerThread.c)
 *     MiReferenceAweHandle @ 0x1404D61C4 (MiReferenceAweHandle.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     DbgkCaptureLiveKernelDump @ 0x14057EAD8 (DbgkCaptureLiveKernelDump.c)
 *     PspTimerDelayProcess @ 0x1405E5F60 (PspTimerDelayProcess.c)
 *     MiInsertNewZeroThread @ 0x14068F930 (MiInsertNewZeroThread.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140C2E174 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
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
