/*
 * XREFs of StorpInitializeUnitTelemetry @ 0x1400532FC
 * Callers:
 *     RaidStartUnit @ 0x1400532A4 (RaidStartUnit.c)
 * Callees:
 *     McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer @ 0x1400AE888 (McTemplateK0quuujjzssstzzxzxzxzx_EtwWriteTransfer.c)
 *     StorpUninitializePerUnitPerfTelemetry @ 0x1400BD0A0 (StorpUninitializePerUnitPerfTelemetry.c)
 *     StorpInitializePerUnitPerfTelemetry @ 0x14018C6D0 (StorpInitializePerUnitPerfTelemetry.c)
 */

__int64 __fastcall StorpInitializeUnitTelemetry(__int64 a1)
{
  int v1; // esi
  bool v3; // zf
  __int64 result; // rax

  v1 = 0;
  v3 = g_StorpTraceLoggingPerformanceEnabled == 0;
  *(_QWORD *)(a1 + 2128) = 0LL;
  *(_QWORD *)(a1 + 2152) = 0LL;
  *(_QWORD *)(a1 + 2160) = 0LL;
  *(_QWORD *)(a1 + 2192) = 1LL;
  *(_QWORD *)(a1 + 2136) = 0LL;
  *(_QWORD *)(a1 + 2144) = 0LL;
  *(_QWORD *)(a1 + 2168) = 0LL;
  *(_QWORD *)(a1 + 2176) = 0LL;
  *(_QWORD *)(a1 + 2184) = 0LL;
  *(_DWORD *)(a1 + 2200) = 0;
  *(_QWORD *)(a1 + 2208) = 0LL;
  *(_QWORD *)(a1 + 2216) = 0LL;
  *(_QWORD *)(a1 + 2224) = 0LL;
  if ( !v3 )
  {
    if ( (unsigned int)StorpInitializePerUnitPerfTelemetry() )
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
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4720LL),
          a1 + 168,
          a1 + 177,
          a1 + 242,
          *(_BYTE *)(a1 + 506) & 1,
          (__int64)L"Initializing performance telemetry failed.");
      StorpUninitializePerUnitPerfTelemetry(a1);
    }
    else
    {
      v1 = 1;
    }
  }
  result = 2372LL;
  *(_DWORD *)(a1 + 2372) = v1;
  return result;
}
