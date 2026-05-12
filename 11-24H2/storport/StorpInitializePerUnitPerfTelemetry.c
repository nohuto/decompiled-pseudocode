/*
 * XREFs of StorpInitializePerUnitPerfTelemetry @ 0x14018C6D0
 * Callers:
 *     StorpInitializeUnitTelemetry @ 0x1400532FC (StorpInitializeUnitTelemetry.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer @ 0x1400AE888 (McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer.c)
 *     StorpUninitializePerUnitPerfTelemetry @ 0x1400BD0A0 (StorpUninitializePerUnitPerfTelemetry.c)
 *     StorpInitializePerUnitIoSizeDistribution @ 0x14018C604 (StorpInitializePerUnitIoSizeDistribution.c)
 */

__int64 __fastcall StorpInitializePerUnitPerfTelemetry(__int64 a1)
{
  unsigned int v1; // edi
  __int64 Pool; // rax
  __int64 v4; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v6; // r9
  __int64 v7; // rax
  bool v8; // zf
  int v9; // ecx
  __int64 v11; // [rsp+78h] [rbp-50h]

  v1 = 0;
  *(_QWORD *)(a1 + 2376) = 0LL;
  *(_QWORD *)(a1 + 2400) = 0LL;
  *(_QWORD *)(a1 + 2384) = 0LL;
  *(_QWORD *)(a1 + 2408) = 0LL;
  *(_QWORD *)(a1 + 2416) = 0LL;
  *(_QWORD *)(a1 + 2456) = 0LL;
  *(_QWORD *)(a1 + 2464) = 0LL;
  *(_QWORD *)(a1 + 3336) = 0LL;
  *(_QWORD *)(a1 + 3344) = 0LL;
  *(_QWORD *)(a1 + 2296) = 0LL;
  *(_QWORD *)(a1 + 2304) = 0LL;
  *(_QWORD *)(a1 + 2312) = 0LL;
  *(_QWORD *)(a1 + 2320) = 0LL;
  *(_QWORD *)(a1 + 2328) = 0LL;
  *(_QWORD *)(a1 + 2336) = 0LL;
  *(_QWORD *)(a1 + 2344) = 0LL;
  *(_QWORD *)(a1 + 2352) = 0LL;
  *(_QWORD *)(a1 + 2360) = 0LL;
  *(_DWORD *)(a1 + 2368) = 0;
  if ( (_DWORD)Size && g_RaidNumberProcessors )
  {
    Pool = RaidAllocatePool(72LL, (unsigned int)Size, 1700028754LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 2376) = Pool;
    if ( Pool
      && (v4 = RaidAllocatePool(72LL, (unsigned int)dword_140170E38, 1700028754LL, *(_QWORD *)(a1 + 8)),
          (*(_QWORD *)(a1 + 2400) = v4) != 0LL) )
    {
      if ( UseQPCTime )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      v6 = *(_QWORD *)(a1 + 8);
      *(LARGE_INTEGER *)(a1 + 2392) = PerformanceCounter;
      v7 = RaidAllocatePool(72LL, (unsigned int)dword_140170E54, 1700028754LL, v6);
      v8 = g_StorpTraceLoggingIoSizeDistributionEnabled == 0;
      *(_QWORD *)(a1 + 2416) = v7;
      *(_OWORD *)(a1 + 2424) = 0LL;
      *(_OWORD *)(a1 + 2440) = 0LL;
      if ( !v8 )
      {
        v9 = StorpInitializePerUnitIoSizeDistribution(a1);
        if ( v9 )
        {
          if ( (byte_140171466 & 2) != 0 )
            McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer(
              a1 + 242,
              a1 + 177,
              a1 + 168,
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
              *(_BYTE *)(a1 + 506) & 1,
              L"Initializing IO size distribution telemetry failed.",
              v11,
              v9);
        }
        else
        {
          return 0;
        }
      }
    }
    else
    {
      v1 = -1073741801;
      StorpUninitializePerUnitPerfTelemetry((_QWORD *)a1);
    }
  }
  return v1;
}
