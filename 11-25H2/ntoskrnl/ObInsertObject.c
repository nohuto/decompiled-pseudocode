/*
 * XREFs of ObInsertObject @ 0x14089FF30
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140205500 (FsRtlCreateSectionForDataScan.c)
 *     SepCreateTokenEx @ 0x14036B744 (SepCreateTokenEx.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x1404258AC (PopPowerRequestCreateUserModeRequest.c)
 *     PspInitPhase1 @ 0x140C23BF4 (PspInitPhase1.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140C244C4 (PspInitializeCpuPartitionsPhase1.c)
 *     CmpCreateRegistryRoot @ 0x140C35AB8 (CmpCreateRegistryRoot.c)
 *     MiSectionInitialization @ 0x140C424F4 (MiSectionInitialization.c)
 *     IopInitializeBuiltinDriver @ 0x140C54388 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall ObInsertObject(
        PVOID Object,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        ULONG ObjectPointerBias,
        PVOID *NewObject,
        PHANDLE Handle)
{
  return ObInsertObjectEx(Object, PassedAccessState, 0, (__int64)NewObject, (__int64)Handle);
}
