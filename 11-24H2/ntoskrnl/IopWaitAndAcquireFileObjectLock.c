/*
 * XREFs of IopWaitAndAcquireFileObjectLock @ 0x140958F48
 * Callers:
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IopValidateAndGetWriteParameters @ 0x1403FB3F0 (IopValidateAndGetWriteParameters.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140710530 (IopSetEaOrQuotaInformationFile.c)
 *     IoSetInformation @ 0x1407123B0 (IoSetInformation.c)
 *     NtQueryQuotaInformationFile @ 0x1407157A0 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140715F10 (NtSetVolumeInformationFile.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     BuildQueryDirectoryIrp @ 0x1408C22B0 (BuildQueryDirectoryIrp.c)
 *     IopQueryXxxInformation @ 0x140952FC0 (IopQueryXxxInformation.c)
 *     NtQueryEaFile @ 0x140956950 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x140957060 (NtQueryVolumeInformationFile.c)
 *     IopFlushBuffersFile @ 0x140957794 (IopFlushBuffersFile.c)
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 *     NtUnlockFile @ 0x14095AC90 (NtUnlockFile.c)
 *     NtLockFile @ 0x1409C2A10 (NtLockFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0AE70 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A59680 (NtSetEaFile.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostReleaseEx @ 0x14028D2F0 (KeAbPostReleaseEx.c)
 *     KeSetEventBoostPriorityEx @ 0x1402E0738 (KeSetEventBoostPriorityEx.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     IopWaitForLockAlertable @ 0x140469278 (IopWaitForLockAlertable.c)
 */

__int64 __fastcall IopWaitAndAcquireFileObjectLock(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  char *v5; // rdi
  char v6; // r14
  char v7; // r15
  NTSTATUS v9; // ebp
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF
  signed int Priority; // [rsp+60h] [rbp+8h] BYREF

  v5 = (char *)a4;
  v6 = a3;
  v7 = a2;
  _InterlockedIncrement(a1 + 28);
  do
  {
    if ( !*((_DWORD *)a1 + 29) && !_InterlockedExchange(a1 + 29, 1) )
    {
      if ( v5 )
        v5[10] = 1;
      PsReferenceSiloContext((void *)a1);
      _InterlockedDecrement(a1 + 28);
      return 0;
    }
    if ( v5 )
      KeAbPreWait(v5, a2, a3, a4);
    v9 = IopWaitForLockAlertable((PVOID)(a1 + 32), v7, v6);
    if ( v5 )
      v5 = (char *)KeAbPreAcquire((__int64)(a1 + 32), (__int64)v5);
  }
  while ( v9 >= 0 );
  _InterlockedDecrement(a1 + 28);
  if ( !*((_DWORD *)a1 + 29) && *((_DWORD *)a1 + 28) )
  {
    Priority = KeGetCurrentThread()->Priority;
    KeSetEventBoostPriorityEx(a1 + 32, (__int64)v11, &Priority, (__int64)(a1 + 32), 0, 1);
  }
  if ( v5 )
    KeAbPostReleaseEx((ULONG_PTR)(a1 + 32), (ULONG_PTR)v5);
  *a5 = 1;
  KeLeaveCriticalRegionThread();
  return (unsigned int)v9;
}
