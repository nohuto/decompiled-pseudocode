/*
 * XREFs of RtlpHpFreeVA @ 0x140420FB8
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x1402C11C4 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x140420250 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapAllocate @ 0x140604AC8 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x1406050DC (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x140607214 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x14024421C (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x140421038 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x140605AF0 (RtlpHpVaMgrCtxDecommit.c)
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
      RtlpHpVaMgrCtxFree(&unk_140E68358, a1, a2);
  }
  else
  {
    if ( (unsigned __int8)(BYTE1(*a4) - 2) > 2u )
      return RtlpHpEnvFreeVA(a1, a2, a3);
    RtlpHpVaMgrCtxDecommit(&unk_140E68358, *a1, *a2);
  }
  return 0LL;
}
