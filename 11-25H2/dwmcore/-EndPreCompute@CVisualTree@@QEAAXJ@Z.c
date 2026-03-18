/*
 * XREFs of ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x180096CC0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18012B970 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?SetFullDirty@CTreeDirty@@QEAAXXZ @ 0x180096EA4 (-SetFullDirty@CTreeDirty@@QEAAXXZ.c)
 *     ?IsEmpty@CTreeDirty@@QEBA_NXZ @ 0x1800C4D58 (-IsEmpty@CTreeDirty@@QEBA_NXZ.c)
 *     ?Merge@CTreeDirty@@AEAAXII@Z @ 0x1802491C0 (-Merge@CTreeDirty@@AEAAXII@Z.c)
 *     ?EnsureWeights@?$CRectangleCollection@$07@@AEAAXXZ @ 0x18024945C (-EnsureWeights@-$CRectangleCollection@$07@@AEAAXXZ.c)
 *     ?SetRedrawRects@CTreeDirty@@AEAAXXZ @ 0x180272BFC (-SetRedrawRects@CTreeDirty@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisualTree::EndPreCompute(CVisualTree *this, int a2)
{
  struct ILiftedOverlayHost *(__fastcall *v4)(CDesktopTree *__hidden); // rax
  __int64 v5; // rcx
  char *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r8
  char *v9; // rdx
  unsigned int i; // r8d
  unsigned int j; // edx

  v4 = *(struct ILiftedOverlayHost *(__fastcall **)(CDesktopTree *__hidden))(*(_QWORD *)this + 216LL);
  if ( v4 == CDesktopTree::GetLiftedOverlayHost )
    v5 = *((_QWORD *)this + 569);
  else
    v5 = (__int64)v4(this);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  v6 = (char *)this + 112;
  if ( a2 < 0 )
  {
    CTreeDirty::SetFullDirty((CVisualTree *)((char *)this + 112));
    if ( a2 == -2147467260 )
      return;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 184LL))(this) )
  {
    v8 = *((_QWORD *)this + 3);
    v9 = (char *)this + 112;
    if ( !*(_DWORD *)(v8 + 6400) )
      goto LABEL_15;
    if ( !*(_BYTE *)(v8 + 6493) )
    {
      if ( CTreeDirty::IsEmpty((CVisualTree *)((char *)this + 112)) )
        goto LABEL_15;
      v9 = (char *)this + 112;
    }
    *((_BYTE *)this + 2439) = 1;
    *(_BYTE *)(v8 + 6493) = 0;
LABEL_15:
    v6 = v9;
    if ( *(_DWORD *)(*((_QWORD *)this + 3) + 6408LL) )
      *((_BYTE *)this + 2440) = 1;
  }
  v7 = 0LL;
  if ( !v6[2324] )
  {
LABEL_17:
    CRectangleCollection<8>::EnsureWeights(v6 + 16);
    for ( i = 1; i < *((_DWORD *)v6 + 4); ++i )
    {
      for ( j = 0; j < i; ++j )
      {
        if ( *(float *)&v6[8 * j + 168 + 8 * ((i * (i - 1)) >> 1)] < 0.5 )
        {
          CTreeDirty::Merge((CTreeDirty *)v6, j, i);
          goto LABEL_17;
        }
      }
    }
  }
  v6[2325] = 1;
  if ( v6[2327] )
  {
    CTreeDirty::SetRedrawRects((CTreeDirty *)v6);
    CTreeDirty::SetFullDirty((CTreeDirty *)v6);
    *(_WORD *)(v6 + 2327) = 0;
  }
  else if ( v6[2328] )
  {
    CTreeDirty::SetFullDirty((CTreeDirty *)v6);
    v6[2328] = 0;
  }
  if ( g_pComposition )
    v7 = *((_QWORD *)g_pComposition + 111);
  *((_QWORD *)v6 + 1) = v7;
}
