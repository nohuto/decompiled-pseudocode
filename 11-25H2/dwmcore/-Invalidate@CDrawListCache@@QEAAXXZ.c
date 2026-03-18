/*
 * XREFs of ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800D2800
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18000E560 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180013240 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18009BA30 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D4130 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18010DE80 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z @ 0x180128294 (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z.c)
 *     ?FlushDrawListCache@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x18024CA20 (-FlushDrawListCache@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryB.c)
 * Callees:
 *     ?clear@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@QEAAXXZ @ 0x1800D2540 (-clear@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawListCache::Invalidate(CDrawListCache *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  char *v5; // rbx
  char *v6; // r8
  char *v7; // rsi
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 3) )
  {
    if ( (*((_DWORD *)this + 18) & 0x400) != 0 )
      ++dword_1804068BC;
    else
      ++dword_1804068B0;
    v2 = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    v3 = *((_QWORD *)this + 5);
    v4 = v3 & 3;
    if ( v4 == 1 )
    {
      v5 = (char *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
      v6 = (char *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
      v2 = *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
    }
    else if ( v4 == 2 )
    {
      v5 = 0LL;
      v6 = 0LL;
    }
    else
    {
      v5 = (char *)this + 40;
      v6 = (char *)this + 40;
      if ( (v3 & 3) != 0 )
      {
        if ( (unsigned __int64)(v4 - 2) >= 2 )
          ModuleFailFastForHRESULT(-2147418113, retaddr);
      }
      else
      {
        v2 = 1LL;
        v5 = (char *)this + 40;
      }
    }
    v7 = &v6[8 * v2];
    while ( v5 != v7 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
      v5 += 8;
    }
    detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear((__int64 *)this + 5);
    *((_WORD *)this + 42) = 0;
  }
}
