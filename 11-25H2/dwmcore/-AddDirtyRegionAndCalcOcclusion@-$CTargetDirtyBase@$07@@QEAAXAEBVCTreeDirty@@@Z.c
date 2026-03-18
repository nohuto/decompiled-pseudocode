/*
 * XREFs of ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x1800C68D4
 * Callers:
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C7228 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1802289A0 (-UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028B550 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028C274 (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?CalcOcclusion@?$CTargetDirtyBase@$07@@IEAAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1800825E0 (-CalcOcclusion@-$CTargetDirtyBase@$07@@IEAAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800996C0 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?AddDirtyRects@?$CTargetDirtyBase@$07@@QEAAXAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1800C3CEC (-AddDirtyRects@-$CTargetDirtyBase@$07@@QEAAXAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C406C (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ??0?$CMergedRectBase@$07@@QEAA@_N@Z @ 0x1800C5118 (--0-$CMergedRectBase@$07@@QEAA@_N@Z.c)
 *     ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C519C (-GetRects@-$CMergedRectBase@$07@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?GetDirtyRects@CTreeDirty@@QEBA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C51F8 (-GetDirtyRects@CTreeDirty@@QEBA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800CB30C (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180249274 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion(__int64 a1, __int64 a2)
{
  const struct D2D_RECT_F *v4; // rdi
  const struct D2D_RECT_F *v5; // rsi
  __int64 v6; // rsi
  __int128 *v7; // rax
  __int64 *v8; // rcx
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // r12
  char v12; // r13
  unsigned int i; // edi
  unsigned int v14; // ecx
  const struct FastRegion::Internal::CRgnData **v15; // rcx
  const struct D2D_RECT_F *v16; // rdi
  const struct D2D_RECT_F *v17; // rsi
  int v18; // [rsp+38h] [rbp-C8h]
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  const struct D2D_RECT_F *v20; // [rsp+58h] [rbp-A8h]
  __int128 v21; // [rsp+60h] [rbp-A0h] BYREF
  struct D2D_RECT_F v22; // [rsp+70h] [rbp-90h] BYREF
  FastRegion::CRegion *v23; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v26[444]; // [rsp+D4h] [rbp-2Ch] BYREF

  CMergedRectBase<8>::CMergedRectBase<8>((__int64)&v25, 0);
  CMergedRectBase<8>::GetRects((unsigned int *)(a1 + 16), &v19);
  v4 = v20;
  v5 = &v20[v19];
  while ( v4 != v5 )
    CMergedRectBase<8>::Add(&v25, v4++);
  CTreeDirty::GetDirtyRects(a2, &v19);
  if ( !*(_BYTE *)(a1 + 2312) )
  {
    v16 = v20;
    v17 = &v20[v19];
    while ( v16 != v17 )
      CMergedRectBase<8>::Add(&v25, v16++);
  }
  if ( !v26[436] )
    CMergedRectBase<8>::Optimize(&v25);
  gsl::details::extent_type<-1>::extent_type<-1>(&v22, v25);
  *(_QWORD *)&v22.right = v26;
  if ( *(_QWORD *)&v22.left == -1LL )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  CTargetDirtyBase<8>::CalcOcclusion(a1, &v22);
  if ( !*(_BYTE *)(a1 + 2312) )
  {
    v6 = (**(__int64 (__fastcall ***)(__int64))a1)(a1);
    if ( v6 )
    {
      v7 = (__int128 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 32LL))(*(_QWORD *)(a1 + 8));
      v8 = *(__int64 **)(a1 + 8);
      v9 = *v7;
      v10 = *v8;
      v21 = v9;
      v11 = (*(__int64 (__fastcall **)(__int64 *))(v10 + 64))(v8);
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 40LL))(*(_QWORD *)(a1 + 8));
      for ( i = 0; ; ++i )
      {
        v14 = 1;
        if ( !*(_BYTE *)(a2 + 2324) )
          v14 = *(_DWORD *)(a2 + 16);
        if ( i >= v14 )
          break;
        v24 = 0;
        v19 = 0LL;
        v20 = 0LL;
        v23 = (FastRegion::CRegion *)&v24;
        LOBYTE(v18) = v12;
        CTreeDirty::GetOptimizedRect(
          a2,
          &v22,
          i,
          &v21,
          v6,
          (unsigned __int64)&v23 & -(__int64)(*(_QWORD *)(a1 + 464) != 0LL),
          v11,
          v18,
          &v19);
        if ( v22.right > v22.left && v22.bottom > v22.top )
        {
          CMergedRectBase<8>::Add((unsigned int *)(a1 + 16), &v22);
          v15 = *(const struct FastRegion::Internal::CRgnData ***)(a1 + 464);
          if ( v15 )
            CRegion::Union(v15, &v23);
        }
        FastRegion::CRegion::FreeMemory(&v23);
      }
    }
    else
    {
      CTargetDirtyBase<8>::AddDirtyRects(a1, &v19);
    }
  }
}
