/*
 * XREFs of ?GetBounds@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18020AB84
 * Callers:
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180053BD0 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180099A00 (-UnionUnsafe@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTreeDirty::GetBounds(__int64 a1, __int64 a2)
{
  float *v3; // rbx
  __int64 v4; // r10
  float *v5; // r10
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)a2 = 0;
  if ( *(_BYTE *)(a1 + 2324) )
  {
    v3 = (float *)(a1 + 2308);
    if ( a1 == -2308 )
      goto LABEL_9;
    v4 = 1LL;
  }
  else
  {
    v3 = (float *)(a1 + 20);
    gsl::details::extent_type<-1>::extent_type<-1>(v7, *(unsigned int *)(a1 + 16));
    v4 = v7[0];
    if ( v7[0] == -1 || !v3 && v7[0] )
    {
LABEL_9:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
  }
  v5 = &v3[4 * v4];
  while ( v3 != v5 )
  {
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a2, v3);
    v3 += 4;
  }
  return a2;
}
