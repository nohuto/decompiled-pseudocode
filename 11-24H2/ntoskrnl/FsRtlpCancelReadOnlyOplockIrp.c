/*
 * XREFs of FsRtlpCancelReadOnlyOplockIrp @ 0x140580BC0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1404E4EB0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140580814 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpReadOnlyOplockIrpCancelRoutine @ 0x140581770 (FsRtlpReadOnlyOplockIrpCancelRoutine.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     FsRtlpComputeShareableOplockState @ 0x140330A70 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403DC8D4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
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
    FsRtlpComputeShareableOplockState(v3);
  if ( !a2 )
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v3 + 152));
}
