/*
 * XREFs of ??$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z @ 0x1802DB85C
 * Callers:
 *     ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x1802DC3D8 (-ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPH.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x18021DB24 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?Instance@CompositorTracing@@KAPEAV1@XZ @ 0x18021DBDC (-Instance@CompositorTracing@@KAPEAV1@XZ.c)
 *     ?DwmHolographicInteropTextureSizeChanged_@CompositorTracing@@QEAAXIII@Z @ 0x1802DBB18 (-DwmHolographicInteropTextureSizeChanged_@CompositorTracing@@QEAAXIII@Z.c)
 */

void __fastcall CompositorTracing::DwmHolographicInteropTextureSizeChanged<unsigned int &,unsigned int &,unsigned int &>(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  CompositorTracing *v6; // rcx

  if ( CompositorTracing::IsEnabled() )
  {
    CompositorTracing::Instance();
    CompositorTracing::DwmHolographicInteropTextureSizeChanged_(v6, *a1, *a2, *a3);
  }
}
