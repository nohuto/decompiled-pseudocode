/*
 * XREFs of IopAllocateIrpExReturn @ 0x1402843D0
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x14025ADBC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14025B12C (IoAsynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x14025B804 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14025BAA8 (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14025BD80 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14025C000 (IoPageReadEx.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14025DD60 (IopBuildAsynchronousFsdRequest.c)
 *     IopBuildDeviceIoControlRequest @ 0x14025EF00 (IopBuildDeviceIoControlRequest.c)
 *     IopAllocateIrpMustSucceed @ 0x140284370 (IopAllocateIrpMustSucceed.c)
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403FB9B0 (IopAllocateAndPopulateWriteIrp.c)
 *     IopAllocateBackpocketIrp @ 0x140592D08 (IopAllocateBackpocketIrp.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140710530 (IopSetEaOrQuotaInformationFile.c)
 *     IoSetInformation @ 0x1407123B0 (IoSetInformation.c)
 *     NtQueryQuotaInformationFile @ 0x1407157A0 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140715F10 (NtSetVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C22B0 (BuildQueryDirectoryIrp.c)
 *     IopQueryNameInternal @ 0x140950DC0 (IopQueryNameInternal.c)
 *     IopQueryXxxInformation @ 0x140952FC0 (IopQueryXxxInformation.c)
 *     NtQueryEaFile @ 0x140956950 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x140957060 (NtQueryVolumeInformationFile.c)
 *     IopFlushBuffersFile @ 0x140957794 (IopFlushBuffersFile.c)
 *     IopGetFileInformation @ 0x140957CC0 (IopGetFileInformation.c)
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x14095AC90 (NtUnlockFile.c)
 *     NtLockFile @ 0x1409C2A10 (NtLockFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0AE70 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A59680 (NtSetEaFile.c)
 *     IopReadFileScatter @ 0x140A8AFD8 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A920EC (IopWriteFileGather.c)
 *     IoVerifyVolume @ 0x140AB1440 (IoVerifyVolume.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14025E1EC (IopAllocateIrpWithExtension.c)
 *     IopAllocateIrpPrivate @ 0x140284420 (IopAllocateIrpPrivate.c)
 *     IovAllocateIrp @ 0x140BAB550 (IovAllocateIrp.c)
 */

__int64 __fastcall IopAllocateIrpExReturn(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3);
  if ( ViVerifyAllDrivers != 1 || IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension(a1, a2, a3);
  return IovAllocateIrp(a1, a2, a3, retaddr);
}
