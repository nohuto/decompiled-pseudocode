/*
 * XREFs of PsGetNextPartitionUnsafe @ 0x14035E34C
 * Callers:
 *     CcForEachPartition @ 0x14035EBE4 (CcForEachPartition.c)
 *     CcGetDirtyPages @ 0x14035ED90 (CcGetDirtyPages.c)
 *     CcCoalescingCallBack @ 0x1403A7700 (CcCoalescingCallBack.c)
 *     PsGetNextPartition @ 0x1403BE1E8 (PsGetNextPartition.c)
 *     CcIsThereDirtyData @ 0x14047FB20 (CcIsThereDirtyData.c)
 *     ExSwapinWorkerThreads @ 0x140A4E204 (ExSwapinWorkerThreads.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140299100 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 */

_UNKNOWN **__fastcall PsGetNextPartitionUnsafe(_QWORD *Object)
{
  _UNKNOWN **v2; // rsi
  KIRQL v3; // al
  _UNKNOWN **v4; // rbx
  KIRQL v5; // r14

  v2 = 0LL;
  v3 = ExAcquireSpinLockShared(&PspActivePartitionListLock);
  v4 = (_UNKNOWN **)PspActivePartitionListHead;
  v5 = v3;
  if ( Object )
    v4 = (_UNKNOWN **)Object[7];
  while ( v4 != &PspActivePartitionListHead )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v4 - 7), 0x6E457350u) )
    {
      v2 = v4 - 7;
      break;
    }
    v4 = (_UNKNOWN **)*v4;
  }
  ExReleaseSpinLockShared(&PspActivePartitionListLock, v5);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v2;
}
