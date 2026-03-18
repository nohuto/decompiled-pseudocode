/*
 * XREFs of ?GetSize@CVirtualMonitorCaptureRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180281D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CVirtualMonitorCaptureRenderTarget::GetSize(
        CVirtualMonitorCaptureRenderTarget *this,
        _DWORD *a2)
{
  *a2 = *((_DWORD *)this + 773);
  a2[1] = *((_DWORD *)this + 774);
  return (struct D2D_SIZE_U)a2;
}
