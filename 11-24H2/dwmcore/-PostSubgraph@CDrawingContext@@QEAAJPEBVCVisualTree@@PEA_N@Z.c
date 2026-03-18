/*
 * XREFs of ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180082470
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800831A0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 * Callees:
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18004B570 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180082B30 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?GetTargetResource@?$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ @ 0x1800B0A10 (-GetTargetResource@-$CWeakReference@VCVisual@@@@QEBAPEAVCVisual@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180207678 (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180264314 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@XZ @ 0x180265664 (-GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimat.c)
 *     ??1?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18028B3A8 (--1-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$com_p.c)
 *     ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@@Z @ 0x18028C17C (-SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnima.c)
 *     ?_Tidy@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18028C3C4 (-_Tidy@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$c.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PostSubgraph(CDrawingContext *this, const struct CVisualTree *a2, bool *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rsi
  __int64 v8; // r11
  int v9; // eax
  int v10; // eax
  int v11; // eax
  CDrawingContext *v12; // rcx
  __int64 (__fastcall *v13)(CDrawingContext *__hidden); // rax
  int v14; // eax
  int v15; // ecx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  _QWORD *v20; // r10
  _QWORD *v21; // r11
  _QWORD *v22; // r12
  __int64 v23; // r14
  _QWORD *v24; // r11
  __int64 *i; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  _BYTE *v35; // rdx
  __int64 j; // rcx
  _QWORD **v37; // rcx
  _QWORD *v38; // rcx
  _QWORD *k; // rax
  struct CProjectedShadowReceiver ***ProjectedShadowReceivers; // rax
  struct CProjectedShadowReceiver **v41; // r15
  struct CProjectedShadowReceiver **n; // r14
  struct CProjectedShadowReceiver *v43; // rbp
  _DWORD *v44; // r8
  __int64 v45; // rcx
  _BYTE *v46; // rdx
  unsigned int m; // eax
  _QWORD ***v48; // rcx
  _QWORD **v49; // rcx
  _QWORD *v50; // rcx
  __int64 (*v51)(void); // rax
  _QWORD *v52; // r14
  __int64 TargetResource; // rax
  __int64 v54; // rbp
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 ii; // rbx
  CProjectedShadowScene *v58; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v60; // r10
  struct _LIST_ENTRY *jj; // rcx
  int v62; // eax
  void *DirtyRegionVisualizationData; // rbp
  unsigned int v64; // [rsp+20h] [rbp-38h]

  v3 = 0;
  if ( *((_BYTE *)this + 7936) )
  {
    if ( *((_BYTE *)this + 7937) )
      v7 = *((_QWORD *)this + 402);
    else
      v7 = *((_QWORD *)this + 994);
  }
  else
  {
    v7 = 0LL;
  }
  v8 = *((_QWORD *)this + 25);
  *a3 = 1;
  if ( v8 )
  {
    v20 = *(_QWORD **)(v8 + 2208);
    v21 = *(_QWORD **)(v8 + 2216);
    v22 = (_QWORD *)*((_QWORD *)this + 996);
    while ( v20 != v21 )
    {
      if ( v7 == *v20 )
      {
        v31 = (_QWORD *)v20[1];
        if ( v22[1] - *v22 == v20[2] - (_QWORD)v31 )
        {
          v32 = *v22 - (_QWORD)v31;
          while ( (_QWORD *)((char *)v31 + v32) != (_QWORD *)v22[1] )
          {
            if ( *(_QWORD *)((char *)v31 + v32) != *v31 || *(_QWORD *)((char *)v31 + v32 + 8) != v31[1] )
              goto LABEL_36;
            v31 += 2;
          }
          if ( !*((_BYTE *)this + 193) )
          {
            v3 = -2147221184;
            v64 = 6098;
LABEL_21:
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, v64, 0LL);
            goto LABEL_30;
          }
          break;
        }
      }
LABEL_36:
      v20 += 8;
    }
    v23 = *(_QWORD *)(v22[1] - 8LL);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 184LL))(v23) )
    {
      v24 = (_QWORD *)(v7 + 328);
LABEL_40:
      if ( v24 )
      {
        for ( i = (__int64 *)v24[18]; i != (__int64 *)v24[19]; ++i )
        {
          v26 = (_QWORD *)*v22;
          v27 = *(_QWORD *)(*i + 2072);
          if ( *(_QWORD *)(*i + 2080) - v27 == v22[1] - *v22 )
          {
            v28 = v27 - (_QWORD)v26;
            while ( (_QWORD *)((char *)v26 + v28) != *(_QWORD **)(*i + 2080) )
            {
              if ( *(_QWORD *)((char *)v26 + v28) != *v26 || *(_QWORD *)((char *)v26 + v28 + 8) != v26[1] )
                goto LABEL_119;
              v26 += 2;
            }
            *(_QWORD *)(*i + 2232) = *(_QWORD *)(*(_QWORD *)(v24[31] + 24LL) + 888LL);
            v29 = *i;
            goto LABEL_50;
          }
LABEL_119:
          ;
        }
      }
    }
    else
    {
      v33 = *(_QWORD *)(v7 + 232);
      if ( *(int *)v33 < 0 )
      {
        v34 = *(unsigned int *)(v33 + 4);
        v35 = (_BYTE *)(v33 + 8);
        for ( j = 0LL; (unsigned int)j < (unsigned int)v34; ++v35 )
        {
          if ( *v35 == 1 )
            break;
          j = (unsigned int)(j + 1);
        }
        v37 = (unsigned int)j >= (unsigned int)v34 ? 0LL : (_QWORD **)(v34 + 15 + v33 + 8 * j - (((_BYTE)v34 + 15) & 7));
        v38 = *v37;
        if ( v38 )
        {
          for ( k = (_QWORD *)*v38; k != v38; k = (_QWORD *)*k )
          {
            v24 = k - 44;
            if ( k[4] == v23 )
              goto LABEL_40;
          }
        }
      }
    }
    v29 = 0LL;
LABEL_50:
    if ( v29 == *((_QWORD *)this + 25) )
    {
      v30 = *((_QWORD *)this + 26);
      *a3 = 0;
      if ( v30 )
        *(_BYTE *)(v30 + 193) = 1;
      goto LABEL_30;
    }
  }
  if ( (*(_BYTE *)(v7 + 106) & 1) == 0 && (*(_DWORD *)(v7 + 96) & 0x100) != 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
      goto LABEL_8;
    if ( v7 == *((_QWORD *)a2 + 9) )
      goto LABEL_8;
    v44 = *(_DWORD **)(v7 + 232);
    if ( (*v44 & 0x2000000) == 0 )
      goto LABEL_8;
    v45 = (unsigned int)v44[1];
    v46 = v44 + 2;
    for ( m = 0; m < (unsigned int)v45; ++v46 )
    {
      if ( *v46 == 7 )
        break;
      ++m;
    }
    v48 = m >= (unsigned int)v45 ? 0LL : (_QWORD ***)((char *)v44 + 8LL * m - (((_BYTE)v45 + 15) & 7) + v45 + 15);
    v49 = *v48;
    if ( !v49 )
    {
LABEL_8:
      if ( *((_BYTE *)this + 8068) )
      {
        v9 = *((_DWORD *)this + 798);
        if ( v9 )
        {
          if ( *(_BYTE *)((unsigned int)(v9 - 1) + *((_QWORD *)this + 398)) )
          {
            if ( (**(_DWORD **)(v7 + 232) & 0x40000) != 0 )
            {
              ProjectedShadowReceivers = (struct CProjectedShadowReceiver ***)CVisual::GetProjectedShadowReceivers(v7);
              v41 = ProjectedShadowReceivers[1];
              for ( n = *ProjectedShadowReceivers; n != v41; ++n )
              {
                v43 = *n;
                if ( !*((_DWORD *)*n + 26) )
                {
                  for ( ii = *((_QWORD *)v43 + 11); ii != *((_QWORD *)v43 + 10); ii -= 8LL )
                  {
                    v58 = *(CProjectedShadowScene **)(ii - 8);
                    CProjectedShadowScene::DrawShadows(v58, this, v43);
                  }
                }
              }
            }
          }
        }
      }
      if ( (*(_BYTE *)(v7 + 105) & 0xC) != 0 )
      {
        v10 = *((_DWORD *)g_pComposition + 1570);
        if ( v10 )
          *((_DWORD *)g_pComposition + 1570) = v10 - 1;
      }
      v3 = 0;
      while ( 1 )
      {
        v11 = *((_DWORD *)this + 68);
        if ( !v11 || *(_QWORD *)(*((_QWORD *)this + 33) + 16LL * (unsigned int)(v11 - 1) + 8) != v7 )
          break;
        v12 = (CDrawingContext *)((char *)this + 16);
        v13 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*((_QWORD *)this + 2) + 96LL);
        if ( v13 == CDrawingContext::Pop )
          v14 = CDrawingContext::Pop(v12);
        else
          v14 = v13(v12);
        v3 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xE1Fu, 0LL);
          v64 = 6148;
          goto LABEL_21;
        }
      }
      v15 = *((_DWORD *)this + 822);
      v16 = 0LL;
      v17 = (unsigned int)(v15 - 1);
      if ( v15 )
        v16 = (_QWORD *)(*((_QWORD *)this + 410) + 16LL * (unsigned int)v17);
      if ( *v16 == v7 && v15 )
        *((_DWORD *)this + 822) = v17;
      if ( (*(_BYTE *)(v7 + 105) & 1) == 0 )
        goto LABEL_27;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 993) + 184LL))(
             *((_QWORD *)this + 993),
             v17) )
      {
        v62 = CDrawingContext::DrawDirtyRegionVisualizationForCurrentNode(this);
        v3 = v62;
        if ( v62 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v62, 0x1810u, 0LL);
          goto LABEL_30;
        }
        goto LABEL_28;
      }
      if ( (*(_BYTE *)(v7 + 105) & 1) == 0 )
      {
LABEL_27:
        if ( (**(_DWORD **)(v7 + 232) & 0x100000) != 0 )
        {
          DirtyRegionVisualizationData = (void *)CVisual::GetDirtyRegionVisualizationData(v7, v17);
          std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>>::_Tidy(DirtyRegionVisualizationData);
          if ( DirtyRegionVisualizationData )
          {
            std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>>::~deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<D2D_RECT_F>>>(DirtyRegionVisualizationData);
            operator delete(DirtyRegionVisualizationData, 0x28uLL);
          }
          CVisual::SetDirtyRegionVisualizationData(v7, 0LL);
        }
      }
LABEL_28:
      if ( *((_BYTE *)this + 193) )
        *a3 = 0;
      goto LABEL_30;
    }
    v50 = *v49;
    v51 = *(__int64 (**)(void))(*v50 + 184LL);
    if ( (char *)v51 == (char *)CVisualReferenceController::GetVisualNoRef )
    {
      v52 = v50 + 10;
      if ( !wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(v50 + 10) )
      {
        v54 = 0LL;
LABEL_88:
        if ( v54 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
          {
            v55 = v7 + 328;
LABEL_91:
            if ( v55 && !*(_BYTE *)(v55 + 12) )
            {
              v56 = v54;
              while ( v54 )
              {
                if ( v54 == *((_QWORD *)a2 + 9) )
                  goto LABEL_8;
                if ( v56 )
                {
                  v56 = *(_QWORD *)(v56 + 88);
                  if ( v56 )
                  {
                    if ( v54 == v56 )
                      break;
                    v56 = *(_QWORD *)(v56 + 88);
                    if ( v54 == v56 )
                      break;
                  }
                }
                v54 = *(_QWORD *)(v54 + 88);
              }
              goto LABEL_30;
            }
          }
          else
          {
            TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v7);
            v60 = TreeDataListHead;
            if ( TreeDataListHead )
            {
              for ( jj = TreeDataListHead->Flink; jj != v60; jj = jj->Flink )
              {
                v55 = (__int64)&jj[-22];
                if ( (const struct CVisualTree *)jj[2].Flink == a2 )
                  goto LABEL_91;
              }
            }
          }
        }
        goto LABEL_8;
      }
      TargetResource = CWeakReference<CVisual>::GetTargetResource(*v52);
    }
    else
    {
      TargetResource = v51();
    }
    v54 = TargetResource;
    goto LABEL_88;
  }
LABEL_30:
  v18 = *((_DWORD *)this + 798);
  if ( v18 )
    *((_DWORD *)this + 798) = v18 - 1;
  return v3;
}
