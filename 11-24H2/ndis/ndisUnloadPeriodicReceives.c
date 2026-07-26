/*
 * XREFs of ndisUnloadPeriodicReceives @ 0x14018DAAC
 * Callers:
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x14018D7A4 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x14003FCA0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x14003FD30 (NdisAcquireRWLockWrite.c)
 *     NdisFreeRWLock @ 0x14004F170 (NdisFreeRWLock.c)
 *     NdisFreeNetBufferListPool @ 0x140062580 (NdisFreeNetBufferListPool.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

void ndisUnloadPeriodicReceives()
{
  void *v0; // rbx
  NDIS_HANDLE v1; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  if ( Lock )
  {
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    v1 = PoolHandle;
    if ( PoolHandle )
    {
      PoolHandle = 0LL;
      v0 = v1;
    }
    if ( ndisPeriodicReceives == 1 )
    {
      ndisPeriodicReceives = 0;
      ExDeleteNPagedLookasideList(&Lookaside);
      ExDeleteNPagedLookasideList(&stru_14011B5C0);
      memset(&Lookaside, 0, sizeof(Lookaside));
      memset(&stru_14011B5C0, 0, sizeof(stru_14011B5C0));
    }
    NdisReleaseRWLock(Lock, &LockState);
    NdisFreeRWLock(Lock);
    if ( v0 )
      NdisFreeNetBufferListPool(v0);
  }
  if ( ndisPerCpuPoisonPills )
  {
    ExFreePoolWithTag(ndisPerCpuPoisonPills, 0);
    ndisPerCpuPoisonPills = 0LL;
  }
  if ( qword_14011B508 )
  {
    ExFreePoolWithTag(qword_14011B508, 0);
    qword_14011B508 = 0LL;
  }
  if ( qword_14011B500 )
  {
    ExFreePoolWithTag(qword_14011B500, 0);
    qword_14011B500 = 0LL;
  }
  if ( qword_14011B4F8 )
  {
    ExFreePoolWithTag(qword_14011B4F8, 0);
    qword_14011B4F8 = 0LL;
  }
  if ( qword_14011B4F0 )
  {
    ExFreePoolWithTag(qword_14011B4F0, 0);
    qword_14011B4F0 = 0LL;
  }
}
