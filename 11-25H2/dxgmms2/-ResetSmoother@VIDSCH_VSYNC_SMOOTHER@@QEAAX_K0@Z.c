/*
 * XREFs of ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0@Z @ 0x1400168BC
 * Callers:
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1400150F0 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x140017030 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 *     VidSchSetMonitorPowerState @ 0x140041A20 (VidSchSetMonitorPowerState.c)
 * Callees:
 *     McTemplateK0xx_EtwWriteTransfer @ 0x1400161A4 (McTemplateK0xx_EtwWriteTransfer.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x140018324 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 */

void __fastcall VIDSCH_VSYNC_SMOOTHER::ResetSmoother(VIDSCH_VSYNC_SMOOTHER *this, __int64 a2, __int64 a3)
{
  double v5; // xmm0_8

  if ( (byte_140081244 & 4) != 0 )
    McTemplateK0xx_EtwWriteTransfer();
  if ( a3 < 0 )
    v5 = (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1)) + (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1));
  else
    v5 = (double)(int)a3;
  *((double *)this + 4) = v5;
  LinearFitT<256>::Reset(this);
}
