/*
 * XREFs of PsGetNextPartition @ 0x1403BE1E8
 * Callers:
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     ExpCheckForWorker @ 0x1403BD890 (ExpCheckForWorker.c)
 *     EtwpLogMemNodeInfo @ 0x1403BDD4C (EtwpLogMemNodeInfo.c)
 *     MiFreeExcessSegments @ 0x1403BE140 (MiFreeExcessSegments.c)
 *     MiDistributeSystemCacheVaReductions @ 0x140666770 (MiDistributeSystemCacheVaReductions.c)
 *     MmEmptyAllWorkingSets @ 0x14066D578 (MmEmptyAllWorkingSets.c)
 *     MmSetTrimWhileAgingState @ 0x14066D5A8 (MmSetTrimWhileAgingState.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14066D608 (MmTrimFilePagesFromWorkingSets.c)
 *     MmFlushAllPagesEx @ 0x14066EAF4 (MmFlushAllPagesEx.c)
 *     MiWakeAllZeroConductors @ 0x140684AB4 (MiWakeAllZeroConductors.c)
 *     MiSignalNewAcceleratorsAvailable @ 0x140685874 (MiSignalNewAcceleratorsAvailable.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1407B0420 (ExpNodeHotAddProcessorWorker.c)
 *     MmSetMinimumAgeRate @ 0x140A95B2C (MmSetMinimumAgeRate.c)
 *     MiMirrorBrownPhase @ 0x140B5DB2C (MiMirrorBrownPhase.c)
 * Callees:
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     PsGetNextPartitionUnsafe @ 0x14035E34C (PsGetNextPartitionUnsafe.c)
 *     PsReferencePartitionSafe @ 0x1403BE990 (PsReferencePartitionSafe.c)
 */

_QWORD *__fastcall PsGetNextPartition(_QWORD *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rdi
  _UNKNOWN **NextPartitionUnsafe; // rax
  _QWORD *v5; // r8

  v1 = (__int64)a1;
  v2 = 0LL;
  while ( 1 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(a1);
    if ( !NextPartitionUnsafe )
      break;
    if ( (unsigned __int8)PsReferencePartitionSafe(NextPartitionUnsafe) )
    {
      v2 = v5;
      break;
    }
    a1 = v5;
  }
  if ( v1 )
    PsDereferencePartition(v1);
  return v2;
}
