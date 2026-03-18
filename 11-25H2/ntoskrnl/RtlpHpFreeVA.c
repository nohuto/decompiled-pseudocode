/*
 * XREFs of RtlpHpFreeVA @ 0x1402FA99C
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x1402F9490 (RtlpHpSegMgrReserve.c)
 *     RtlpHpLargeAlloc @ 0x1403CAA94 (RtlpHpLargeAlloc.c)
 *     RtlpHpHeapAllocate @ 0x1405F8788 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x1405F8D9C (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1405FAED4 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpEnvFreeVA @ 0x1402FAA1C (RtlpHpEnvFreeVA.c)
 *     RtlpHpVaMgrCtxFree @ 0x1403CC28C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x1405F97B0 (RtlpHpVaMgrCtxDecommit.c)
 */

__int64 __fastcall RtlpHpFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3, _OWORD *a4)
{
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9

  if ( (_DWORD)a3 == 0x8000 )
  {
    v5 = (*a1 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v6 = *a1 + *a2 - v5;
    *a1 = v5;
    *a2 = v6;
    if ( v6 )
      RtlpHpVaMgrCtxFree(&unk_140E68098, a1, a2);
  }
  else
  {
    if ( (unsigned __int8)(BYTE1(*a4) - 2) > 2u )
      return RtlpHpEnvFreeVA(a1, a2, a3);
    RtlpHpVaMgrCtxDecommit(&unk_140E68098, *a1, *a2);
  }
  return 0LL;
}
