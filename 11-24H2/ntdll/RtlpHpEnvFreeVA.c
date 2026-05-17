/*
 * XREFs of RtlpHpEnvFreeVA @ 0x180092B20
 * Callers:
 *     RtlpHpVaMgrRegionAllocate @ 0x180090F84 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrCtxFree @ 0x180092700 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x180092D78 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRangeDecommit @ 0x180158074 (RtlpHpVaMgrRangeDecommit.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpEnvFreeVA(__int64 a1, __int64 a2, __int16 a3, int a4, __int64 a5)
{
  unsigned int v5; // r8d

  v5 = a3 & 0xC000;
  if ( a4 == 5 )
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int))(a5 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a5 + 16)))(
             a5 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a5,
             -1LL,
             a1,
             a2,
             v5);
  else
    return ZwFreeVirtualMemory(-1LL, a1, a2, v5);
}
