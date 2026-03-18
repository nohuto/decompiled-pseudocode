/*
 * XREFs of HalpDmaFreeLa @ 0x14053C600
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x140392210 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x140551E80 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x14053C948 (HalpDmaReturnEmergencyLogicalAddressResources.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpDmaFreeLa(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 i; // rcx
  __int128 v11; // [rsp+20h] [rbp-18h]

  v5 = *a2;
  v11 = *(_OWORD *)(a1 + 256);
  result = guard_dispatch_icall_no_overrides(a2, a2, a3, a4);
  if ( v5 == *(_QWORD *)(a1 + 560) )
    return HalpDmaReturnEmergencyLogicalAddressResources(a1);
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    v7 = *((_QWORD *)&v11 + i);
    if ( v7 && v5 == *(_QWORD *)(v7 + 24) )
      return result;
  }
  return guard_dispatch_icall_no_overrides(v5, v7, v8, v9);
}
