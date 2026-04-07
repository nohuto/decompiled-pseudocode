/*
 * XREFs of ?AddRef@CThumbnailAnimatedVisual@@UEAAKXZ @ 0x180061880
 * Callers:
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180060FA0 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CThumbnailAnimatedVisual::AddRef(CThumbnailAnimatedVisual *this)
{
  return CMILRefCountBase::AddRef((CThumbnailAnimatedVisual *)((char *)this - 240));
}
