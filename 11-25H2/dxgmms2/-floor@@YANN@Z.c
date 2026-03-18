/*
 * XREFs of ?floor@@YANN@Z @ 0x14001835C
 * Callers:
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x140017030 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 * Callees:
 *     <none>
 */

double __fastcall floor(double a1)
{
  int v1; // eax

  v1 = (int)a1;
  if ( a1 < 0.0 )
    return (double)((int)((double)(1 - v1) + a1) - (1 - v1));
  return (double)v1;
}
