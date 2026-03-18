/*
 * XREFs of ?InFrame@CDisableScanoutToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1400A1520
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z @ 0x14009BE80 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z.c)
 */

__int64 __fastcall CDisableScanoutToken::InFrame(CDisableScanoutToken *this, struct CCompositionFrame *a2, bool *a3)
{
  *((_DWORD *)this + 6) = 3;
  return CompositionSurfaceObject::NotifyTokenInFrame(*((CompositionSurfaceObject **)this + 6), this, a3, 0LL);
}
