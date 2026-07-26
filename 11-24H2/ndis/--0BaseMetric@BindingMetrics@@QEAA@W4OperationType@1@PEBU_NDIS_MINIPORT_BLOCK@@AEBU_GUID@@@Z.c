/*
 * XREFs of ??0BaseMetric@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x1400554C0
 * Callers:
 *     ??0UpdateBindings@BindingMetrics@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x140055430 (--0UpdateBindings@BindingMetrics@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z.c)
 *     ??0Miniport@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x140055460 (--0Miniport@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z.c)
 *     ??0Filter@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@PEBUNDIS_BIND_FILTER_LINK@@AEBU_GUID@@@Z @ 0x140055480 (--0Filter@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@PEBUNDIS_BIND_FILTER_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BindingMetrics::BaseMetric::BaseMetric(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  bool v5; // al
  LARGE_INTEGER *v6; // rcx

  *(_QWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = a4;
  *(_BYTE *)(a1 + 16) = a2;
  v5 = (unsigned int)dword_14011A7B0 > 4 && (qword_14011A7C0 & 0x20) != 0 && (qword_14011A7C8 & 0x20) == qword_14011A7C8;
  *(_BYTE *)(a1 + 17) = v5;
  *(_QWORD *)(a1 + 24) = 0LL;
  v6 = (LARGE_INTEGER *)(a1 + 32);
  *(_QWORD *)(a1 + 40) = 0LL;
  v6->QuadPart = 0LL;
  if ( *(_BYTE *)(a1 + 17) )
    *(LARGE_INTEGER *)(a1 + 24) = KeQueryPerformanceCounter(v6);
  return a1;
}
