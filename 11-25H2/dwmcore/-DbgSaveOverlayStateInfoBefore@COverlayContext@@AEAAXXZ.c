/*
 * XREFs of ?DbgSaveOverlayStateInfoBefore@COverlayContext@@AEAAXXZ @ 0x1800C62B0
 * Callers:
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1801BFBDC (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     ?GetLastIndependentFlipState@CGlobalCompositionSurfaceInfo@@UEBA?AW4IndependentFlipState@@XZ @ 0x1800C6650 (-GetLastIndependentFlipState@CGlobalCompositionSurfaceInfo@@UEBA-AW4IndependentFlipState@@XZ.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  _OWORD *v10; // rax
  __int128 *v11; // rcx
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  __int64 (*v15)(void); // rax
  int v16; // eax

  v2 = (*((_DWORD *)this + 7666) + 1) % 6u;
  *((_DWORD *)this + 7666) = v2;
  v3 = (_QWORD *)((char *)this + 1808 * (int)v2 + 19816);
  memset_0(v3, 0, 0x710uLL);
  v4 = 0;
  v5 = 0LL;
  if ( g_pComposition )
    v5 = *((_QWORD *)g_pComposition + 111);
  *v3 = v5;
  v6 = *((_QWORD *)this + 1617);
  if ( -1030792151 * (unsigned int)((*((_QWORD *)this + 1618) - v6) >> 4) )
  {
    do
    {
      if ( v4 >= 2 )
        break;
      v8 = 104LL * v4;
      v9 = 400LL * v4;
      v10 = &v3[v8 + 1];
      v11 = (__int128 *)(v9 + v6);
      v12 = 3LL;
      do
      {
        v10 += 8;
        v13 = *v11;
        v11 += 8;
        *(v10 - 8) = v13;
        *(v10 - 7) = *(v11 - 7);
        *(v10 - 6) = *(v11 - 6);
        *(v10 - 5) = *(v11 - 5);
        *(v10 - 4) = *(v11 - 4);
        *(v10 - 3) = *(v11 - 3);
        *(v10 - 2) = *(v11 - 2);
        *(v10 - 1) = *(v11 - 1);
        --v12;
      }
      while ( v12 );
      v14 = *v11;
      v3[v8 + 101] = &v3[v8 + 1];
      *v10 = v14;
      v15 = *(__int64 (**)(void))(**(_QWORD **)(*((_QWORD *)this + 1617) + v9 + 16) + 368LL);
      v16 = v15 == CGlobalCompositionSurfaceInfo::GetLastIndependentFlipState
          ? CGlobalCompositionSurfaceInfo::GetLastIndependentFlipState()
          : v15();
      LODWORD(v3[v8 + 103]) = v16;
      ++v4;
      ++*((_DWORD *)v3 + 418);
      v6 = *((_QWORD *)this + 1617);
    }
    while ( v4 < -1030792151 * (unsigned int)((*((_QWORD *)this + 1618) - v6) >> 4) );
  }
  if ( *((_BYTE *)this + 19472) )
  {
    *((_OWORD *)v3 + 105) = *((_OWORD *)this + 1210);
    *((_OWORD *)v3 + 106) = *((_OWORD *)this + 1211);
    *((_OWORD *)v3 + 107) = *((_OWORD *)this + 1212);
    *((_OWORD *)v3 + 108) = *((_OWORD *)this + 1213);
    *((_OWORD *)v3 + 109) = *((_OWORD *)this + 1214);
    *((_OWORD *)v3 + 110) = *((_OWORD *)this + 1215);
    *((_OWORD *)v3 + 111) = *((_OWORD *)this + 1216);
    v7 = *((_QWORD *)this + 2434);
    ++*((_DWORD *)v3 + 450);
    v3[224] = v7;
  }
}
