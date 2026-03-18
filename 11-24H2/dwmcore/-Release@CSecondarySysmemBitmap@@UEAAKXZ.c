/*
 * XREFs of ?Release@CSecondarySysmemBitmap@@UEAAKXZ @ 0x1802004D0
 * Callers:
 *     ?Release@CSecondarySysmemBitmap@@WBA@EAAKXZ @ 0x1802DB120 (-Release@CSecondarySysmemBitmap@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CSecondarySysmemBitmap::Release(volatile signed __int32 *this)
{
  return CMILRefCountBaseT<ID2DBitmapCacheSource,CMilObjectDeleter>::InternalRelease(this);
}
