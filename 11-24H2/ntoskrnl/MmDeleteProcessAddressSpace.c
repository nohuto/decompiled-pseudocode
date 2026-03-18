/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x140AE6484
 * Callers:
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiEmptyPageAccessLog @ 0x140244260 (MiEmptyPageAccessLog.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 *     MiGetVmAccessLoggingPartition @ 0x140399050 (MiGetVmAccessLoggingPartition.c)
 *     PsReturnProcessQuota @ 0x1403CD728 (PsReturnProcessQuota.c)
 *     MiContractPagingFiles @ 0x1403F94EC (MiContractPagingFiles.c)
 *     MiGetSharedVm @ 0x14040C800 (MiGetSharedVm.c)
 *     MiUnlinkWorkingSet @ 0x140416DF8 (MiUnlinkWorkingSet.c)
 *     ExCleanupAutoExpandPushLock @ 0x14043A400 (ExCleanupAutoExpandPushLock.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 *     MiDeleteFinalPageTables @ 0x14045BA24 (MiDeleteFinalPageTables.c)
 *     MiDeleteWorkingSetList @ 0x140481A60 (MiDeleteWorkingSetList.c)
 *     MiDeletePxeSharedLocks @ 0x140495F34 (MiDeletePxeSharedLocks.c)
 *     MiReadProcessNumberOfLockedPages @ 0x1404F02D8 (MiReadProcessNumberOfLockedPages.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiDereferenceSlabIdentity @ 0x140687730 (MiDereferenceSlabIdentity.c)
 *     MiDeleteAweInfo @ 0x1407F9698 (MiDeleteAweInfo.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1408E84D0 (PspChangeJobMemoryUsageByProcess.c)
 *     MiDeleteProcessHotPatchContext @ 0x140A63874 (MiDeleteProcessHotPatchContext.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmDeleteProcessAddressSpace(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbp
  char *v3; // rbx
  ULONG_PTR BugCheckParameter4; // r9
  _QWORD *v5; // rax
  ULONG_PTR v6; // rdx
  _QWORD *i; // rax
  char *j; // rsi
  _QWORD *v9; // rax
  void *v10; // rcx
  _QWORD *SharedVm; // rbx
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 ProcessPartition; // rsi
  __int64 v15; // r14
  _DWORD *v16; // rdx
  ULONG *VmAccessLoggingPartition; // rax
  unsigned __int64 *v18; // r8
  void *v19; // rcx
  __int64 result; // rax
  unsigned __int8 v21; // dl

  v1 = BugCheckParameter2 + 1024;
  MiUnlinkWorkingSet(BugCheckParameter2 + 1024);
  v3 = *(char **)(BugCheckParameter2 + 920);
  BugCheckParameter4 = MiReadProcessNumberOfLockedPages(BugCheckParameter2);
  if ( BugCheckParameter4 )
  {
    if ( v3 && *((_QWORD *)v3 + 2) && *((_DWORD *)v3 + 7) )
    {
      v5 = *(_QWORD **)v3;
      v6 = 0LL;
      while ( v5 )
      {
        v6 = (ULONG_PTR)v5;
        v5 = (_QWORD *)*v5;
      }
      if ( !v6 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v3 + 1); i; i = (_QWORD *)*i )
          v6 = (ULONG_PTR)i;
      }
      KeBugCheckEx(0xCBu, v6, 0LL, *(_QWORD *)(v6 + 24), BugCheckParameter4);
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter2, BugCheckParameter4, (ULONG_PTR)v3);
  }
  if ( v3 )
  {
    for ( j = v3; ; j = v3 + 8 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD **)j;
        if ( !*(_QWORD *)j )
          break;
        do
        {
          v10 = v9;
          v9 = (_QWORD *)*v9;
        }
        while ( v9 );
        if ( !v10 )
          break;
        ExFreePoolWithTag(v10, 0);
      }
      if ( j != v3 )
        break;
    }
    ExFreePoolWithTag(v3, 0);
  }
  SharedVm = MiGetSharedVm(v1);
  v12 = MiDeleteFinalPageTables((_KPROCESS *)BugCheckParameter2);
  PsReturnProcessQuota(BugCheckParameter2, v13, 4uLL);
  ProcessPartition = MiGetProcessPartition(BugCheckParameter2);
  MiReturnResident(ProcessPartition, 4uLL);
  v15 = *(_QWORD *)(BugCheckParameter2 + 1040);
  if ( v15 )
  {
    v16 = *(_DWORD **)(v15 + 1096);
    if ( v16 )
      MiDeleteAweInfo(BugCheckParameter2, v16);
    ExCleanupAutoExpandPushLock(v15 + 1112);
  }
  if ( SharedVm[5] )
  {
    VmAccessLoggingPartition = MiGetVmAccessLoggingPartition(v1);
    MiEmptyPageAccessLog((__int64)VmAccessLoggingPartition, v18);
    SharedVm[5] = 0LL;
  }
  v19 = (void *)SharedVm[4];
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0);
    SharedVm[4] = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 496) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2, -4LL, BugCheckParameter2, 0LL);
  MiReturnCommit(ProcessPartition, 4 - v12, 0);
  MiDeletePxeSharedLocks(v1);
  MiDeleteWorkingSetList(v1);
  MiDeleteProcessHotPatchContext(BugCheckParameter2, 0);
  result = MiContractPagingFiles(ProcessPartition);
  v21 = *(_BYTE *)(BugCheckParameter2 + 1774);
  if ( v21 != 0xFF )
    return MiDereferenceSlabIdentity(ProcessPartition, v21);
  return result;
}
