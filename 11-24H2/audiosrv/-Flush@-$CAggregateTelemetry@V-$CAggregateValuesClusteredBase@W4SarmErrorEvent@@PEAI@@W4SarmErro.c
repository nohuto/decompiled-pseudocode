/*
 * XREFs of ?Flush@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x1801242B0
 * Callers:
 *     ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x180123E70 (--1-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SarmErrorEvent@@PEAI@@W4SarmErrorEve.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum SarmErrorEvent,unsigned int *>,enum SarmErrorEvent,unsigned int *,0,0>::Flush(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[16] )
    return (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 8LL))(a1);
  return result;
}
