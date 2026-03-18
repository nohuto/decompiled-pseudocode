/*
 * XREFs of ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAX_K0@Z @ 0x14000C8BC
 * Callers:
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x14000B550 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x14002FA40 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     VidSchSetMonitorPowerState @ 0x140040420 (VidSchSetMonitorPowerState.c)
 * Callees:
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x14000C844 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     McTemplateK0xx_EtwWriteTransfer @ 0x14003E20C (McTemplateK0xx_EtwWriteTransfer.c)
 */

void __fastcall VIDSCH_VSYNC_SMOOTHER::ResetSmoother(VIDSCH_VSYNC_SMOOTHER *this, __int64 a2, __int64 a3)
{
  double v5; // xmm0_8

  if ( (byte_140081244 & 4) != 0 )
    McTemplateK0xx_EtwWriteTransfer(this, a2, a3, a2, a3);
  if ( a3 < 0 )
    v5 = (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1)) + (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1));
  else
    v5 = (double)(int)a3;
  *((double *)this + 4) = v5;
  LinearFitT<256>::Reset((__int64)this);
}
