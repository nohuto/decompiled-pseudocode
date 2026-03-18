/*
 * XREFs of ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x180009488
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800097B8 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180048BB8 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 * Callees:
 *     ?RemoveLast@CVisualTreePath@@QEAAJXZ @ 0x180007AE4 (-RemoveLast@CVisualTreePath@@QEAAJXZ.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x180009080 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009360 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z @ 0x1800C3810 (-GetWorldTransform@CTreeData@@IEBAXPEAVCMILMatrix@@PEA_N0@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  const struct CVisualTree *v14; // rbx
  char v15; // al
  struct CTreeData *v16; // rdi
  __int128 v17; // xmm1
  int v18; // eax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  struct CTreeData *v22; // rdi
  int v23; // eax
  unsigned int v24; // ebx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *j; // rcx
  __int64 v27; // rdx
  __int64 v28; // r9
  struct _LIST_ENTRY *v29; // rax
  struct _LIST_ENTRY *k; // rcx
  unsigned int v31; // [rsp+20h] [rbp-E0h]
  bool v32[16]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v34; // [rsp+50h] [rbp-B0h]
  __int128 v35; // [rsp+60h] [rbp-A0h]
  __int128 v36; // [rsp+70h] [rbp-90h]
  int v37; // [rsp+80h] [rbp-80h]
  _OWORD v38[4]; // [rsp+90h] [rbp-70h] BYREF
  int v39; // [rsp+D0h] [rbp-30h]
  _BYTE *v40; // [rsp+E0h] [rbp-20h] BYREF
  __int128 *v41; // [rsp+E8h] [rbp-18h]
  __int64 *v42; // [rsp+F0h] [rbp-10h]
  _BYTE v43[32]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v44; // [rsp+118h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v37 = 0;
  v39 = 0;
  v6 = a2[1];
  v8 = *a2;
  v9 = (char *)v6 - (char *)*a2;
  v33 = _xmm;
  v34 = _xmm;
  v40 = v43;
  v35 = _xmm;
  v36 = *(__int128 *)&_xmm.r;
  v41 = (__int128 *)v43;
  v38[0] = _xmm;
  v38[1] = _xmm;
  v42 = &v44;
  LOWORD(v37) = 10666;
  v38[2] = _xmm;
  v38[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
  LOWORD(v39) = 10666;
  v10 = detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
          (detail::liberal_expansion_policy *)&v40,
          0LL,
          v9 >> 4);
  while ( v8 != v6 )
  {
    v11 = *v8++;
    *(_OWORD *)v10 = v11;
    v10 += 16;
  }
  v12 = (const struct CVisualTree *)*((_QWORD *)*a2 + 1);
  for ( i = a2[1]; ; i = v41 )
  {
    v14 = (const struct CVisualTree *)*((_QWORD *)i - 1);
    v15 = (*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v14 + 184LL))(v14);
    if ( v14 == v12 )
    {
      if ( v15 )
      {
        v16 = (CVisual *)((char *)a1 + 328);
LABEL_8:
        if ( v16 )
        {
          v32[0] = 0;
          CVisual::EnsureWorldTransform(a1, v14, v16);
          CTreeData::GetWorldTransform(v16, (struct CMILMatrix *)v38, v32, 0LL);
          CMILMatrix::Multiply((CMILMatrix *)&v33, (const struct CMILMatrix *)v38);
          v17 = v34;
          v18 = v37;
          *(_OWORD *)a4 = v33;
          v19 = v35;
          *(_OWORD *)(a4 + 16) = v17;
          v20 = v36;
          *(_OWORD *)(a4 + 32) = v19;
          *(_OWORD *)(a4 + 48) = v20;
          *(_DWORD *)(a4 + 64) = v18;
          detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&v40);
          return 0LL;
        }
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(a1);
        if ( TreeDataListHead )
        {
          for ( j = TreeDataListHead->Flink; j != TreeDataListHead; j = j->Flink )
          {
            v16 = (struct CTreeData *)&j[-22];
            if ( (const struct CVisualTree *)j[2].Flink == v14 )
              goto LABEL_8;
          }
        }
      }
      v24 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x6AAu, 0LL);
      v27 = 1754LL;
      goto LABEL_21;
    }
    if ( !v15 )
    {
      v29 = CVisual::GetTreeDataListHead(a1);
      if ( v29 )
      {
        for ( k = v29->Flink; k != v29; k = k->Flink )
        {
          v22 = (struct CTreeData *)&k[-22];
          if ( (const struct CVisualTree *)k[2].Flink == v14 )
            goto LABEL_12;
        }
      }
LABEL_28:
      v24 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x6AAu, 0LL);
      v27 = 1736LL;
LABEL_21:
      v28 = 2291674884LL;
      goto LABEL_22;
    }
    v22 = (CVisual *)((char *)a1 + 328);
LABEL_12:
    if ( !v22 )
      goto LABEL_28;
    v32[0] = 0;
    CVisual::EnsureWorldTransform(a1, v14, v22);
    CTreeData::GetWorldTransform(v22, (struct CMILMatrix *)v38, v32, 0LL);
    CMILMatrix::Multiply((CMILMatrix *)&v33, (const struct CMILMatrix *)v38);
    a1 = (CVisual *)*((_QWORD *)v41 - 2);
    v23 = CVisualTreePath::RemoveLast((CVisualTreePath *)&v40);
    v24 = v23;
    if ( v23 < 0 )
      break;
  }
  v28 = (unsigned int)v23;
  v27 = 1743LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
    (const char *)v28,
    v31);
  detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>((__int64)&v40);
  return v24;
}
