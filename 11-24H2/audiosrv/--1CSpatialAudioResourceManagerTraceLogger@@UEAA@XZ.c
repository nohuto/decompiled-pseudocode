/*
 * XREFs of ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x180123F54
 * Callers:
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x18011FC28 (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 *     ??_GCSpatialAudioResourceManagerTraceLogger@@UEAAPEAXI@Z @ 0x180124090 (--_GCSpatialAudioResourceManagerTraceLogger@@UEAAPEAXI@Z.c)
 *     ??1CExclusiveModeListener@@UEAA@XZ @ 0x18014BBE4 (--1CExclusiveModeListener@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x180123EF0 (--1-$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 */

void __fastcall CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger(
        CSpatialAudioResourceManagerTraceLogger *this)
{
  *(_QWORD *)this = &CSpatialAudioResourceManagerTraceLogger::`vftable';
  CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>((__int64)this + 72);
  *((_QWORD *)this + 1) = &CAggregateValuesBase<enum SarmErrorEvent,unsigned int *>::`vftable';
}
