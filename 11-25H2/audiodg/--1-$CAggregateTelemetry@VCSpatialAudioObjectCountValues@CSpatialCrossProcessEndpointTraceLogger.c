/*
 * XREFs of ??1?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAA@XZ @ 0x140055A9C
 * Callers:
 *     ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140055A28 (--1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 *     ??1?$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAA@XZ @ 0x140058984 (--1-$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointT.c)
 *     ??_G?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAPEAXI@Z @ 0x14008CEB0 (--_G-$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogge.c)
 *     ??_E?$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAPEAXI@Z @ 0x14008CF70 (--_E-$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpoint.c)
 * Callees:
 *     ?Flush@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140045FC0 (-Flush@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchE.c)
 *     ??_GCSLock@@QEAAPEAXI@Z @ 0x1400862CC (--_GCSLock@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void *__fastcall CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::~CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>(
        __int64 a1)
{
  void *result; // rax
  unsigned int v3; // edx
  CSLock *v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rcx

  *(_QWORD *)a1 = &CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::`vftable';
  result = (void *)CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Flush((_BYTE *)a1);
  v4 = *(CSLock **)(a1 + 24);
  if ( v4 )
  {
    result = CSLock::`scalar deleting destructor'(v4, v3);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v5 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v5 )
    {
      result = (void *)(**v5)(v5, 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
  return result;
}
