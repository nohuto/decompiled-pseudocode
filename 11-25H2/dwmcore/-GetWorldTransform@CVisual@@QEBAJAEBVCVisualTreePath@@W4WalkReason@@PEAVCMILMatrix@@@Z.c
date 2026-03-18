/*
 * XREFs of ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x180009D78
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18000A124 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18016F850 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 * Callees:
 *     ?RemoveLast@CVisualTreePath@@QEAAJXZ @ 0x1800083D0 (-RemoveLast@CVisualTreePath@@QEAAJXZ.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x180009970 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009C50 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800B6FD0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18010C720 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(CVisual *a1, __int128 **a2, __int64 a3, __int64 a4)
{
  __int128 *v6; // rdi
  __int128 *v8; // rbx
  __int64 v9; // r8
  char *v10; // rax
  __int128 v11; // xmm0
  const struct CVisualTree *v12; // r12
  __int128 *i; // rax
  const struct CVisualTree *v14; // rdi
  char v15; // al
  __int128 *v16; // rbx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  int v22; // eax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 *p_Blink; // rbx
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  int v31; // eax
  unsigned int v32; // ebx
  struct _LIST_ENTRY *v33; // rax
  struct _LIST_ENTRY *k; // rcx
  __int64 v35; // rdx
  __int64 v36; // r9
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx
  unsigned int v39; // [rsp+20h] [rbp-E0h]
  __int128 v40; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v41; // [rsp+40h] [rbp-C0h]
  __int128 v42; // [rsp+50h] [rbp-B0h]
  __int128 v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+70h] [rbp-90h]
  __int128 v45; // [rsp+80h] [rbp-80h] BYREF
  __int128 v46; // [rsp+90h] [rbp-70h]
  __int128 v47; // [rsp+A0h] [rbp-60h]
  __int128 v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+C0h] [rbp-40h]
  _BYTE *v50; // [rsp+D0h] [rbp-30h] BYREF
  __int128 *v51; // [rsp+D8h] [rbp-28h]
  __int64 *v52; // [rsp+E0h] [rbp-20h]
  _BYTE v53[32]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v54; // [rsp+108h] [rbp+8h] BYREF
  void *retaddr; // [rsp+138h] [rbp+38h]

  v49 = 0;
  v44 = 0;
  v6 = a2[1];
  v8 = *a2;
  v9 = (char *)v6 - (char *)*a2;
  v45 = _xmm;
  v46 = _xmm;
  v50 = v53;
  v47 = _xmm;
  v48 = *(__int128 *)&_xmm.r;
  v51 = (__int128 *)v53;
  v40 = _xmm;
  v41 = _xmm;
  v52 = &v54;
  LOWORD(v49) = 10666;
  v42 = _xmm;
  v43 = *(__int128 *)&_xmm.r;
  LOWORD(v44) = 10666;
  v10 = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
          (detail::liberal_expansion_policy *)&v50,
          0LL,
          v9 >> 4);
  while ( v8 != v6 )
  {
    v11 = *v8++;
    *(_OWORD *)v10 = v11;
    v10 += 16;
  }
  v12 = (const struct CVisualTree *)*((_QWORD *)*a2 + 1);
  for ( i = a2[1]; ; i = v51 )
  {
    v14 = (const struct CVisualTree *)*((_QWORD *)i - 1);
    v15 = (*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v14 + 184LL))(v14);
    if ( v14 == v12 )
      break;
    if ( !v15 )
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(a1);
      if ( TreeDataListHead )
      {
        for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
        {
          p_Blink = (__int128 *)&j[-22].Blink;
          if ( (const struct CVisualTree *)j[2].Flink == v14 )
            goto LABEL_13;
        }
      }
LABEL_32:
      v32 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x6AAu, 0LL);
      v35 = 1736LL;
      goto LABEL_25;
    }
    p_Blink = (__int128 *)((char *)a1 + 328);
LABEL_13:
    if ( !p_Blink )
      goto LABEL_32;
    CVisual::EnsureWorldTransform(a1, v14, (struct CTreeData *)p_Blink);
    if ( !*((_QWORD *)p_Blink + 28) )
      ModuleFailFastForHRESULT(-2003292412, retaddr);
    v27 = p_Blink[17];
    v28 = p_Blink[18];
    v44 = *((_DWORD *)p_Blink + 84);
    v40 = v27;
    v29 = p_Blink[19];
    v41 = v28;
    v30 = p_Blink[20];
    v42 = v29;
    v43 = v30;
    CMILMatrix::Multiply((CMILMatrix *)&v45, (const struct CMILMatrix *)&v40);
    a1 = (CVisual *)*((_QWORD *)v51 - 2);
    v31 = CVisualTreePath::RemoveLast((CVisualTreePath *)&v50);
    v32 = v31;
    if ( v31 < 0 )
    {
      v36 = (unsigned int)v31;
      v35 = 1743LL;
      goto LABEL_26;
    }
  }
  if ( !v15 )
  {
    v33 = CVisual::GetTreeDataListHead(a1);
    if ( v33 )
    {
      for ( k = v33->Flink; k != v33; k = k->Flink )
      {
        v16 = (__int128 *)&k[-22].Blink;
        if ( (const struct CVisualTree *)k[2].Flink == v14 )
          goto LABEL_8;
      }
    }
    goto LABEL_24;
  }
  v16 = (__int128 *)((char *)a1 + 328);
LABEL_8:
  if ( !v16 )
  {
LABEL_24:
    v32 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x6AAu, 0LL);
    v35 = 1754LL;
LABEL_25:
    v36 = 2291674884LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)v35,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
      (const char *)v36,
      v39);
    detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&v50);
    return v32;
  }
  CVisual::EnsureWorldTransform(a1, v14, (struct CTreeData *)v16);
  if ( !*((_QWORD *)v16 + 28) )
    ModuleFailFastForHRESULT(-2003292412, retaddr);
  v17 = v16[17];
  v18 = v16[18];
  v44 = *((_DWORD *)v16 + 84);
  v40 = v17;
  v19 = v16[19];
  v41 = v18;
  v20 = v16[20];
  v42 = v19;
  v43 = v20;
  CMILMatrix::Multiply((CMILMatrix *)&v45, (const struct CMILMatrix *)&v40);
  v21 = v46;
  v22 = v49;
  *(_OWORD *)a4 = v45;
  v23 = v47;
  *(_OWORD *)(a4 + 16) = v21;
  v24 = v48;
  *(_OWORD *)(a4 + 32) = v23;
  *(_OWORD *)(a4 + 48) = v24;
  *(_DWORD *)(a4 + 64) = v22;
  detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&v50);
  return 0LL;
}
