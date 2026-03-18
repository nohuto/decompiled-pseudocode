/*
 * XREFs of ?VidSchiConvertTicksToSchedulerUnitsDelta@@YA_J_J_K@Z @ 0x14003C594
 * Callers:
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x140017030 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VidSchiConvertTicksToSchedulerUnitsDelta(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax

  if ( (a1 & 0x8000000000000000uLL) != 0LL )
  {
    v4 = -(__int64)a1;
    if ( is_mul_ok(v4, 0x989680uLL) )
      v5 = v4 * (unsigned __int128)0x989680uLL / a2;
    else
      v5 = 10000000 * (v4 / a2) + 10000000 * (v4 % a2) / a2;
    return -(__int64)v5;
  }
  else if ( is_mul_ok(a1, 0x989680uLL) )
  {
    return a1 * (unsigned __int128)0x989680uLL / a2;
  }
  else
  {
    return 10000000 * (a1 / a2) + 10000000 * (a1 % a2) / a2;
  }
}
