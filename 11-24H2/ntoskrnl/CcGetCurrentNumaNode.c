/*
 * XREFs of CcGetCurrentNumaNode @ 0x140485F8C
 * Callers:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14049AF6C (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcAdjustWriteBehindThreadPool @ 0x140577824 (CcAdjustWriteBehindThreadPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetCurrentNumaNode(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] % (unsigned int)CcNumberNumaNodes;
  if ( CcEnablePerVolumeLazyWriter )
    return *(_QWORD *)(*(_QWORD *)(a2 + 600) + 8 * v3 + 64);
  else
    return *(_QWORD *)(a1 + 8 * v3 + 128);
}
