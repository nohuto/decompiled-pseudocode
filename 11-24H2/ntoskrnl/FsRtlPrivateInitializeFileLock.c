/*
 * XREFs of FsRtlPrivateInitializeFileLock @ 0x1402491EC
 * Callers:
 *     FsRtlPrivateLock @ 0x140248460 (FsRtlPrivateLock.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140248B90 (ExAllocateFromNPagedLookasideList.c)
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 */

char __fastcall FsRtlPrivateInitializeFileLock(_QWORD *a1, char a2)
{
  char v4; // bl
  _QWORD *v5; // rax

  ExAcquireFastMutex(&FsRtlCreateLockInfo);
  v4 = 0;
  if ( a1[3] )
    goto LABEL_4;
  v5 = ExAllocateFromNPagedLookasideList(&FsRtlLockInfoLookasideList);
  if ( v5 )
  {
    *v5 = -1LL;
    v5[3] = 0LL;
    v5[4] = 0LL;
    v5[5] = 0LL;
    v5[6] = 0LL;
    v5[7] = 0LL;
    v5[1] = *a1;
    v5[2] = a1[1];
    a1[7] = 0LL;
    a1[10] = 0LL;
    a1[3] = v5;
LABEL_4:
    v4 = 1;
    goto LABEL_7;
  }
  if ( !a2 )
    RtlRaiseStatus(3221225626LL);
LABEL_7:
  KeReleaseGuardedMutex(&FsRtlCreateLockInfo);
  return v4;
}
