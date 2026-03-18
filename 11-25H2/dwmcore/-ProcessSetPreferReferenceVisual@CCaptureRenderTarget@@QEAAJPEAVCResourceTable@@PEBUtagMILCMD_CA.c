/*
 * XREFs of ?ProcessSetPreferReferenceVisual@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETPREFERREFERENCEVISUAL@@@Z @ 0x18028D9FC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ReevaluateRootVisual@CCaptureRenderTarget@@QEAAXXZ @ 0x18023013C (-ReevaluateRootVisual@CCaptureRenderTarget@@QEAAXXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetPreferReferenceVisual(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETPREFERREFERENCEVISUAL *a3)
{
  char v3; // al

  v3 = *((_BYTE *)a3 + 8);
  if ( *((_BYTE *)this + 3144) != v3 )
  {
    *((_BYTE *)this + 3144) = v3;
    CCaptureRenderTarget::ReevaluateRootVisual((struct CVisual **)this);
  }
  return 0LL;
}
