/*
 * XREFs of PsGetNextPartition @ 0x14026227C
 * Callers:
 *     ExpCheckForWorker @ 0x140261AEC (ExpCheckForWorker.c)
 *     EtwpLogMemNodeInfo @ 0x140261E3C (EtwpLogMemNodeInfo.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x14034B7B0 (MiFreeExcessSegments.c)
 *     MiDistributeSystemCacheVaReductions @ 0x1406733F0 (MiDistributeSystemCacheVaReductions.c)
 *     MmEmptyAllWorkingSets @ 0x14067A064 (MmEmptyAllWorkingSets.c)
 *     MmSetTrimWhileAgingState @ 0x14067A094 (MmSetTrimWhileAgingState.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x14067A0E8 (MmTrimFilePagesFromWorkingSets.c)
 *     MmFlushAllPagesEx @ 0x14067B574 (MmFlushAllPagesEx.c)
 *     MiWakeAllZeroConductors @ 0x140690FE4 (MiWakeAllZeroConductors.c)
 *     MiSignalNewAcceleratorsAvailable @ 0x140691DA4 (MiSignalNewAcceleratorsAvailable.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1407C0040 (ExpNodeHotAddProcessorWorker.c)
 *     MmSetMinimumAgeRate @ 0x140A96CAC (MmSetMinimumAgeRate.c)
 *     MiMirrorBrownPhase @ 0x140B6E4AC (MiMirrorBrownPhase.c)
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x1402194E8 (PsGetNextPartitionUnsafe.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
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
