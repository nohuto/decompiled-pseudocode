/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x1408D7B40
 * Callers:
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 * Callees:
 *     MiGetVmAccessLoggingPartition @ 0x140209E80 (MiGetVmAccessLoggingPartition.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiEmptyPageAccessLog @ 0x140322FE0 (MiEmptyPageAccessLog.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 *     ExCleanupAutoExpandPushLock @ 0x14036D350 (ExCleanupAutoExpandPushLock.c)
 *     PsReturnProcessQuota @ 0x1403C5C8C (PsReturnProcessQuota.c)
 *     MiGetSharedVm @ 0x14040A910 (MiGetSharedVm.c)
 *     MiUnlinkWorkingSet @ 0x14041773C (MiUnlinkWorkingSet.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     MiContractPagingFiles @ 0x14045A2AC (MiContractPagingFiles.c)
 *     MiDeleteFinalPageTables @ 0x14045CD60 (MiDeleteFinalPageTables.c)
 *     MiDeleteWorkingSetList @ 0x140480D98 (MiDeleteWorkingSetList.c)
 *     MiDeletePxeSharedLocks @ 0x14049694C (MiDeletePxeSharedLocks.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiReadProcessNumberOfLockedPages @ 0x14065ECC8 (MiReadProcessNumberOfLockedPages.c)
 *     MiDereferenceSlabIdentity @ 0x14067BEA0 (MiDereferenceSlabIdentity.c)
 *     MiDeleteAweInfo @ 0x1407E9808 (MiDeleteAweInfo.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1408D9260 (PspChangeJobMemoryUsageByProcess.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmDeleteProcessAddressSpace(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rbp
  char *v3; // rbx
  ULONG_PTR BugCheckParameter4; // r9
  _QWORD *SharedVm; // rbx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 ProcessPartition; // rsi
  __int64 v9; // r14
  _DWORD *v10; // rdx
  void *v11; // rcx
  void *v12; // rcx
  __int64 result; // rax
  unsigned __int8 v14; // dl
  _QWORD *v15; // rax
  ULONG_PTR v16; // rdx
  char *j; // rsi
  ULONG *VmAccessLoggingPartition; // rax
  unsigned __int64 *v19; // r8
  _QWORD *i; // rax
  _QWORD *v21; // rax
  void *v22; // rcx

  v1 = BugCheckParameter2 + 1024;
  MiUnlinkWorkingSet(BugCheckParameter2 + 1024);
  v3 = *(char **)(BugCheckParameter2 + 920);
  if ( MmNumLockedPagesFixEnabled )
    BugCheckParameter4 = MiReadProcessNumberOfLockedPages(BugCheckParameter2);
  else
    BugCheckParameter4 = *(_QWORD *)(BugCheckParameter2 + 656);
  if ( BugCheckParameter4 )
  {
    if ( v3 && *((_QWORD *)v3 + 2) && *((_DWORD *)v3 + 7) )
    {
      v15 = *(_QWORD **)v3;
      v16 = 0LL;
      while ( v15 )
      {
        v16 = (ULONG_PTR)v15;
        v15 = (_QWORD *)*v15;
      }
      if ( !v16 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v3 + 1); i; i = (_QWORD *)*i )
          v16 = (ULONG_PTR)i;
      }
      KeBugCheckEx(0xCBu, v16, 0LL, *(_QWORD *)(v16 + 24), BugCheckParameter4);
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter2, BugCheckParameter4, (ULONG_PTR)v3);
  }
  if ( v3 )
  {
    for ( j = v3; ; j = v3 + 8 )
    {
      while ( 1 )
      {
        v21 = *(_QWORD **)j;
        if ( !*(_QWORD *)j )
          break;
        do
        {
          v22 = v21;
          v21 = (_QWORD *)*v21;
        }
        while ( v21 );
        if ( !v22 )
          break;
        ExFreePoolWithTag(v22, 0);
      }
      if ( j != v3 )
        break;
    }
    ExFreePoolWithTag(v3, 0);
  }
  SharedVm = MiGetSharedVm(v1);
  v6 = MiDeleteFinalPageTables((_KPROCESS *)BugCheckParameter2);
  PsReturnProcessQuota((struct _KPROCESS *)BugCheckParameter2, v7, 4LL);
  ProcessPartition = MiGetProcessPartition(BugCheckParameter2);
  MiReturnResident(ProcessPartition, 4uLL);
  v9 = *(_QWORD *)(BugCheckParameter2 + 1040);
  if ( v9 )
  {
    v10 = *(_DWORD **)(v9 + 1096);
    if ( v10 )
      MiDeleteAweInfo(BugCheckParameter2, v10);
    ExCleanupAutoExpandPushLock(v9 + 1112);
  }
  if ( SharedVm[5] )
  {
    VmAccessLoggingPartition = MiGetVmAccessLoggingPartition(v1);
    MiEmptyPageAccessLog((__int64)VmAccessLoggingPartition, v19);
    SharedVm[5] = 0LL;
  }
  v11 = (void *)SharedVm[4];
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    SharedVm[4] = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 496) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2LL, -4LL, BugCheckParameter2);
  MiReturnCommit(ProcessPartition, 4 - v6, 0);
  MiDeletePxeSharedLocks(v1);
  MiDeleteWorkingSetList(v1);
  v12 = *(void **)(BugCheckParameter2 + 1912);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  result = MiContractPagingFiles(ProcessPartition);
  v14 = *(_BYTE *)(BugCheckParameter2 + 1774);
  if ( v14 != 0xFF )
    return MiDereferenceSlabIdentity(ProcessPartition, v14);
  return result;
}
