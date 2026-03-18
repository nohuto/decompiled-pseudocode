/*
 * XREFs of MmPerformMemoryListCommand @ 0x140B5EAC0
 * Callers:
 *     PfpLogScenarioEventCallback @ 0x140739AF0 (PfpLogScenarioEventCallback.c)
 *     MmIssueMemoryListCommand @ 0x1407DDD80 (MmIssueMemoryListCommand.c)
 *     PfpPowerActionSleepSystemPhaseCallback @ 0x140B4AEC0 (PfpPowerActionSleepSystemPhaseCallback.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140B4AF30 (PfpPowerActionStartScenarioTracingCallback.c)
 *     PopVerifierFlushMemoryBeforeSleep @ 0x140B4F674 (PopVerifierFlushMemoryBeforeSleep.c)
 * Callees:
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     MiPurgePartitionStandby @ 0x140342C30 (MiPurgePartitionStandby.c)
 *     MiPartitionObjectToPartition @ 0x1404156EC (MiPartitionObjectToPartition.c)
 *     MiFlushAllPages @ 0x1404C7844 (MiFlushAllPages.c)
 *     MiCaptureAllWorkingSetAccessBits @ 0x1404F3A58 (MiCaptureAllWorkingSetAccessBits.c)
 *     MiEmptyAllWorkingSets @ 0x14066CEF4 (MiEmptyAllWorkingSets.c)
 */

__int64 __fastcall MmPerformMemoryListCommand(int a1, ULONG **a2)
{
  ULONG *v3; // rax
  ULONG *v4; // rdi
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // edx
  int v11; // edx
  char v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0;
  v3 = MiPartitionObjectToPartition(a2, 1, &v13);
  v4 = v3;
  if ( !a1 )
  {
    v11 = 0;
    goto LABEL_15;
  }
  v5 = a1 - 1;
  if ( !v5 )
  {
    v11 = 1;
LABEL_15:
    MiCaptureAllWorkingSetAccessBits((__int64)v3, v11);
    goto LABEL_16;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          v9 = -1073741637;
          goto LABEL_17;
        }
        v10 = 1;
      }
      else
      {
        v10 = 8;
      }
      MiPurgePartitionStandby((__int64)v3, v10);
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
  v9 = 0;
LABEL_17:
  if ( v13 )
    PsDereferencePartition(*((_QWORD *)v4 + 23));
  return v9;
}
