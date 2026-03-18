/*
 * XREFs of FsRtlpCancelReadOnlyOplockIrp @ 0x14057D7A4
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1404E5DD0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x14057D524 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpReadOnlyOplockIrpCancelRoutine @ 0x14057DFC0 (FsRtlpReadOnlyOplockIrpCancelRoutine.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404A9C7C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpComputeShareableOplockState @ 0x1404E19F4 (FsRtlpComputeShareableOplockState.c)
 */

void __fastcall FsRtlpCancelReadOnlyOplockIrp(__int64 a1, char a2)
{
  __int64 v3; // rdi
  char v4; // r14
  __int64 *i; // rbx

  v3 = *(_QWORD *)(a1 + 56);
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a1 + 69));
  v4 = 0;
  if ( !a2 )
    ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(v3 + 152));
  for ( i = *(__int64 **)(v3 + 40); i != (__int64 *)(v3 + 40); i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i - 100) )
    {
      i = (__int64 *)i[1];
      FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, -1073741536, 0, v3);
      v4 = 1;
    }
  }
  if ( v4 )
    FsRtlpComputeShareableOplockState((__int64 *)v3);
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v3 + 152));
}
