/*
 * XREFs of ?Release@CCachedImageProducer@@UEAAKXZ @ 0x1802052C0
 * Callers:
 *     ?Release@CCachedImageProducer@@WBA@EAAKXZ @ 0x1802850D0 (-Release@CCachedImageProducer@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCachedImageProducer::Release(CCachedImageProducer *this)
{
  return CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(this);
}
