/*
 * XREFs of ?RegisterRootVisualAsNotifier@CCachedVisualImage@@MEAAJXZ @ 0x180228A10
 * Callers:
 *     ?Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x1802990AC (-Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::RegisterRootVisualAsNotifier(struct CResource **this)
{
  return CResource::RegisterNotifier((CResource *)this, this[17]);
}
