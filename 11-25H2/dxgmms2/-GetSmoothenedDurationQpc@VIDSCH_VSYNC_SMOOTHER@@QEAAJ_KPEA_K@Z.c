/*
 * XREFs of ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJ_KPEA_K@Z @ 0x1400162B8
 * Callers:
 *     ?UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IW4_VIDSCH_FLIP_STATUS@@@Z @ 0x14000C3A4 (-UpdateFlipManagerStatsOnFlipCompletion@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PE.c)
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x140016400 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x140017030 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 * Callees:
 *     McTemplateK0xx_EtwWriteTransfer @ 0x1400161A4 (McTemplateK0xx_EtwWriteTransfer.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x140018324 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 */

__int64 __fastcall VIDSCH_VSYNC_SMOOTHER::GetSmoothenedDurationQpc(
        VIDSCH_VSYNC_SMOOTHER *this,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned int v6; // esi
  unsigned int v7; // edx
  double v8; // xmm1_8
  int v9; // eax
  double v10; // xmm0_8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  double v15; // xmm0_8

  v6 = _mm_getcsr();
  v7 = 0;
  _mm_setcsr(v6 | 1);
  v8 = *((double *)this + 3) + 0.5;
  v9 = (int)v8;
  if ( v8 < 0.0 )
    v9 = (int)((double)(1 - v9) + v8) - (1 - v9);
  v10 = (double)v9;
  v11 = 0LL;
  if ( v10 >= 9.223372036854776e18 )
  {
    v10 = v10 - 9.223372036854776e18;
    if ( v10 < 9.223372036854776e18 )
      v11 = 0x8000000000000000uLL;
  }
  v12 = v11 + (unsigned int)(int)v10;
  *a3 = v12;
  v13 = v12 - a2;
  if ( (__int64)(v12 - a2) < 0 )
    v13 = a2 - v12;
  if ( v13 > a2 >> 1 )
  {
    if ( (byte_140081244 & 4) != 0 )
      McTemplateK0xx_EtwWriteTransfer();
    if ( (a2 & 0x8000000000000000uLL) != 0LL )
      v15 = (double)(int)(a2 & 1 | (a2 >> 1)) + (double)(int)(a2 & 1 | (a2 >> 1));
    else
      v15 = (double)(int)a2;
    *((double *)this + 4) = v15;
    LinearFitT<256>::Reset(this);
    *a3 = 0LL;
    v7 = -1073741823;
  }
  result = v7;
  _mm_setcsr(v6);
  return result;
}
