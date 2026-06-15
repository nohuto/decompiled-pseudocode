/*
 * XREFs of ??_GCSLock@@QEAAPEAXI@Z @ 0x1400862CC
 * Callers:
 *     ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140045F50 (--1-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent.c)
 *     ??1?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAA@XZ @ 0x140055A9C (--1-$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger.c)
 *     ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4SpatialCpErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x1400583B0 (--1-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SpatialCpErrorEvent@@PEAI@@W4Spatial.c)
 *     ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140058410 (--1-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4Spatia.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CSLock::`scalar deleting destructor'(struct _RTL_CRITICAL_SECTION *this)
{
  DeleteCriticalSection(this);
  operator delete(this);
  return this;
}
