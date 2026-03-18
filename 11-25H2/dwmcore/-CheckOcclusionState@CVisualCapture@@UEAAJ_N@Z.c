/*
 * XREFs of ?CheckOcclusionState@CVisualCapture@@UEAAJ_N@Z @ 0x1802B2210
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckForRenderCompleted@CVisualCapture@@IEAAXXZ @ 0x1802B21AC (-CheckForRenderCompleted@CVisualCapture@@IEAAXXZ.c)
 */

__int64 __fastcall CVisualCapture::CheckOcclusionState(CVisualCapture *this)
{
  CVisualCapture::CheckForRenderCompleted((CVisualCapture *)((char *)this - 96));
  return *((_DWORD *)this + 672) != 1 ? 0x87A0001 : 0;
}
