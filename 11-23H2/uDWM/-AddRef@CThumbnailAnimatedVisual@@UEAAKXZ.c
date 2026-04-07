/*
 * XREFs of ?AddRef@CThumbnailAnimatedVisual@@UEAAKXZ @ 0x1800596D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CThumbnailAnimatedVisual::AddRef(CThumbnailAnimatedVisual *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this - 70);
}
