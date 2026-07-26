/*
 * XREFs of ndisUnloadPeriodicReceives @ 0x140198AE4
 * Callers:
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1401987DC (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     NdisFreeRWLock @ 0x1400171E0 (NdisFreeRWLock.c)
 *     NdisReleaseRWLock @ 0x140043190 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x140043220 (NdisAcquireRWLockWrite.c)
 *     NdisFreeNetBufferListPool @ 0x14007E040 (NdisFreeNetBufferListPool.c)
 *     memset @ 0x1400EE380 (memset.c)
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
      ExDeleteNPagedLookasideList(&stru_140125600);
      memset(&Lookaside, 0, sizeof(Lookaside));
      memset(&stru_140125600, 0, sizeof(stru_140125600));
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
  if ( qword_140125548 )
  {
    ExFreePoolWithTag(qword_140125548, 0);
    qword_140125548 = 0LL;
  }
  if ( qword_140125540 )
  {
    ExFreePoolWithTag(qword_140125540, 0);
    qword_140125540 = 0LL;
  }
  if ( qword_140125538 )
  {
    ExFreePoolWithTag(qword_140125538, 0);
    qword_140125538 = 0LL;
  }
  if ( qword_140125530 )
  {
    ExFreePoolWithTag(qword_140125530, 0);
    qword_140125530 = 0LL;
  }
}
