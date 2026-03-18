/*
 * XREFs of RtlNumberOfSetBits @ 0x14042B480
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14037EFFC (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x14038D194 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     HvpGenerateLogEntryDirtyData @ 0x14042AFCC (HvpGenerateLogEntryDirtyData.c)
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x14042B190 (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     RtlNumberOfClearBits @ 0x14042B450 (RtlNumberOfClearBits.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140449D18 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404D9218 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407E37DC (HvpBuildMapForMemoryBackedHive.c)
 *     HvpApplyLegacyLogFile @ 0x1407E6070 (HvpApplyLegacyLogFile.c)
 *     PspQueryRateControlHistory @ 0x1408EC2DC (PspQueryRateControlHistory.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14095E9DC (EtwQueryPerformanceTraceInformation.c)
 *     HvFoldBackUnreconciledData @ 0x14097C368 (HvFoldBackUnreconciledData.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 *     HvpGenerateLogEntry @ 0x14097EF08 (HvpGenerateLogEntry.c)
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 *     HvWriteHivePrimaryFile @ 0x140982C34 (HvWriteHivePrimaryFile.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409BCF98 (PopEvaluateGlobalUserStatus.c)
 *     SepAddLuidToIndexEntry @ 0x140A330CC (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140A4BEEC (SepGetLowBoxNumberEntry.c)
 *     HvFreeHivePartial @ 0x140A4FDCC (HvFreeHivePartial.c)
 *     MiReleaseDriverPtes @ 0x140A67CE4 (MiReleaseDriverPtes.c)
 *     HvpPerformLogFileRecovery @ 0x140AB060C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberOfSetBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int SizeOfBitMap; // r15d
  ULONG v2; // r8d
  unsigned int *Buffer; // rax
  unsigned int v4; // r10d
  unsigned int v5; // ebx
  int v6; // r11d
  unsigned int v7; // ebp
  unsigned int v8; // r9d
  int v9; // r14d
  unsigned int v10; // r11d
  int i; // esi
  char v12; // dl
  unsigned int v13; // ecx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  int v17; // r10d
  char v18; // dl

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v2 = 0;
  Buffer = BitMapHeader->Buffer;
  v4 = BitMapHeader->SizeOfBitMap >> 3;
  v5 = BitMapHeader->SizeOfBitMap & 7;
  v6 = (unsigned __int8)Buffer & 7;
  v7 = v4 + (v5 != 0);
  if ( 8 - (unsigned __int64)((__int64)BitMapHeader->Buffer & 7) <= (unsigned __int64)BitMapHeader->SizeOfBitMap >> 3 )
  {
    v8 = 8 - v6;
    v17 = ((_BYTE)v4 - (8 - (_BYTE)v6)) & 7;
    v9 = v17 + 1;
    if ( !v5 )
      v9 = v17;
    v10 = v7 - v9 - v8;
  }
  else
  {
    v8 = v4 + ((BitMapHeader->SizeOfBitMap & 7) != 0);
    v9 = 0;
    v10 = 0;
  }
  for ( i = 0; v8; --v8 )
  {
    v12 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( i == v7 - 1 && v5 )
      v12 &= byte_14002B770[SizeOfBitMap & 7];
    ++i;
    v2 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v12);
  }
  if ( v10 )
  {
    v13 = ((v10 - 1) >> 3) + 1;
    v14 = v13;
    i += 8 * v13;
    do
    {
      v15 = *(_QWORD *)Buffer;
      Buffer += 2;
      v2 += __popcnt(v15);
      --v14;
    }
    while ( v14 );
  }
  for ( ; v9; --v9 )
  {
    v18 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( i == v7 - 1 && (SizeOfBitMap & 7) != 0 )
      v18 &= byte_14002B770[SizeOfBitMap & 7];
    ++i;
    v2 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v18);
  }
  return v2;
}
