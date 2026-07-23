/*
 * XREFs of RtlpEstimateAllocatedSize @ 0x1800F21B4
 * Callers:
 *     RtlpLogHeapCreateEvent @ 0x180023758 (RtlpLogHeapCreateEvent.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F2038 (RtlpLogHeapExtendEvent.c)
 *     RtlpLogHeapContractEvent @ 0x1800F20F0 (RtlpLogHeapContractEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpEstimateAllocatedSize(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(a1 + 418) == 2 )
  {
    v2 = *(_QWORD *)(a1 + 408);
    if ( v2 )
      v1 -= *(_QWORD *)(v2 + 72);
  }
  return v1;
}
