/*
 * XREFs of IoBuildSynchronousFsdRequest @ 0x140A3CD90
 * Callers:
 *     HalpQueryPccInterface @ 0x14070409C (HalpQueryPccInterface.c)
 *     RawQueryFileSystemInformation @ 0x14077CCF0 (RawQueryFileSystemInformation.c)
 *     ExpQueryPrmInterface @ 0x1407BF618 (ExpQueryPrmInterface.c)
 *     IoShutdownSystem @ 0x140B5374C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140B539D0 (IopShutdownBaseFileSystems.c)
 *     IopCreateArcNamesCd @ 0x140C1BE30 (IopCreateArcNamesCd.c)
 * Callees:
 *     IopBuildSynchronousFsdRequest @ 0x140A3CDD0 (IopBuildSynchronousFsdRequest.c)
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
