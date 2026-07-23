/*
 * XREFs of MiRemovePhysicalMemory @ 0x1407EA37C
 * Callers:
 *     MiDeleteExtentPfns @ 0x14067B940 (MiDeleteExtentPfns.c)
 *     MmRemovePhysicalMemory @ 0x1407EABA0 (MmRemovePhysicalMemory.c)
 *     MiRemoveMdlPages @ 0x1407EBBA8 (MiRemoveMdlPages.c)
 *     MiRemoveFileOnlyPages @ 0x1407F0C3C (MiRemoveFileOnlyPages.c)
 *     MiHotRemovePartitionPageRun @ 0x1407FCCF8 (MiHotRemovePartitionPageRun.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     IoUpdateDumpPhysicalRanges @ 0x14058F55C (IoUpdateDumpPhysicalRanges.c)
 *     KeConfigureDynamicMemory @ 0x1405B4FBC (KeConfigureDynamicMemory.c)
 *     MiAcquireRemoveMemoryResources @ 0x14066D8F4 (MiAcquireRemoveMemoryResources.c)
 *     MiEntireRangeAlreadyExists @ 0x14066DF1C (MiEntireRangeAlreadyExists.c)
 *     MiPerformMemoryChange @ 0x14066F268 (MiPerformMemoryChange.c)
 *     MiReturnAddMemoryResources @ 0x14066FA80 (MiReturnAddMemoryResources.c)
 *     MiClearMirrorBitmaps @ 0x140673B90 (MiClearMirrorBitmaps.c)
 *     MiGetDanglingExtent @ 0x14067C354 (MiGetDanglingExtent.c)
 *     MiReduceCommitLimits @ 0x140687600 (MiReduceCommitLimits.c)
 *     MiPartitionDeleteMemoryNode @ 0x14068C280 (MiPartitionDeleteMemoryNode.c)
 *     MiFlushCacheRange @ 0x14068FD90 (MiFlushCacheRange.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiAcquireAddMemoryLocks @ 0x1407E8B38 (MiAcquireAddMemoryLocks.c)
 *     MiNotifyMemoryChange @ 0x1407EA2CC (MiNotifyMemoryChange.c)
 *     MiReleaseAddMemoryLocks @ 0x1407EA32C (MiReleaseAddMemoryLocks.c)
 *     MiUnmapPfns @ 0x1407EA6E0 (MiUnmapPfns.c)
 *     MiHotAddHugeRange @ 0x1407EB5AC (MiHotAddHugeRange.c)
 */

__int64 __fastcall MiRemovePhysicalMemory(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  ULONG *v6; // r12
  __int64 v7; // rcx
  char *v8; // rax
  int v9; // esi
  unsigned __int64 DanglingExtent; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r15
  char v13; // r8
  __int64 v15; // [rsp+30h] [rbp-A9h] BYREF
  _BYTE v16[16]; // [rsp+40h] [rbp-99h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-89h]
  unsigned __int64 v18; // [rsp+58h] [rbp-81h]
  __int64 v19; // [rsp+60h] [rbp-79h]
  int v20; // [rsp+68h] [rbp-71h]
  ULONG *v21; // [rsp+70h] [rbp-69h]
  __int64 v22; // [rsp+A8h] [rbp-31h]
  char v23; // [rsp+B0h] [rbp-29h] BYREF

  v15 = a2;
  v4 = a2;
  memset_0(v16, 0, 0xB0uLL);
  if ( (a3 & 0x40) != 0 )
  {
    v6 = &MiSystemPartition;
  }
  else
  {
    v4 = v15;
    v6 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
  }
  v22 = 0LL;
  v18 = v4 + a1;
  v7 = 2LL;
  v8 = &v23;
  v20 = a3;
  v17 = a1;
  v19 = v4;
  v21 = v6;
  do
  {
    *((_QWORD *)v8 + 1) = v8;
    *(_QWORD *)v8 = v8;
    v8 += 24;
    --v7;
  }
  while ( v7 );
  MiAcquireAddMemoryLocks((__int64)v16);
  ++qword_140E2ED38;
  if ( (a3 & 2) != 0 )
  {
    v9 = 0;
    if ( (a3 & 0x40) != 0 )
    {
      DanglingExtent = MiGetDanglingExtent(&v15);
      a1 = DanglingExtent;
      if ( DanglingExtent == -1LL )
        goto LABEL_27;
      v19 = v15;
      v17 = DanglingExtent;
      v18 = DanglingExtent + v15;
      v6 = (ULONG *)*((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(48 * DanglingExtent - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
      if ( v6 != &MiSystemPartition )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        MiReleaseAddMemoryLocks((__int64)v16);
        v21 = v6;
        MiAcquireAddMemoryLocks((__int64)v16);
        KeLeaveGuardedRegion();
      }
      v4 = v15;
    }
    goto LABEL_22;
  }
  if ( !(unsigned int)MiEntireRangeAlreadyExists(v17, v18) )
  {
    v9 = -1073741800;
    goto LABEL_27;
  }
  v9 = MiAcquireRemoveMemoryResources((__int64)v16);
  if ( v9 >= 0 )
  {
    MiReleaseAddMemoryLocks((__int64)v16);
    v9 = KeConfigureDynamicMemory(a1, v4 + a1 - 1, 32);
    MiAcquireAddMemoryLocks((__int64)v16);
    if ( v9 >= 0 )
    {
      v12 = v19;
      if ( (v20 & 0x80000) == 0 )
      {
        MiReduceCommitLimits((__int64)&MiSystemPartition, v19, v19);
        if ( (v20 & 0x400000) != 0 )
          v13 = 16;
        else
          v13 = 0;
        MiReturnCommit((__int64)&MiSystemPartition, v12, v13);
      }
      MiClearMirrorBitmaps(v17, v12);
      MiPerformMemoryChange((__int64)v16);
LABEL_22:
      MiUnmapPfns(v16);
      if ( (a3 & 2) == 0 )
      {
        MiNotifyMemoryChange((__int64)v16);
        if ( (a3 & 0x10000) != 0 )
        {
          MiPartitionDeleteMemoryNode((__int64)v6, a1, v4);
          MiHotAddHugeRange((_DWORD)v6, a1, v4, 0, 2 - ((a3 & 0x200) != 0), 1);
        }
        if ( (a3 & 0x100000) == 0 )
        {
          MiFlushEntireTbDueToAttributeChange();
          MiFlushCacheRange((_QWORD *)a1, v4);
        }
      }
    }
  }
LABEL_27:
  MiReturnAddMemoryResources((__int64)v16);
  if ( v9 >= 0 && (a3 & 0x10) == 0 && (a3 & 0x100002) == 0 )
    IoUpdateDumpPhysicalRanges();
  return (unsigned int)v9;
}
