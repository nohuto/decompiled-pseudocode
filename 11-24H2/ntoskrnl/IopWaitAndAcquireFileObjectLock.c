/*
 * XREFs of IopWaitAndAcquireFileObjectLock @ 0x140970738
 * Callers:
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     IopValidateAndGetWriteParameters @ 0x140400A70 (IopValidateAndGetWriteParameters.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1407129A0 (IopSetEaOrQuotaInformationFile.c)
 *     IoSetInformation @ 0x140714820 (IoSetInformation.c)
 *     NtQueryQuotaInformationFile @ 0x140717C10 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140718380 (NtSetVolumeInformationFile.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     IopGetSetSecurityObject @ 0x1408796F0 (IopGetSetSecurityObject.c)
 *     IopReadFile @ 0x1408C0610 (IopReadFile.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C48F0 (BuildQueryDirectoryIrp.c)
 *     IopQueryXxxInformation @ 0x14096A530 (IopQueryXxxInformation.c)
 *     IopFlushBuffersFile @ 0x14096E4A4 (IopFlushBuffersFile.c)
 *     NtQueryEaFile @ 0x14096E890 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x14096EFA0 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x14096F610 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x140972480 (NtUnlockFile.c)
 *     NtLockFile @ 0x1409D2BE0 (NtLockFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0BC30 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A60FA0 (NtSetEaFile.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeSetEventBoostPriorityEx @ 0x1403D8BE8 (KeSetEventBoostPriorityEx.c)
 *     IopWaitForLockAlertable @ 0x14046EB64 (IopWaitForLockAlertable.c)
 */

__int64 __fastcall IopWaitAndAcquireFileObjectLock(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _BYTE *a5)
{
  char v6; // r14
  char v7; // r15
  NTSTATUS v9; // ebp
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF
  signed int Priority; // [rsp+60h] [rbp+8h] BYREF

  v6 = a3;
  v7 = a2;
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
      KeAbPreWait((__int64)a4, a2, a3);
    v9 = IopWaitForLockAlertable((PVOID)(a1 + 32), v7, v6);
    if ( a4 )
      a4 = KeAbPreAcquire((__int64)(a1 + 32), (__int64)a4);
  }
  while ( v9 >= 0 );
  _InterlockedDecrement(a1 + 28);
  if ( !*((_DWORD *)a1 + 29) && *((_DWORD *)a1 + 28) )
  {
    Priority = KeGetCurrentThread()->Priority;
    KeSetEventBoostPriorityEx(a1 + 32, (__int64)v11, &Priority, (__int64)(a1 + 32), 0, 1);
  }
  if ( a4 )
    KeAbPostReleaseEx((ULONG_PTR)(a1 + 32), (ULONG_PTR)a4);
  *a5 = 1;
  KeLeaveCriticalRegionThread();
  return (unsigned int)v9;
}
