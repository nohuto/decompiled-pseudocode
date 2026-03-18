/*
 * XREFs of ?ProcessSetBlurredWallpaperSurfaceRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT@@@Z @ 0x180229834
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000CBEC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetBlurredWallpaperSurfaceRect(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT *a3)
{
  __m128i v3; // xmm0
  struct CSparseStorage::AllocatedStorage **v5; // rcx
  unsigned __int64 v6; // rax
  __m128i v8; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(__m128i *)((char *)a3 + 8);
  v5 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 224);
  v8 = v3;
  v6 = v3.m128i_i64[0] - *(_QWORD *)&`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue.r;
  if ( v3.m128i_i64[0] == *(_QWORD *)&`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue.r )
    v6 = _mm_srli_si128(v3, 8).m128i_u64[0]
       - *(_QWORD *)&`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue.b;
  if ( v6 )
    CSparseStorage::SetData(v5, 16, 0x10u, &v8);
  else
    *((_DWORD *)*v5 + 1) &= ~0x10000u;
  CVisual::PropagateFlags((__int64)this, 4u);
  return 0LL;
}
