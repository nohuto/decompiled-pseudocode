/*
 * XREFs of ?_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024183C
 * Callers:
 *     ?AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z @ 0x18001E4B0 (-AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z.c)
 *     ?AddRectToDirtyRegion@SubTreeContext@CPreComputeContext@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180020930 (-AddRectToDirtyRegion@SubTreeContext@CPreComputeContext@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?AddWorldBoundsToDirtyRegion@SubTreeContext@CPreComputeContext@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180022A18 (-AddWorldBoundsToDirtyRegion@SubTreeContext@CPreComputeContext@@AEAAJPEAVCVisual@@AEBV-$TMilRect.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180032808 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180039D50 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0pdffff_EventWriteTransfer @ 0x1801F6064 (McTemplateU0pdffff_EventWriteTransfer.c)
 *     ?Merge@CTreeDirty@@AEAAXII@Z @ 0x180241C4C (-Merge@CTreeDirty@@AEAAXII@Z.c)
 *     ?UpdateOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x180241E64 (-UpdateOverhead@-$CRectangleCollection@$07@@AEAAXII@Z.c)
 *     ?EnsureWeights@?$CRectangleCollection@$07@@AEAAXXZ @ 0x180241EE8 (-EnsureWeights@-$CRectangleCollection@$07@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ceilf_0 @ 0x1802DF5CC (ceilf_0.c)
 *     floorf_0 @ 0x1802DF608 (floorf_0.c)
 */

__int64 __fastcall CTreeDirty::_Add(CTreeDirty *this, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v4; // r14
  int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __m128i v11; // xmm1
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  float v16; // xmm8_4
  float v17; // xmm2_4
  char *v18; // rdi
  unsigned int v19; // r8d
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  CDirtyRegionAnnotation *v22; // rbp
  __int64 v23; // rax
  _QWORD *v25; // rdx
  unsigned int *v26; // rbx
  _QWORD *v27; // rdx
  char *v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // eax
  char *v31; // rcx
  float v32; // xmm0_4
  float *v33; // r11
  unsigned int v34; // edi
  unsigned int v35; // edx
  int v36; // r10d
  unsigned int v37; // r8d
  unsigned int i; // r9d
  unsigned int v39; // ecx
  int v40; // eax
  __m128i X; // [rsp+40h] [rbp-68h]
  __m128i Xa; // [rsp+40h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v4 = 32LL;
  v8 = a3;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 && !IsEmpty((const struct D2D_RECT_F *)a4) )
    McTemplateU0pdffff_EventWriteTransfer(
      v10,
      v9,
      v9,
      v8,
      *(_DWORD *)a4,
      *(_DWORD *)(a4 + 4),
      *(_DWORD *)(a4 + 8),
      *(_DWORD *)(a4 + 12));
  v11 = _mm_loadu_si128((const __m128i *)a4);
  X = v11;
  if ( *((float *)this + 577) > *(float *)v11.m128i_i32 )
    v11.m128i_i32[0] = *((_DWORD *)this + 577);
  v12 = *(float *)&X.m128i_i32[1];
  v13 = *(float *)&X.m128i_i32[1];
  if ( *((float *)this + 578) > *(float *)&X.m128i_i32[1] )
  {
    v12 = *((float *)this + 578);
    v13 = v12;
  }
  v14 = *(float *)&X.m128i_i32[2];
  v15 = *(float *)&X.m128i_i32[2];
  if ( *(float *)&X.m128i_i32[2] > *((float *)this + 579) )
  {
    v14 = *((float *)this + 579);
    v15 = v14;
  }
  v16 = *(float *)&X.m128i_i32[3];
  v17 = *(float *)&X.m128i_i32[3];
  if ( *(float *)&X.m128i_i32[3] > *((float *)this + 580) )
  {
    v16 = *((float *)this + 580);
    v17 = v16;
  }
  if ( v15 <= *(float *)v11.m128i_i32 || v17 <= v13 )
  {
    v16 = 0.0;
    v14 = 0.0;
    v12 = 0.0;
    v11.m128i_i32[0] = 0;
    v15 = 0.0;
    v17 = 0.0;
  }
  if ( v15 > *(float *)v11.m128i_i32 && v17 > v12 )
  {
    if ( COERCE_FLOAT(v11.m128i_i32[0] & _xmm) < 8388608.0 )
      *(float *)v11.m128i_i32 = (float)(int)floorf_0(*(float *)v11.m128i_i32);
    Xa.m128i_i32[0] = v11.m128i_i32[0];
    if ( COERCE_FLOAT(LODWORD(v12) & _xmm) < 8388608.0 )
      v12 = (float)(int)floorf_0(v12);
    *(float *)&Xa.m128i_i32[1] = v12;
    if ( COERCE_FLOAT(LODWORD(v14) & _xmm) < 8388608.0 )
      v14 = (float)(int)ceilf_0(v14);
    *(float *)&Xa.m128i_i32[2] = v14;
    if ( COERCE_FLOAT(LODWORD(v16) & _xmm) < 8388608.0 )
      v16 = (float)(int)ceilf_0(v16);
    v18 = (char *)this + 600;
    *(float *)&Xa.m128i_i32[3] = v16;
    v19 = *((_DWORD *)this + 542);
    if ( v19 == 32 )
    {
      v20 = MIDL_user_allocate(0x610uLL);
      v21 = v20;
      if ( !v20 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Bu, 0LL);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x129,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedirty.cpp",
          (const char *)0x8007000ELL);
        return 2147942414LL;
      }
      memset_0(v20, 0, 0x610uLL);
      v22 = (CDirtyRegionAnnotation *)(v21 + 2);
      do
      {
        CDirtyRegionAnnotation::CDirtyRegionAnnotation(v22);
        v22 = (CDirtyRegionAnnotation *)((char *)v22 + 48);
        --v4;
      }
      while ( v4 );
      v23 = *(_QWORD *)v18;
      if ( *(char **)(*(_QWORD *)v18 + 8LL) != v18 )
LABEL_34:
        __fastfail(3u);
      *v21 = v23;
      v19 = 0;
      v21[1] = v18;
      *(_QWORD *)(v23 + 8) = v21;
      *(_QWORD *)v18 = v21;
    }
    else
    {
      v21 = *(_QWORD **)v18;
    }
    v25 = v21 + 2;
    v26 = (unsigned int *)((char *)this + 16);
    v27 = &v25[6 * v19];
    *((_DWORD *)this + 542) = v19 + 1;
    v27[1] = 0LL;
    *v27 = 0LL;
    v27[2] = a2;
    *((_BYTE *)v27 + 40) = v8;
    *(__m128i *)(v27 + 3) = Xa;
    v28 = (char *)this + 16 * *((unsigned int *)this + 4) + 456;
    v29 = *(_QWORD *)v28;
    if ( *(char **)(*(_QWORD *)v28 + 8LL) != v28 )
      goto LABEL_34;
    *v27 = v29;
    v27[1] = v28;
    *(_QWORD *)(v29 + 8) = v27;
    *(_QWORD *)v28 = v27;
    *(__m128i *)&v26[4 * *v26 + 1] = Xa;
    v30 = *v26 + 1;
    *v26 = v30;
    if ( v30 <= 8 )
    {
      *((_BYTE *)this + 452) = 1;
    }
    else
    {
      if ( v30 > 9 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x3E,
          (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\MergedRect.h",
          (const char *)a4);
      v31 = (char *)this + 16;
      if ( *((_BYTE *)this + 452) )
        CRectangleCollection<8>::EnsureWeights(v31);
      else
        CRectangleCollection<8>::UpdateOverhead(v31, 8LL, 0xFFFFFFFFLL);
      CRectangleCollection<8>::EnsureWeights((char *)this + 16);
      v32 = *((float *)this + 41);
      v33 = (float *)((char *)this + 172);
      v34 = 0;
      v35 = 0;
      v36 = 1;
      v37 = 1;
      for ( i = 1; i < 0x24; ++i )
      {
        if ( v32 == 0.0 )
          break;
        v39 = v34 + 1;
        v34 = 0;
        v40 = v36 + 1;
        if ( v39 != v36 )
        {
          v40 = v36;
          v34 = v39;
        }
        v36 = v40;
        if ( v32 > *v33 )
        {
          v32 = *v33;
          v35 = v34;
          v37 = v40;
        }
        v33 += 2;
      }
      CTreeDirty::Merge(this, v35, v37);
    }
  }
  return 0LL;
}
