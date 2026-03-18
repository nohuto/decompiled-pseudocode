/*
 * XREFs of IopWaitAndAcquireFileObjectLock @ 0x1409888C0
 * Callers:
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     IopValidateAndGetWriteParameters @ 0x1402D3880 (IopValidateAndGetWriteParameters.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1407068A0 (IopSetEaOrQuotaInformationFile.c)
 *     IoSetInformation @ 0x140708720 (IoSetInformation.c)
 *     NtQueryQuotaInformationFile @ 0x14070BB10 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14070C280 (NtSetVolumeInformationFile.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     IopGetSetSecurityObject @ 0x14086F330 (IopGetSetSecurityObject.c)
 *     IopQueryXxxInformation @ 0x1408C1900 (IopQueryXxxInformation.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C6A20 (BuildQueryDirectoryIrp.c)
 *     NtQueryEaFile @ 0x140935870 (NtQueryEaFile.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x140936F60 (NtQueryVolumeInformationFile.c)
 *     IopFlushBuffersFile @ 0x140938E14 (IopFlushBuffersFile.c)
 *     NtLockFile @ 0x1409869D0 (NtLockFile.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x140989F40 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14098A4B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A5F1F0 (NtSetEaFile.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 *     KeSetEventBoostPriorityEx @ 0x1403F9BB8 (KeSetEventBoostPriorityEx.c)
 *     IopWaitForLockAlertable @ 0x140470104 (IopWaitForLockAlertable.c)
 */

__int64 __fastcall IopWaitAndAcquireFileObjectLock(
        volatile signed __int32 *a1,
        char a2,
        char a3,
        __int64 *a4,
        _BYTE *a5)
{
  NTSTATUS v9; // ebp
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  signed int Priority; // [rsp+60h] [rbp+8h] BYREF

  _InterlockedIncrement(a1 + 28);
  do
  {
    if ( !*((_DWORD *)a1 + 29) && !_InterlockedExchange(a1 + 29, 1) )
    {
      if ( a4 )
        *((_BYTE *)a4 + 10) = 1;
      PsReferenceSiloContext((void *)a1);
      _InterlockedDecrement(a1 + 28);
      return 0;
    }
    if ( a4 )
      KeAbPreWait(a4);
    v9 = IopWaitForLockAlertable((PVOID)(a1 + 32), a2, a3);
    if ( a4 )
      a4 = KeAbPreAcquire((__int64)(a1 + 32), (__int64)a4);
  }
  while ( v9 >= 0 );
  _InterlockedDecrement(a1 + 28);
  if ( !*((_DWORD *)a1 + 29) && *((_DWORD *)a1 + 28) )
  {
    Priority = KeGetCurrentThread()->Priority;
    KeSetEventBoostPriorityEx(a1 + 32, v11, &Priority, (__int64)(a1 + 32), 0, 1);
  }
  if ( a4 )
    KeAbPostReleaseEx((ULONG_PTR)(a1 + 32), (ULONG_PTR)a4);
  *a5 = 1;
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
