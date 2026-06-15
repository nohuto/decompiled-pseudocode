/*
 * XREFs of ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140045C50
 * Callers:
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140044DB8 (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     ??_G?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x140085C10 (--_G-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEven.c)
 *     _CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int___0_0_::CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int___0_0__::_1_::dtor$0 @ 0x140093E1B (_CAggregateTelemetryClustered_enum_CpGlitchEvent_unsigned_int___0_0_--CAggregateTelemetryCluster.c)
 * Callees:
 *     ?Flush@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140045CC0 (-Flush@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchE.c)
 *     ??_GCSLock@@QEAAPEAXI@Z @ 0x140085D4C (--_GCSLock@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void *__fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>(
        __int64 a1,
        __int64 a2)
{
  void *result; // rax
  unsigned int v4; // edx
  CSLock *v5; // rcx
  __int64 (__fastcall ***v6)(_QWORD, __int64); // rcx

  *(_QWORD *)a1 = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  LOBYTE(a2) = 1;
  result = (void *)CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Flush(
                     a1,
                     a2);
  v5 = *(CSLock **)(a1 + 24);
  if ( v5 )
  {
    result = CSLock::`scalar deleting destructor'(v5, v4);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v6 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v6 )
    {
      result = (void *)(**v6)(v6, 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
  return result;
}
