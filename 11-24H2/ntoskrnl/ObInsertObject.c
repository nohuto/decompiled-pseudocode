/*
 * XREFs of ObInsertObject @ 0x140856F80
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x140331200 (PopPowerRequestCreateUserModeRequest.c)
 *     SepCreateTokenEx @ 0x1403645F4 (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x14044C520 (FsRtlCreateSectionForDataScan.c)
 *     PspInitPhase1 @ 0x140C34EC0 (PspInitPhase1.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140C35790 (PspInitializeCpuPartitionsPhase1.c)
 *     CmpCreateRegistryRoot @ 0x140C46D74 (CmpCreateRegistryRoot.c)
 *     MiSectionInitialization @ 0x140C53724 (MiSectionInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140C66284 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx(Object, 0, (__int64)NewObject, (__int64)Handle);
}
