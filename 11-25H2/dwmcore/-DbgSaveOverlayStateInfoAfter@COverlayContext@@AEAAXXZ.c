/*
 * XREFs of ?DbgSaveOverlayStateInfoAfter@COverlayContext@@AEAAXXZ @ 0x1800C64EC
 * Callers:
 *     ?PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAIPEA_N@Z @ 0x1801BFBDC (-PresentMPO@COverlayContext@@IEAAJPEAVIOverlaySwapChain@@IAEBV-$vector@UtagRECT@@V-$allocator@Ut.c)
 * Callees:
 *     ?GetLastIndependentFlipState@CGlobalCompositionSurfaceInfo@@UEBA?AW4IndependentFlipState@@XZ @ 0x1800C6650 (-GetLastIndependentFlipState@CGlobalCompositionSurfaceInfo@@UEBA-AW4IndependentFlipState@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall COverlayContext::DbgSaveOverlayStateInfoAfter(COverlayContext *this)
{
  __int64 v2; // rax
  char *v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rax
  __int128 *v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int64 (*v13)(void); // rax
  int v14; // eax

  v2 = *((_QWORD *)this + 1618);
  v3 = (char *)this + 1808 * *((int *)this + 7666);
  v4 = 0;
  v5 = *((_QWORD *)this + 1617);
  if ( -1030792151 * (unsigned int)((v2 - v5) >> 4) )
  {
    do
    {
      if ( v4 >= 2 )
        break;
      v6 = 832LL * v4;
      v7 = 400LL * v4;
      v8 = 3LL;
      v9 = &v3[v6 + 20224];
      v10 = (__int128 *)(v7 + v5);
      do
      {
        v11 = *v10;
        v10 += 8;
        *(_OWORD *)v9 = v11;
        v9 += 128;
        *((_OWORD *)v9 - 7) = *(v10 - 7);
        *((_OWORD *)v9 - 6) = *(v10 - 6);
        *((_OWORD *)v9 - 5) = *(v10 - 5);
        *((_OWORD *)v9 - 4) = *(v10 - 4);
        *((_OWORD *)v9 - 3) = *(v10 - 3);
        *((_OWORD *)v9 - 2) = *(v10 - 2);
        *((_OWORD *)v9 - 1) = *(v10 - 1);
        --v8;
      }
      while ( v8 );
      v12 = *v10;
      *(_QWORD *)&v3[v6 + 20632] = &v3[v6 + 20224];
      *(_OWORD *)v9 = v12;
      v13 = *(__int64 (**)(void))(**(_QWORD **)(v7 + *((_QWORD *)this + 1617) + 16) + 368LL);
      v14 = v13 == CGlobalCompositionSurfaceInfo::GetLastIndependentFlipState
          ? CGlobalCompositionSurfaceInfo::GetLastIndependentFlipState()
          : v13();
      *(_DWORD *)&v3[v6 + 20644] = v14;
      ++v4;
      v5 = *((_QWORD *)this + 1617);
    }
    while ( v4 < -1030792151 * (unsigned int)((*((_QWORD *)this + 1618) - v5) >> 4) );
  }
}
