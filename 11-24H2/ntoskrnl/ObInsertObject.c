/*
 * XREFs of ObInsertObject @ 0x140853260
 * Callers:
 *     PopPowerRequestCreateUserModeRequest @ 0x1402B9970 (PopPowerRequestCreateUserModeRequest.c)
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 *     FsRtlCreateSectionForDataScan @ 0x140443420 (FsRtlCreateSectionForDataScan.c)
 *     SepCreateAppContainerToken @ 0x140606A30 (SepCreateAppContainerToken.c)
 *     PspInitPhase1 @ 0x140C37000 (PspInitPhase1.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140C378D0 (PspInitializeCpuPartitionsPhase1.c)
 *     CmpCreateRegistryRoot @ 0x140C48EC4 (CmpCreateRegistryRoot.c)
 *     MiSectionInitialization @ 0x140C558B4 (MiSectionInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140C68400 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
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
