/*
 * XREFs of ?RegisterRootVisualAsNotifier@CCachedVisualImage@@MEAAJXZ @ 0x18021D1F0
 * Callers:
 *     ?Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x18028DC7C (-Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::RegisterRootVisualAsNotifier(struct CResource **this)
{
  return CResource::RegisterNotifier((CResource *)this, this[17]);
}
