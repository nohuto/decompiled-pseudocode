/*
 * XREFs of ?Release@CCachedImageProducer@@UEAAKXZ @ 0x180211AB0
 * Callers:
 *     ?Release@CCachedImageProducer@@WBA@EAAKXZ @ 0x180290670 (-Release@CCachedImageProducer@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCachedImageProducer::Release(CCachedImageProducer *this)
{
  return CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(this);
}
