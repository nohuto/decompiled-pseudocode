/*
 * XREFs of MmPerformMemoryListCommand @ 0x140B6DB74
 * Callers:
 *     PfpLogScenarioEventCallback @ 0x140745B10 (PfpLogScenarioEventCallback.c)
 *     MmIssueMemoryListCommand @ 0x1407EDC20 (MmIssueMemoryListCommand.c)
 *     PfpPowerActionSleepSystemPhaseCallback @ 0x140B5AE30 (PfpPowerActionSleepSystemPhaseCallback.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140B5AEA0 (PfpPowerActionStartScenarioTracingCallback.c)
 *     PopVerifierFlushMemoryBeforeSleep @ 0x140B5F7B4 (PopVerifierFlushMemoryBeforeSleep.c)
 * Callees:
 *     MiPurgePartitionStandby @ 0x140220D50 (MiPurgePartitionStandby.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     MiPartitionObjectToPartition @ 0x14041217C (MiPartitionObjectToPartition.c)
 *     MiFlushAllPages @ 0x1404C8494 (MiFlushAllPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x1404F62AC (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x140678800 (MiEmptyAllWorkingSets.c)
 */

__int64 __fastcall MmPerformMemoryListCommand(int a1, ULONG **a2)
{
  ULONG *v3; // rax
  __int64 v4; // r8
  ULONG *v5; // rdi
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // edx
  int v12; // edx
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0;
  v3 = MiPartitionObjectToPartition(a2, 1, &v14);
  v5 = v3;
  if ( !a1 )
  {
    v12 = 0;
    goto LABEL_15;
  }
  v6 = a1 - 1;
  if ( !v6 )
  {
    v12 = 1;
LABEL_15:
    MiCaptureAllWorkingSetAccessBits((__int64)v3, v12);
    goto LABEL_16;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
        {
          v10 = -1073741637;
          goto LABEL_17;
        }
        v11 = 1;
      }
      else
      {
        v11 = 8;
      }
      MiPurgePartitionStandby((__int64)v3, v11, v4);
    }
    else
    {
      MiFlushAllPages((__int64)v3, 0, 8u);
    }
  }
  else
  {
    MiEmptyAllWorkingSets((__int64)v3);
  }
LABEL_16:
  v10 = 0;
LABEL_17:
  if ( v14 )
    PsDereferencePartition(*((_QWORD *)v5 + 23));
  return v10;
}
