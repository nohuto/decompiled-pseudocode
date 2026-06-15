/*
 * XREFs of ?AddData@?$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAXW4SpatialObjectCountTypes@@I_N1@Z @ 0x14003C970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAggregateTelemetryLazyUpdate<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::AddData(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        char a5)
{
  __int64 v8; // rdx

  if ( a4
    && *(_BYTE *)(a1 + 16)
    && GetTickCount64() - *(_QWORD *)(a1 + 40) > *(_QWORD *)(a1 + 32)
    && *(_QWORD *)(a1 + 32) )
  {
    LOBYTE(v8) = a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, v8);
  }
  CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::AddData(
    a1,
    a2,
    a3);
}
