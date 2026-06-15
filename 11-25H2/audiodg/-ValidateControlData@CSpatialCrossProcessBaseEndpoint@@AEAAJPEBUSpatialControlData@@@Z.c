/*
 * XREFs of ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUSpatialControlData@@@Z @ 0x14008F5BC
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14008EADC (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14008F138 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?RegisterErrorEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXW4SpatialCpErrorEvent@@I@Z @ 0x14008DAF4 (-RegisterErrorEvent@CSpatialCrossProcessEndpointTraceLogger@@QEAAXW4SpatialCpErrorEvent@@I@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14008DBB0 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ValidateControlData(
        CSpatialCrossProcessBaseEndpoint *this,
        const struct SpatialControlData *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( !a2 )
  {
    v4 = -2147467261;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::ValidateControlData", 562, v4, a4);
    CSpatialCrossProcessEndpointTraceLogger::RegisterErrorEvent((__int64)this + 784, 2LL);
    return v4;
  }
  if ( *(_DWORD *)a2 != 806
    || *((_DWORD *)a2 + 1) != 1396785988
    || !(*((_DWORD *)a2 + 130) + *((_DWORD *)a2 + 131))
    || *((_DWORD *)a2 + 132) < 0x340u )
  {
    v4 = -2005139387;
    goto LABEL_8;
  }
  return v4;
}
