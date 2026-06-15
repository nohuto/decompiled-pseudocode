/*
 * XREFs of ??1?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x18011C270
 * Callers:
 *     ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x18011C2D4 (--1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ.c)
 *     ??_G?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x18011C350 (--_G-$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x18011C680 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@W4SarmErrorE.c)
 */

void __fastcall CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>(
        __int64 a1)
{
  ULONGLONG TickCount64; // rax
  __int64 v3; // rdx

  *(_QWORD *)a1 = &CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>::`vftable';
  TickCount64 = GetTickCount64();
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    if ( TickCount64 - *(_QWORD *)(a1 + 48) > *(_QWORD *)(a1 + 40) )
    {
      LOBYTE(v3) = 1;
      CAggregateTelemetry<CAggregateValuesClusteredBase<enum SarmErrorEvent,unsigned int *>,enum SarmErrorEvent,unsigned int *,0,0>::Log(
        a1,
        v3);
    }
  }
  CAggregateTelemetry<CAggregateValuesClusteredBase<enum SarmErrorEvent,unsigned int *>,enum SarmErrorEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum SarmErrorEvent,unsigned int *>,enum SarmErrorEvent,unsigned int *,0,0>(
    a1,
    v3);
}
