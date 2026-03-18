/*
 * XREFs of ?Release@CHolographicFrameProcessor@@UEAAKXZ @ 0x1802DF990
 * Callers:
 *     ?Release@CHolographicExclusivePresentData@@W7EAAKXZ @ 0x1802DF9A0 (-Release@CHolographicExclusivePresentData@@W7EAAKXZ.c)
 *     ?Release@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1802DF9B0 (-Release@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?Release@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x1802DF9C0 (-Release@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicFrameProcessor::Release(CHolographicFrameProcessor *this)
{
  return CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease((CHolographicFrameProcessor *)((char *)this + 8));
}
