/*
 * XREFs of ?GetCurrentTargetNoRef@CD2DContext@@IEBAPEAVCD2DTarget@@XZ @ 0x18010A620
 * Callers:
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18010A010 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 * Callees:
 *     <none>
 */

struct CD2DTarget *__fastcall CD2DContext::GetCurrentTargetNoRef(CD2DContext *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 88);
  if ( v1 )
    return *(struct CD2DTarget **)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v1 - 1));
  else
    return 0LL;
}
