/*
 * XREFs of IopAllocateIrpExReturn @ 0x1402537B0
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x140253750 (IopAllocateIrpMustSucceed.c)
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402D4A40 (IopBuildDeviceIoControlRequest.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1402D4D60 (IopAllocateAndPopulateWriteIrp.c)
 *     MiIssueAsynchronousFlush @ 0x14035B6FC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14035BA6C (IoAsynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x14035C250 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14035C508 (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14035C7E0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14035CA60 (IoPageReadEx.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14035EFF0 (IopBuildAsynchronousFsdRequest.c)
 *     IopAllocateBackpocketIrp @ 0x140592628 (IopAllocateBackpocketIrp.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1407068A0 (IopSetEaOrQuotaInformationFile.c)
 *     IoSetInformation @ 0x140708720 (IoSetInformation.c)
 *     NtQueryQuotaInformationFile @ 0x14070BB10 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14070C280 (NtSetVolumeInformationFile.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     IopQueryNameInternal @ 0x1408BF6D0 (IopQueryNameInternal.c)
 *     IopQueryXxxInformation @ 0x1408C1900 (IopQueryXxxInformation.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C6A20 (BuildQueryDirectoryIrp.c)
 *     IopGetFileInformation @ 0x1408ECAD0 (IopGetFileInformation.c)
 *     NtQueryEaFile @ 0x140935870 (NtQueryEaFile.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x140936F60 (NtQueryVolumeInformationFile.c)
 *     IopFlushBuffersFile @ 0x140938E14 (IopFlushBuffersFile.c)
 *     NtLockFile @ 0x1409869D0 (NtLockFile.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x140989F40 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14098A4B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A5F1F0 (NtSetEaFile.c)
 *     IopReadFileScatter @ 0x140A89998 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A9170C (IopWriteFileGather.c)
 *     IoVerifyVolume @ 0x140AB22D0 (IoVerifyVolume.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x140253800 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14048ADBC (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140B99570 (IovAllocateIrp.c)
 */

__int64 __fastcall IopAllocateIrpExReturn(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate();
  if ( ViVerifyAllDrivers != 1 || IopDispatchAllocateIrp == 2 )
    return IopAllocateIrpWithExtension();
  return IovAllocateIrp(a1, a2, a3, retaddr);
}
