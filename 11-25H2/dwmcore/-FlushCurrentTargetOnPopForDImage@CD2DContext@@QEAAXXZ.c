/*
 * XREFs of ?FlushCurrentTargetOnPopForDImage@CD2DContext@@QEAAXXZ @ 0x1801FE550
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000C52C (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DContext::FlushCurrentTargetOnPopForDImage(CD2DContext *this)
{
  int v1; // edx
  __int64 v2; // rax

  v1 = *((_DWORD *)this + 88);
  v2 = 0LL;
  if ( v1 )
    v2 = *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v1 - 1));
  *(_BYTE *)(v2 + 79) = 1;
}
