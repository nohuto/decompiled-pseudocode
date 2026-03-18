/*
 * XREFs of PsGetNextPartition @ 0x1403D42FC
 * Callers:
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x1402EA170 (MiFreeExcessSegments.c)
 *     ExpCheckForWorker @ 0x1403D3B6C (ExpCheckForWorker.c)
 *     EtwpLogMemNodeInfo @ 0x1403D3EBC (EtwpLogMemNodeInfo.c)
 *     MiDistributeSystemCacheVaReductions @ 0x140672220 (MiDistributeSystemCacheVaReductions.c)
 *     MmEmptyAllWorkingSets @ 0x140678E84 (MmEmptyAllWorkingSets.c)
 *     MmSetTrimWhileAgingState @ 0x140678EB4 (MmSetTrimWhileAgingState.c)
 *     MmTrimFilePagesFromWorkingSets @ 0x140678F08 (MmTrimFilePagesFromWorkingSets.c)
 *     MmFlushAllPagesEx @ 0x14067A394 (MmFlushAllPagesEx.c)
 *     MiWakeAllZeroConductors @ 0x14068FF14 (MiWakeAllZeroConductors.c)
 *     MiSignalNewAcceleratorsAvailable @ 0x140690CD4 (MiSignalNewAcceleratorsAvailable.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1407BFBF0 (ExpNodeHotAddProcessorWorker.c)
 *     MmSetMinimumAgeRate @ 0x140A9B73C (MmSetMinimumAgeRate.c)
 *     MiMirrorBrownPhase @ 0x140B6CC0C (MiMirrorBrownPhase.c)
 * Callees:
 *     PsGetNextPartitionUnsafe @ 0x140246D98 (PsGetNextPartitionUnsafe.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1403D4B60 (PsReferencePartitionSafe.c)
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
