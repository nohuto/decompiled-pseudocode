/*
 * XREFs of ?SetFullscreenGammaRampAdjustment@DXGDEVICE@@QEAAXIPEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1401B9234
 * Callers:
 *     DxgkAdjustFullscreenGamma @ 0x1401A92D0 (DxgkAdjustFullscreenGamma.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall DXGDEVICE::SetFullscreenGammaRampAdjustment(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGK_GAMMA_ADJUSTMENT *a3)
{
  __int64 v3; // rdi
  void *v6; // rcx

  v3 = a2;
  v6 = (void *)*((_QWORD *)this + a2 + 211);
  if ( v6 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
  *((_QWORD *)this + v3 + 211) = a3;
}
