/*
 * XREFs of ??0CSpatialAudioResourceManagerTraceLogger@@QEAA@XZ @ 0x180123E04
 * Callers:
 *     ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x18011F954 (--0CSpatialAudioResourceManager@Sarm@@QEAA@XZ.c)
 *     ??0CExclusiveModeListener@@QEAA@XZ @ 0x18013B0AC (--0CExclusiveModeListener@@QEAA@XZ.c)
 * Callees:
 *     ??0?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@QEAA@PEAV?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@_K11@Z @ 0x180123D5C (--0-$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@QEAA@PEAV-$CAggregateValuesClu.c)
 */

// Hidden C++ exception states: #wind=1
CSpatialAudioResourceManagerTraceLogger *__fastcall CSpatialAudioResourceManagerTraceLogger::CSpatialAudioResourceManagerTraceLogger(
        CSpatialAudioResourceManagerTraceLogger *this)
{
  *(_QWORD *)this = &CSpatialAudioResourceManagerTraceLogger::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = &g_SarmTelemetryProvider;
  *((_QWORD *)this + 6) = &GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 1) = &CSpatialAudioResourceManagerTraceLogger::CSarmErrorEventValues::`vftable';
  CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>::CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>(
    (__int64)this + 72,
    (__int64)this + 8);
  return this;
}
