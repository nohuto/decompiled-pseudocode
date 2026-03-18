/*
 * XREFs of RtlNumberOfSetBits @ 0x140395F40
 * Callers:
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x140333444 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1403941C8 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     HvpGenerateLogEntryDirtyData @ 0x140395A94 (HvpGenerateLogEntryDirtyData.c)
 *     ?StGetStatsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x140395C58 (-StGetStatsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     RtlNumberOfClearBits @ 0x140395F10 (RtlNumberOfClearBits.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140396644 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404DA268 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407D3EFC (HvpBuildMapForMemoryBackedHive.c)
 *     HvpApplyLegacyLogFile @ 0x1407D61EC (HvpApplyLegacyLogFile.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14082425C (EtwQueryPerformanceTraceInformation.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     PspQueryRateControlHistory @ 0x1408DCF0C (PspQueryRateControlHistory.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409651E8 (PopEvaluateGlobalUserStatus.c)
 *     HvWriteHivePrimaryFile @ 0x1409F7344 (HvWriteHivePrimaryFile.c)
 *     HvpAddBin @ 0x1409F795C (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x1409FA6B8 (HvpPerformLogFileRecovery.c)
 *     HvpGenerateLogEntry @ 0x140A0C280 (HvpGenerateLogEntry.c)
 *     SepAddLuidToIndexEntry @ 0x140A0D124 (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140A0DE40 (SepGetLowBoxNumberEntry.c)
 *     HvFreeHivePartial @ 0x140A4CAE0 (HvFreeHivePartial.c)
 *     MiReleaseDriverPtes @ 0x140A651C4 (MiReleaseDriverPtes.c)
 *     HvFoldBackUnreconciledData @ 0x140AA54A8 (HvFoldBackUnreconciledData.c)
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
      v12 &= byte_14002B070[SizeOfBitMap & 7];
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
      v18 &= byte_14002B070[SizeOfBitMap & 7];
    ++i;
    v2 += *((unsigned __int8 *)RtlpBitsClearTotal + (unsigned __int8)~v18);
  }
  return v2;
}
