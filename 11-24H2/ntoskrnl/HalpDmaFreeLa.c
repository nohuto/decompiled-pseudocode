/*
 * XREFs of HalpDmaFreeLa @ 0x140539E8C
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x14038BB40 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x14054F7C0 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x14053A1C0 (HalpDmaReturnEmergencyLogicalAddressResources.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaFreeLa(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 i; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h]

  v3 = *a2;
  v7 = *(_OWORD *)(a1 + 256);
  result = guard_dispatch_icall_no_overrides(a2, a2);
  if ( v3 == *(_QWORD *)(a1 + 560) )
    return HalpDmaReturnEmergencyLogicalAddressResources(a1);
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)&v7 + i);
    if ( v5 && v3 == *(_QWORD *)(v5 + 24) )
      return result;
  }
  return guard_dispatch_icall_no_overrides(v3, v5);
}
