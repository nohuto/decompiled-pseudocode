/*
 * XREFs of RtlpHpEnvFreeVA @ 0x14024421C
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x1402EAA50 (RtlpHpEnvAllocVA.c)
 *     RtlpHpFreeVA @ 0x140420FB8 (RtlpHpFreeVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x140421038 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x140421420 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x140421A48 (RtlpHpVaMgrRegionAllocate.c)
 * Callees:
 *     MmFreePoolMemory @ 0x140243A40 (MmFreePoolMemory.c)
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
