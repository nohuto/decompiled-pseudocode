/*
 * XREFs of ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x180037500
 * Callers:
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180032808 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800C35D0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180186168 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180230200 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     _lambda_0e17c6475725e05fea3019b9a50aca17_::operator() @ 0x180281FA0 (_lambda_0e17c6475725e05fea3019b9a50aca17_--operator().c)
 *     _lambda_62ff84c7c0707752f96e4fa15018ccd2_::operator() @ 0x1802821A0 (_lambda_62ff84c7c0707752f96e4fa15018ccd2_--operator().c)
 *     ?GetHardwareShapeBounds@CCursorVisual@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCDesktopTree@@@Z @ 0x18029057C (-GetHardwareShapeBounds@CCursorVisual@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800374C0 (-IsOfType@CMatrixTransform3D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CVisualTree::_IsInTree(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  float v6; // xmm8_4
  __int64 v7; // rdi
  char v8; // al
  _DWORD *v9; // r8
  float v10; // xmm6_4
  float v11; // xmm0_4
  __int64 v12; // rax
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v16; // edx
  float *v17; // rcx
  __int64 v18; // rax
  _BYTE *v19; // rdx
  unsigned int i; // ecx
  float **v21; // rsi
  float *v22; // rsi
  __int64 (__fastcall *v23)(); // rax
  char v24; // al

  v4 = a2;
  v6 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v7 = a2;
  while ( 1 )
  {
    if ( !v4 )
      return 0;
    if ( (unsigned int)(a3 - 1) <= 1 )
    {
      v8 = *(_BYTE *)(v4 + 106);
      if ( (v8 & 0x40) == 0 || (v8 & 1) != 0 )
        return 0;
      if ( a3 == 2 )
      {
        v9 = *(_DWORD **)(v4 + 232);
        v10 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        if ( (*v9 & 0x800000) != 0 )
        {
          v18 = (unsigned int)v9[1];
          v19 = v9 + 2;
          for ( i = 0; i < (unsigned int)v18; ++v19 )
          {
            if ( *v19 == 9 )
              break;
            ++i;
          }
          if ( i >= (unsigned int)v18 )
            v21 = 0LL;
          else
            v21 = (float **)((char *)v9 + 8LL * i - (((_BYTE)v18 + 15) & 7) + v18 + 15);
          v22 = *v21;
          v23 = *(__int64 (__fastcall **)())(*(_QWORD *)v22 + 64LL);
          if ( v23 == CEffectGroupGeneratedT<CEffectGroup,CEffect>::IsOfType
            || ((char *)v23 != (char *)CMatrixTransform3D::IsOfType
              ? (v24 = ((__int64 (__fastcall *)(float *, __int64))v23)(v22, 58LL))
              : (v24 = CMatrixTransform3D::IsOfType((__int64)v22, 58)),
                v24) )
          {
            v10 = v22[20];
          }
        }
        v11 = fminf(1.0, fmaxf(v10, 0.0));
        if ( v4 == *(_QWORD *)(a1 + 72) )
        {
          v14 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
        }
        else
        {
          v12 = *(_QWORD *)(v4 + 224);
          if ( (*(_DWORD *)(v12 + 4) & 0x8000000) != 0 )
          {
            v16 = *(float *)(v12 + 12);
            v17 = (float *)(v12 + 12);
            if ( (LODWORD(v16) & 0x7F000000) != 0x5000000 )
            {
              do
              {
                v17 = (float *)((char *)v17 + (LODWORD(v16) & 0xFFFFFF) + 4);
                v16 = *v17;
              }
              while ( (*(_DWORD *)v17 & 0x7F000000) != 0x5000000 );
            }
            v13 = v17[1];
          }
          else
          {
            v13 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
          }
          v14 = fminf(1.0, fmaxf(v13, 0.0));
        }
        v6 = v6 * (float)(v11 * v14);
        if ( COERCE_FLOAT(LODWORD(v6) & _xmm) < 0.0000011920929 )
          return 0;
      }
    }
    if ( v4 == *(_QWORD *)(a1 + 72) )
      break;
    if ( v7 )
    {
      v7 = *(_QWORD *)(v7 + 88);
      if ( v7 )
      {
        if ( v4 == v7 )
          return 0;
        v7 = *(_QWORD *)(v7 + 88);
        if ( v4 == v7 )
          return 0;
      }
    }
    v4 = *(_QWORD *)(v4 + 88);
  }
  return 1;
}
