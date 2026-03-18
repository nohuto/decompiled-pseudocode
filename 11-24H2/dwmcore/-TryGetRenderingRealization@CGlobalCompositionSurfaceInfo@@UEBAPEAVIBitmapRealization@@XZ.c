/*
 * XREFs of ?TryGetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEBAPEAVIBitmapRealization@@XZ @ 0x1801DAC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IBitmapRealization *__fastcall CGlobalCompositionSurfaceInfo::TryGetRenderingRealization(
        CGlobalCompositionSurfaceInfo *this)
{
  return (struct IBitmapRealization *)((*((_QWORD *)this + 26) + 8LL) & -(__int64)(*((_QWORD *)this + 26) != 0LL));
}
