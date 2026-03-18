/*
 * XREFs of ?Release@CSecondarySysmemBitmap@@UEAAKXZ @ 0x18020C850
 * Callers:
 *     ?Release@CSecondarySysmemBitmap@@WBA@EAAKXZ @ 0x1802E43C0 (-Release@CSecondarySysmemBitmap@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CSecondarySysmemBitmap::Release(volatile signed __int32 *this)
{
  return CMILRefCountBaseT<ID2DBitmapCacheSource,CMilObjectDeleter>::InternalRelease(this);
}
