/*
 * XREFs of KiPrepareFlushCurrentAffinity @ 0x1403FA0C0
 * Callers:
 *     KeFlushCurrentTbOnly @ 0x14027027C (KeFlushCurrentTbOnly.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     KeFlushSingleCurrentTb @ 0x1405B8A4C (KeFlushSingleCurrentTb.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiPrepareFlushCurrentAffinity(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // rbx

  CurrentPrcb = KeGetCurrentPrcb();
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 2097153;
  memset_0((void *)(a1 + 8), 0, 0x100uLL);
  return KeAddGroupAffinityEx((unsigned __int16 *)a1, CurrentPrcb->Group, CurrentPrcb->GroupSetMember);
}
