/*
 * XREFs of ?SetIndependentFlipStage@@YAXPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@W4_D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE@@@Z @ 0x14000C574
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x14000CF44 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140039EF0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x14000C59C (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 */

void __fastcall SetIndependentFlipStage(
        struct _D3DKMT_AUXILIARYPRESENTINFO **a1,
        enum _D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE a2)
{
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax

  FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(a1[168]);
  if ( FlipManagerAuxiliaryPresentInfo )
    *((_DWORD *)FlipManagerAuxiliaryPresentInfo + 9) = 0;
}
