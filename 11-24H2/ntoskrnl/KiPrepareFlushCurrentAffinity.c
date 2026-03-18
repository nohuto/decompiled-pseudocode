/*
 * XREFs of KiPrepareFlushCurrentAffinity @ 0x1404021A4
 * Callers:
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     KeFlushCurrentTbOnly @ 0x1403B0C90 (KeFlushCurrentTbOnly.c)
 *     KeFlushSingleCurrentTb @ 0x1405BC8EC (KeFlushSingleCurrentTb.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
