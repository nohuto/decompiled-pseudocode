/*
 * XREFs of RtlpHpFreeVA @ 0x14045928C
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x14035D608 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x1404585E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapAllocate @ 0x140602108 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x14060271C (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x140604814 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x14020C9AC (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x14045930C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x140603130 (RtlpHpVaMgrCtxDecommit.c)
 */

__int64 __fastcall RtlpHpFreeVA(ULONG_PTR *a1, ULONG_PTR *a2, int a3, _OWORD *a4)
{
  unsigned __int64 v5; // r8
  ULONG_PTR v6; // r9

  if ( a3 == 0x8000 )
  {
    v5 = (*a1 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v6 = *a1 + *a2 - v5;
    *a1 = v5;
    *a2 = v6;
    if ( v6 )
      RtlpHpVaMgrCtxFree(&unk_140E68558, a1, a2);
  }
  else
  {
    if ( (unsigned __int8)(BYTE1(*a4) - 2) > 2u )
      return RtlpHpEnvFreeVA(a1, a2, a3);
    RtlpHpVaMgrCtxDecommit(&unk_140E68558, *a1, *a2);
  }
  return 0LL;
}
