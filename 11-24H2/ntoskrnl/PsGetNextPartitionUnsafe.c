/*
 * XREFs of PsGetNextPartitionUnsafe @ 0x1402194E8
 * Callers:
 *     CcForEachPartition @ 0x14021AA70 (CcForEachPartition.c)
 *     CcGetDirtyPages @ 0x14021ABB0 (CcGetDirtyPages.c)
 *     PsGetNextPartition @ 0x14026227C (PsGetNextPartition.c)
 *     CcCoalescingCallBack @ 0x140263B80 (CcCoalescingCallBack.c)
 *     CcIsThereDirtyData @ 0x14047B410 (CcIsThereDirtyData.c)
 *     ExSwapinWorkerThreads @ 0x140A48C04 (ExSwapinWorkerThreads.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
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
    if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v4 - 7, 1850045264LL) )
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
