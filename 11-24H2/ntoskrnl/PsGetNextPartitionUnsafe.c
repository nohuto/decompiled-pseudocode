/*
 * XREFs of PsGetNextPartitionUnsafe @ 0x140246D98
 * Callers:
 *     PsGetNextPartition @ 0x1403D42FC (PsGetNextPartition.c)
 *     CcCoalescingCallBack @ 0x14043C700 (CcCoalescingCallBack.c)
 *     CcForEachPartition @ 0x140470EE8 (CcForEachPartition.c)
 *     CcGetDirtyPages @ 0x140471FC0 (CcGetDirtyPages.c)
 *     CcIsThereDirtyData @ 0x140480940 (CcIsThereDirtyData.c)
 *     ExSwapinWorkerThreads @ 0x140A51B34 (ExSwapinWorkerThreads.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x140246D40 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14033E7D0 (ObReferenceObjectSafeWithTag.c)
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
