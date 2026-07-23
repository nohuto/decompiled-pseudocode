/*
 * XREFs of RtlNumberOfSetBits @ 0x140377880
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1403767E4 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     HvpGenerateLogEntryDirtyData @ 0x1403773D0 (HvpGenerateLogEntryDirtyData.c)
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140377594 (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     RtlNumberOfClearBits @ 0x140377850 (RtlNumberOfClearBits.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140378D1C (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x140386AD4 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404D2668 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407E3D2C (HvpBuildMapForMemoryBackedHive.c)
 *     HvpApplyLegacyLogFile @ 0x1407E6640 (HvpApplyLegacyLogFile.c)
 *     PspQueryRateControlHistory @ 0x14085DB0C (PspQueryRateControlHistory.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14094649C (EtwQueryPerformanceTraceInformation.c)
 *     HvFoldBackUnreconciledData @ 0x140964B78 (HvFoldBackUnreconciledData.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 *     HvpGenerateLogEntry @ 0x140967718 (HvpGenerateLogEntry.c)
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvWriteHivePrimaryFile @ 0x14096B444 (HvWriteHivePrimaryFile.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409A35E8 (PopEvaluateGlobalUserStatus.c)
 *     SepAddLuidToIndexEntry @ 0x140A270DC (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140A42C4C (SepGetLowBoxNumberEntry.c)
 *     HvFreeHivePartial @ 0x140A46B7C (HvFreeHivePartial.c)
 *     MiReleaseDriverPtes @ 0x140A611E4 (MiReleaseDriverPtes.c)
 *     HvpPerformLogFileRecovery @ 0x140AAB57C (HvpPerformLogFileRecovery.c)
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
      v12 &= byte_14002BBD0[SizeOfBitMap & 7];
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
      v18 &= byte_14002BBD0[SizeOfBitMap & 7];
    ++i;
    v2 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v18);
  }
  return v2;
}
