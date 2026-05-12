/*
 * XREFs of StorpTelemetrySendUnitDeviceStatistics @ 0x1400BACBC
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x140038EE0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     McTemplateK0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_EtwWriteTransfer @ 0x1400ADD14 (McTemplateK0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_EtwWriteTransfer.c)
 *     StorpTelemetryDeviceStatisticsCommand @ 0x1400B33E0 (StorpTelemetryDeviceStatisticsCommand.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1400B4068 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1400B4554 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

void __fastcall StorpTelemetrySendUnitDeviceStatistics(__int64 a1)
{
  const char *v2; // rdi
  __int64 Pool; // rax
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r8
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  const char *v11; // rax
  int v12; // [rsp+78h] [rbp-108h]
  __int64 v13; // [rsp+100h] [rbp-80h]
  void *v14; // [rsp+108h] [rbp-78h]
  __int64 v15; // [rsp+110h] [rbp-70h]
  __int64 v16; // [rsp+118h] [rbp-68h]
  __int64 v17; // [rsp+120h] [rbp-60h]
  __int64 v18; // [rsp+128h] [rbp-58h]
  __int64 v19; // [rsp+130h] [rbp-50h]
  __int64 v20; // [rsp+138h] [rbp-48h]
  __int128 v21; // [rsp+140h] [rbp-40h]
  PVOID P; // [rsp+1B8h] [rbp+38h]

  v21 = 0LL;
  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 2120) & 4) != 0 )
    return;
  Pool = RaidAllocatePool(256LL, 4096LL, 1700028754LL, *(_QWORD *)(a1 + 8));
  P = (PVOID)Pool;
  if ( !Pool )
    return;
  v13 = Pool;
  v14 = (void *)(Pool + 512);
  v15 = Pool + 1024;
  v16 = Pool + 1536;
  v17 = Pool + 2048;
  v18 = Pool + 2560;
  v19 = Pool + 3072;
  v20 = Pool + 3584;
  v4 = StorpTelemetryDeviceStatisticsCommand(a1, Pool, 0LL);
  if ( v4 < 0 )
  {
    if ( v4 != -1073741670 )
    {
      v5 = *(_DWORD *)(a1 + 2120);
      if ( (v5 & 1) == 0 )
        *(_DWORD *)(a1 + 2120) = v5 | 4;
    }
    goto LABEL_61;
  }
  if ( *(_BYTE *)(v13 + 8) <= 1u )
    goto LABEL_61;
  v6 = 0;
  while ( v6 <= 7 )
  {
    v7 = *(unsigned __int8 *)(v6 + v13 + 9);
    switch ( *(_BYTE *)(v6 + v13 + 9) )
    {
      case 1:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, (__int64)v14, v7) >= 0 )
        {
          LOWORD(v21) = 88;
          break;
        }
        v8 = v14;
        goto LABEL_37;
      case 2:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v15, v7) < 0 )
        {
          v8 = (void *)v15;
          goto LABEL_37;
        }
        WORD1(v21) = 24;
        break;
      case 3:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v16, v7) < 0 )
        {
          v8 = (void *)v16;
          goto LABEL_37;
        }
        WORD2(v21) = 72;
        break;
      case 4:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v17, v7) < 0 )
        {
          v8 = (void *)v17;
          goto LABEL_37;
        }
        WORD3(v21) = 24;
        break;
      case 5:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v18, v7) < 0 )
        {
          v8 = (void *)v18;
          goto LABEL_37;
        }
        WORD4(v21) = 112;
        break;
      case 6:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v19, v7) < 0 )
        {
          v8 = (void *)v19;
          goto LABEL_37;
        }
        WORD5(v21) = 32;
        break;
      case 7:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v20, v7) < 0 )
        {
          v8 = (void *)v20;
LABEL_37:
          memset_0(v8, 0, 0x200uLL);
          break;
        }
        WORD6(v21) = 16;
        break;
    }
    if ( ++v6 >= *(unsigned __int8 *)(v13 + 8) )
      break;
  }
  if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
    || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
  {
    goto LABEL_51;
  }
  if ( (*(_DWORD *)(a1 + 2120) & 0x20) != 0 )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( *(_BYTE *)(a1 + 2124) )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( g_StorpTraceLoggingCriticalEventEnabled )
    StorpTelemetryLogUnitDeviceStatisticsMeasures(a1);
  else
LABEL_51:
    StorpTelemetryLogUnitDeviceStatisticsCriticalData(a1);
  v9 = *(_QWORD *)(a1 + 160);
  if ( v9 )
  {
    v2 = (const char *)(v9 + 90);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 152);
    if ( v10 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 608LL) + 184LL) & 0x40) != 0 )
      v2 = (const char *)(v10 + 41);
  }
  if ( (byte_140171464 & 0x40) != 0 )
  {
    v11 = (const char *)&word_140150F48;
    if ( v2 )
      v11 = v2;
    McTemplateK0quuujjzsssstxqqbr14qbr16qbr18qbr20qbr22qbr24qbr26_EtwWriteTransfer(
      a1,
      WORD5(v21),
      WORD4(v21),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      a1 + 2104,
      *(_QWORD *)(a1 + 24) + 5064LL,
      *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4720LL),
      (const char *)(a1 + 168),
      (const char *)(a1 + 177),
      (const char *)(a1 + 242),
      v11,
      *(_BYTE *)(a1 + 506) & 1,
      v12,
      *(_WORD *)v13,
      (unsigned __int16)v21,
      (__int64)v14,
      WORD1(v21),
      v15,
      WORD2(v21),
      v16,
      WORD3(v21),
      v17,
      WORD4(v21),
      v18,
      WORD5(v21),
      v19,
      WORD6(v21),
      v20);
  }
LABEL_61:
  ExFreePoolWithTag(P, 0x65546152u);
}
