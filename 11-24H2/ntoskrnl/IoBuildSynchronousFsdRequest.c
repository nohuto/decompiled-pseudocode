/*
 * XREFs of IoBuildSynchronousFsdRequest @ 0x140A326A0
 * Callers:
 *     HalpQueryPccInterface @ 0x140701C5C (HalpQueryPccInterface.c)
 *     RawQueryFileSystemInformation @ 0x14077CBF4 (RawQueryFileSystemInformation.c)
 *     ExpQueryPrmInterface @ 0x1407BFA68 (ExpQueryPrmInterface.c)
 *     IoShutdownSystem @ 0x140B5579C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140B55A20 (IopShutdownBaseFileSystems.c)
 *     IopCreateArcNamesCd @ 0x140C1DE70 (IopCreateArcNamesCd.c)
 * Callees:
 *     IopBuildSynchronousFsdRequest @ 0x140A326E0 (IopBuildSynchronousFsdRequest.c)
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
