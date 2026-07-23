/*
 * XREFs of RtlpHpEnvFreeVA @ 0x14020C9AC
 * Callers:
 *     RtlpHpVaMgrRegionAllocate @ 0x14021BAD8 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpEnvAllocVA @ 0x14034C090 (RtlpHpEnvAllocVA.c)
 *     RtlpHpFreeVA @ 0x14045928C (RtlpHpFreeVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x14045930C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1404596F4 (RtlpHpVaMgrAlloc.c)
 * Callees:
 *     MmFreePoolMemory @ 0x14020C540 (MmFreePoolMemory.c)
 */

__int64 __fastcall RtlpHpEnvFreeVA(ULONG_PTR *a1, ULONG_PTR *a2, int a3)
{
  unsigned __int64 v4; // r9
  ULONG_PTR v5; // r10

  if ( a3 != 0x8000 )
    return MmFreePoolMemory(a1, a2);
  v4 = (*a1 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  v5 = *a1 + *a2 - v4;
  *a1 = v4;
  *a2 = v5;
  if ( v5 )
    return MmFreePoolMemory(a1, a2);
  else
    return 0LL;
}
