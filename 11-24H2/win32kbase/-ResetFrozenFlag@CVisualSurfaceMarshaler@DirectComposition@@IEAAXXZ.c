/*
 * XREFs of ?ResetFrozenFlag@CVisualSurfaceMarshaler@DirectComposition@@IEAAXXZ @ 0x140072F04
 * Callers:
 *     ?SetReferenceProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1400717D0 (-SetReferenceProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 *     ?SetBufferProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140072E70 (-SetBufferProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPE.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CVisualSurfaceMarshaler::ResetFrozenFlag(
        DirectComposition::CVisualSurfaceMarshaler *this)
{
  if ( *((_QWORD *)this + 7) )
  {
    *((_DWORD *)this + 4) |= 0x400u;
    *((_BYTE *)this + 92) = 0;
  }
}
