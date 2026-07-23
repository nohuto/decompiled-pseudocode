/*
 * XREFs of SmPartitionCleanup @ 0x1407881C4
 * Callers:
 *     SmDeletePartition @ 0x140787F70 (SmDeletePartition.c)
 *     SmCreatePartition @ 0x140A3D854 (SmCreatePartition.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     SmKmStoreDereference @ 0x14034AECC (SmKmStoreDereference.c)
 *     SmFpCleanup @ 0x140396584 (SmFpCleanup.c)
 *     MmStoreReleaseResidentAvailableForRead @ 0x14044EEA4 (MmStoreReleaseResidentAvailableForRead.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405FDAE4 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmTerminateStoreProcess @ 0x140600ADC (SmTerminateStoreProcess.c)
 *     SmpKeyedStoreCtxCleanup @ 0x140600BA8 (SmpKeyedStoreCtxCleanup.c)
 *     SmHwAcceleratorPartitionMgrCleanup @ 0x14078D7BC (SmHwAcceleratorPartitionMgrCleanup.c)
 */

unsigned __int64 __fastcall SmPartitionCleanup(__int64 a1)
{
  int v1; // edx
  struct _PRIVILEGE_SET **v3; // rdi
  struct _PRIVILEGE_SET *v4; // rcx
  __int64 v5; // rax
  struct _PRIVILEGE_SET *v6; // rcx
  void *v7; // rcx
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 2272);
  if ( v1 != -1 )
    SmKmStoreDereference(a1, v1);
  SMKM_STORE_MGR<SM_TRAITS>::SmCleanup((_SLIST_HEADER *)a1);
  SmpKeyedStoreCtxCleanup(a1 + 2232);
  v3 = (struct _PRIVILEGE_SET **)(a1 + 2808);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (struct _PRIVILEGE_SET *)v3 )
      break;
    if ( (struct _PRIVILEGE_SET **)v4->Privilege[0].Luid != v3
      || (v5 = *(_QWORD *)&v4->PrivilegeCount, *(struct _PRIVILEGE_SET **)(*(_QWORD *)&v4->PrivilegeCount + 8LL) != v4) )
    {
      __fastfail(3u);
    }
    *v3 = (struct _PRIVILEGE_SET *)v5;
    *(_QWORD *)(v5 + 8) = v3;
    CmSiFreeMemory(v4);
  }
  v6 = *(struct _PRIVILEGE_SET **)(a1 + 2832);
  if ( v6 )
    CmSiFreeMemory(v6);
  v7 = *(void **)(a1 + 2848);
  if ( v7 )
    ObfDereferenceObject(v7);
  SmFpCleanup(a1 + 2880);
  SmFpCleanup(a1 + 3000);
  SmHwAcceleratorPartitionMgrCleanup(a1 + 3120, *(_QWORD *)(a1 + 2168));
  if ( *(_QWORD *)(a1 + 2160) )
    SmTerminateStoreProcess(a1);
  result = *(unsigned int *)(a1 + 2136);
  if ( (result & 0x10) != 0 )
    return MmStoreReleaseResidentAvailableForRead(*(ULONG ***)(a1 + 2096), 1LL);
  return result;
}
