/*
 * XREFs of ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x180098540
 * Callers:
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1802338C4 (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     ?GetLastIndependentFlipState@CGlobalCompositionSurfaceInfo@@UEBA?AW4IndependentFlipState@@XZ @ 0x1800988E0 (-GetLastIndependentFlipState@CGlobalCompositionSurfaceInfo@@UEBA-AW4IndependentFlipState@@XZ.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::DbgSaveOverlayStateInfoBefore(COverlayContext *this)
{
  unsigned int v2; // ecx
  _QWORD *v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // xmm1_8
  __int64 v8; // rbp
  __int64 v9; // r9
  _QWORD *v10; // rcx
  __int128 *v11; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int64 (*v14)(void); // rax
  int v15; // eax

  v2 = (*((_DWORD *)this + 7570) + 1) % 6u;
  *((_DWORD *)this + 7570) = v2;
  v3 = (_QWORD *)((char *)this + 1776 * (int)v2 + 19624);
  memset_0(v3, 0, 0x6F0uLL);
  v4 = 0;
  v5 = 0LL;
  if ( g_pComposition )
    v5 = *((_QWORD *)g_pComposition + 111);
  *v3 = v5;
  v6 = *((_QWORD *)this + 1585);
  if ( 438261969 * (unsigned int)((*((_QWORD *)this + 1586) - v6) >> 3) )
  {
    do
    {
      if ( v4 >= 2 )
        break;
      v8 = 102LL * v4;
      v9 = 392LL * v4;
      v10 = &v3[v8 + 1];
      v11 = (__int128 *)(v9 + v6);
      v12 = 3LL;
      do
      {
        v10 += 16;
        v13 = *v11;
        v11 += 8;
        *((_OWORD *)v10 - 8) = v13;
        *((_OWORD *)v10 - 7) = *(v11 - 7);
        *((_OWORD *)v10 - 6) = *(v11 - 6);
        *((_OWORD *)v10 - 5) = *(v11 - 5);
        *((_OWORD *)v10 - 4) = *(v11 - 4);
        *((_OWORD *)v10 - 3) = *(v11 - 3);
        *((_OWORD *)v10 - 2) = *(v11 - 2);
        *((_OWORD *)v10 - 1) = *(v11 - 1);
        --v12;
      }
      while ( v12 );
      *v10 = *(_QWORD *)v11;
      v3[v8 + 99] = &v3[v8 + 1];
      v14 = *(__int64 (**)(void))(**(_QWORD **)(*((_QWORD *)this + 1585) + v9 + 16) + 368LL);
      v15 = v14 == CGlobalCompositionSurfaceInfo::GetLastIndependentFlipState
          ? CGlobalCompositionSurfaceInfo::GetLastIndependentFlipState()
          : v14();
      LODWORD(v3[v8 + 101]) = v15;
      ++v4;
      ++*((_DWORD *)v3 + 410);
      v6 = *((_QWORD *)this + 1585);
    }
    while ( v4 < 438261969 * (unsigned int)((*((_QWORD *)this + 1586) - v6) >> 3) );
  }
  if ( *((_BYTE *)this + 19088) )
  {
    *((_OWORD *)v3 + 103) = *((_OWORD *)this + 1186);
    *((_OWORD *)v3 + 104) = *((_OWORD *)this + 1187);
    *((_OWORD *)v3 + 105) = *((_OWORD *)this + 1188);
    *((_OWORD *)v3 + 106) = *((_OWORD *)this + 1189);
    *((_OWORD *)v3 + 107) = *((_OWORD *)this + 1190);
    *((_OWORD *)v3 + 108) = *((_OWORD *)this + 1191);
    *((_OWORD *)v3 + 109) = *((_OWORD *)this + 1192);
    v7 = *((_QWORD *)this + 2386);
    ++*((_DWORD *)v3 + 442);
    v3[220] = v7;
  }
}
