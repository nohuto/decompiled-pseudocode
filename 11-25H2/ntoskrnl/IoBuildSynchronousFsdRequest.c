/*
 * XREFs of IoBuildSynchronousFsdRequest @ 0x140A361D0
 * Callers:
 *     HalpQueryPccInterface @ 0x1406F81BC (HalpQueryPccInterface.c)
 *     RawQueryFileSystemInformation @ 0x14076D9C0 (RawQueryFileSystemInformation.c)
 *     ExpQueryPrmInterface @ 0x1407AFE48 (ExpQueryPrmInterface.c)
 *     IoShutdownSystem @ 0x140B4374C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140B439D0 (IopShutdownBaseFileSystems.c)
 *     IopCreateArcNamesCd @ 0x140C0AC5C (IopCreateArcNamesCd.c)
 * Callees:
 *     IopBuildSynchronousFsdRequest @ 0x140A36210 (IopBuildSynchronousFsdRequest.c)
 */

PIRP __stdcall IoBuildSynchronousFsdRequest(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return (PIRP)IopBuildSynchronousFsdRequest(
                 MajorFunction,
                 (_DWORD)DeviceObject,
                 (_DWORD)Buffer,
                 Length,
                 (__int64)StartingOffset,
                 (__int64)Event,
                 (__int64)IoStatusBlock,
                 retaddr);
}
