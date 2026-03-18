/*
 * XREFs of ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18016D520
 * Callers:
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x18016D360 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800712E0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800B708C (-terminate@details@gsl@@YAXXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800C6F80 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800D7CE0 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18010E730 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x180143A90 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z @ 0x180151674 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@PEBVMatrix3x3@@M@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@std@@PEAX@1@@Z @ 0x180151DA0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KPEAUBufferStream@BamoImpl@Microsoft@@@st.c)
 *     ?ComputeLocalToTextureTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x1801AE670 (-ComputeLocalToTextureTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1801AEC30 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1801B14F0 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x1801B3090 (-ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV-$span@PEBVCDrawListBrush@@$0-0@g.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListPrimitive(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  CBrushDrawListGenerator *v5; // r13
  __int64 v6; // rcx
  bool v7; // r14
  __int64 v8; // rdx
  char v9; // r15
  unsigned int v10; // esi
  _BYTE *v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // xmm0_4
  int v14; // xmm1_4
  int v15; // ecx
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // esi
  gsl::details *v20; // rcx
  unsigned int v21; // edx
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  char v23; // r14
  unsigned __int64 *v24; // r12
  unsigned int v25; // esi
  int v26; // r15d
  __int64 v27; // rbx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rax
  __m128 v31; // xmm3
  __m128 v32; // xmm2
  int v33; // eax
  gsl::details *v34; // rcx
  void *v35; // rcx
  _QWORD *v36; // rbx
  void *v37; // rcx
  unsigned __int64 v38; // rsi
  int v39; // r15d
  int v40; // r12d
  __int64 v41; // r10
  unsigned int v42; // xmm1_4
  int v43; // xmm0_4
  int v44; // xmm1_4
  int v45; // xmm0_4
  int v46; // xmm1_4
  __int64 v47; // rax
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  int v50; // xmm0_4
  unsigned int v51; // xmm1_4
  unsigned int v52; // xmm0_4
  unsigned int v53; // r8d
  bool v54; // zf
  __int128 *v55; // rax
  unsigned int v56; // xmm1_4
  unsigned int v57; // xmm0_4
  __int128 v58; // xmm0
  CDrawListEntryBuilder *v59; // rcx
  int v60; // eax
  void *v61; // rcx
  _QWORD *v62; // rbx
  void *v63; // rcx
  _QWORD *v64; // rbx
  void *v65; // rcx
  CShape *v67; // [rsp+38h] [rbp-D0h] BYREF
  void *v68; // [rsp+40h] [rbp-C8h] BYREF
  int v69; // [rsp+48h] [rbp-C0h]
  int v70; // [rsp+4Ch] [rbp-BCh]
  char *v71; // [rsp+50h] [rbp-B8h]
  int v72; // [rsp+58h] [rbp-B0h]
  int v73; // [rsp+5Ch] [rbp-ACh]
  __int128 v74; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v75; // [rsp+70h] [rbp-98h]
  int v76; // [rsp+80h] [rbp-88h]
  __int128 v77; // [rsp+88h] [rbp-80h]
  unsigned __int64 v78; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v79[9]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v80[36]; // [rsp+C4h] [rbp-44h] BYREF
  _BYTE v81[24]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v82; // [rsp+100h] [rbp-8h]
  __int128 v83; // [rsp+108h] [rbp+0h]
  __int128 v84; // [rsp+118h] [rbp+10h] BYREF
  __int128 v85; // [rsp+128h] [rbp+20h] BYREF
  __int128 v86; // [rsp+138h] [rbp+30h] BYREF
  __int128 v87; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v88[28]; // [rsp+158h] [rbp+50h] BYREF

  v2 = *((_QWORD *)a2 + 1);
  v3 = 0LL;
  v5 = this;
  *(_QWORD *)&v84 = this;
  if ( *(_QWORD *)(v2 + 80) )
    goto LABEL_25;
  v6 = *((_QWORD *)a2 + 2);
  v86 = 0LL;
  v87 = 0LL;
  v7 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6) == 1
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v5 + 17) - 1.0) & _xmm) < 0.0000011920929;
  v8 = *((unsigned int *)a2 + 45);
  v9 = 0;
  v10 = 0;
  if ( (_DWORD)v8 )
  {
    do
    {
      v11 = (_BYTE *)*((_QWORD *)a2 + v10 + 17);
      if ( v11 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v11 + 8LL))(
               *((_QWORD *)a2 + v10 + 17),
               2LL) )
        {
          v7 = v7 && CDrawListBitmap::IsOpaque((CDrawListBitmap *)(v11 + 56));
          if ( v9 || v11[146] )
            v9 = 1;
        }
        else if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v11 + 8LL))(v11, 1LL) )
        {
          v11 = 0LL;
        }
      }
      v8 = *((unsigned int *)a2 + 45);
      v12 = v10++;
      *((_QWORD *)&v86 + v12) = v11;
    }
    while ( v10 < (unsigned int)v8 );
    v3 = 0LL;
  }
  v13 = *((_DWORD *)a2 + 67);
  v14 = *((_DWORD *)a2 + 68);
  v70 = *((_DWORD *)a2 + 66);
  v15 = *((_DWORD *)v5 + 13) | (v9 != 0 ? 0x10 : 0);
  v71 = (char *)a2 + 24;
  v73 = *((unsigned __int16 *)a2 + 138);
  v69 = v14;
  v68 = (void *)__PAIR64__(v13, v8);
  v72 = v15;
  if ( v7 )
    v15 |= 1u;
  *(_QWORD *)&v77 = v8;
  *((_QWORD *)&v77 + 1) = &v86;
  v72 = v15;
  v16 = (__int64 *)*((_QWORD *)a2 + 2);
  v85 = v77;
  v17 = *v16;
  v67 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, CShape **))(v17 + 16))(v16, &v85, &v67);
  v19 = v18;
  if ( v18 >= 0 )
  {
    CDrawListEntryBuilder::Begin(
      *((CDrawListEntryBuilder **)a2 + 1),
      (const struct DrawListEntryBuilderSetupParams *)&v68,
      (unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v67);
    if ( v67 )
      (*(void (__fastcall **)(CShape *))(*(_QWORD *)v67 + 8LL))(v67);
LABEL_25:
    v20 = (gsl::details *)*((unsigned int *)a2 + 44);
    *(_QWORD *)&v74 = &v67;
    v67 = 0LL;
    *((_QWORD *)&v74 + 1) = 0LL;
    LOBYTE(v75) = 1;
    *(_QWORD *)&v77 = v20;
    *((_QWORD *)&v77 + 1) = (char *)a2 + 136;
    if ( a2 != (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-136LL || !(_DWORD)v20 )
    {
      v21 = *((_DWORD *)a2 + 47);
      v85 = v77;
      v19 = CBrushDrawListGenerator::ComputeBrushClamp(
              (unsigned __int64 *)&v85,
              v21,
              (__int64)a2 + 192,
              (_QWORD *)&v74 + 1);
      if ( (_BYTE)v75 )
      {
        v22 = *(void (__fastcall ****)(_QWORD, __int64))v74;
        *(_QWORD *)v74 = *((_QWORD *)&v74 + 1);
        if ( v22 )
          (**v22)(v22, 1LL);
      }
      if ( (v19 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x209u, 0LL);
        goto LABEL_115;
      }
      if ( (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)v67 + 16LL))(v67) )
        goto LABEL_115;
      *(_QWORD *)&v77 = 0LL;
      v78 = 0LL;
      v23 = 1;
      v24 = 0LL;
      memset_0(v88, 0, sizeof(v88));
      v25 = 0;
      v26 = 50529027;
      if ( *((_DWORD *)a2 + 44) )
      {
        do
        {
          v27 = *((_QWORD *)a2 + v25 + 17);
          if ( v27 )
          {
            if ( v23 && *((_DWORD *)a2 + 66) != 1 && *(_BYTE *)(v27 + 52) && *(_DWORD *)(v27 + 48) != 50529027 )
              v23 = 0;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v27 + 8LL))(
                   *((_QWORD *)a2 + v25 + 17),
                   2LL) )
            {
              CSurfaceDrawListBrush::ComputeLocalToTextureTransform(
                (CSurfaceDrawListBrush *)v27,
                (struct Matrix3x3 *)&v88[7 * v25]);
              v29 = *((_DWORD *)a2 + 47);
              if ( _bittest(&v29, v25) )
              {
                v30 = Matrix3x3::operator*((char *)a2 + 228, v79, v28);
                *(_OWORD *)v28 = *(_OWORD *)v30;
                *(_OWORD *)(v28 + 16) = *(_OWORD *)(v30 + 16);
                *(_DWORD *)(v28 + 32) = *(_DWORD *)(v30 + 32);
              }
              else if ( !v24
                     && *(_BYTE *)(v27 + 147)
                     && (COERCE_FLOAT(*(_DWORD *)(v27 + 12) & _xmm) < 0.000081380211
                      && COERCE_FLOAT(*(_DWORD *)(v27 + 16) & _xmm) < 0.000081380211
                      || COERCE_FLOAT(*(_DWORD *)(v27 + 8) & _xmm) < 0.000081380211
                      && COERCE_FLOAT(*(_DWORD *)(v27 + 20) & _xmm) < 0.000081380211) )
              {
                v24 = &v78;
                v31 = (__m128)*(unsigned int *)(v27 + 136);
                v32 = (__m128)*(unsigned int *)(v27 + 140);
                v32.m128_f32[0] = (float)((float)(v32.m128_f32[0] * *(float *)(v27 + 16))
                                        + (float)(*(float *)(v27 + 136) * *(float *)(v27 + 8)))
                                + *(float *)(v27 + 24);
                v31.m128_f32[0] = (float)((float)(v31.m128_f32[0] * *(float *)(v27 + 12))
                                        + (float)(*(float *)(v27 + 140) * *(float *)(v27 + 20)))
                                + *(float *)(v27 + 28);
                v78 = _mm_unpacklo_ps(v32, v31).m128_u64[0];
              }
              if ( !*(_BYTE *)(v27 + 52)
                || *(_BYTE *)(v27 + 144)
                || *(float *)(v27 + 120) == -3.4028235e38
                && *(float *)(v27 + 124) == -3.4028235e38
                && *(float *)(v27 + 128) == 3.4028235e38
                && *(float *)(v27 + 132) == 3.4028235e38 )
              {
                *(_BYTE *)(v28 + 52) = 0;
              }
              else
              {
                *(_BYTE *)(v28 + 52) = 1;
                *(_OWORD *)(v28 + 36) = *(_OWORD *)(v27 + 120);
              }
            }
          }
          ++v25;
        }
        while ( v25 < *((_DWORD *)a2 + 44) );
        v3 = 0LL;
        v5 = (CBrushDrawListGenerator *)v84;
        *(_QWORD *)&v77 = v24;
      }
      v86 = 0LL;
      LOBYTE(v72) = 0;
      v87 = 0LL;
      if ( CShape::IsAxisAlignedRectangle(v67) )
      {
        v84 = 0LL;
        v33 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(*(_QWORD *)v67 + 48LL))(v67, &v84, 0LL);
        v19 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x25Au, 0LL);
          if ( (char)v72 == -1LL || !(_BYTE)v72 || (char)v72 == 1LL )
            goto LABEL_115;
          v35 = v68;
          v36 = (_QWORD *)*((_QWORD *)v68 + 1);
          if ( !*((_BYTE *)v36 + 25) )
          {
            do
            {
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
                (__int64)&v68,
                (__int64)&v68,
                (__int64 *)v36[2]);
              v37 = v36;
              v36 = (_QWORD *)*v36;
              operator delete(v37, 0x30uLL);
            }
            while ( !*((_BYTE *)v36 + 25) );
            v35 = v68;
          }
          goto LABEL_76;
        }
        v86 = v84;
        if ( v23 )
        {
          if ( *((_DWORD *)a2 + 66) == 1 )
            v26 = 0;
          LODWORD(v87) = v26;
        }
        else
        {
          v34 = (gsl::details *)*((unsigned int *)a2 + 44);
          *(_QWORD *)&v85 = v34;
          *((_QWORD *)&v85 + 1) = (char *)a2 + 136;
          if ( a2 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-136LL && (_DWORD)v34 )
          {
            gsl::details::terminate(v34);
            JUMPOUT(0x18016DF43LL);
          }
          CBrushDrawListGenerator::ProcessBrushClampEdges_Rectangle(&v85, &v86, &v87);
        }
LABEL_95:
        v54 = *((_BYTE *)a2 + 277) == 0;
        *(_QWORD *)&v85 = *((unsigned int *)a2 + 45);
        *((_QWORD *)&v85 + 1) = v88;
        memset(v81, 0, sizeof(v81));
        v83 = v85;
        if ( v54 )
        {
          v55 = &v84;
          HIDWORD(v84) = *((_DWORD *)v5 + 17);
          *(float *)&v56 = *((float *)&v84 + 3) * *((float *)v5 + 15);
          *(float *)&v57 = *((float *)&v84 + 3) * *((float *)v5 + 16);
          *(float *)&v84 = *((float *)&v84 + 3) * *((float *)v5 + 14);
          *(_QWORD *)((char *)&v84 + 4) = __PAIR64__(v57, v56);
        }
        else
        {
          v55 = &v85;
          v85 = *(_OWORD *)((char *)v5 + 56);
        }
        v58 = *v55;
        v59 = (CDrawListEntryBuilder *)*((_QWORD *)a2 + 1);
        v82 = v77;
        *(_OWORD *)v81 = v58;
        v60 = CDrawListEntryBuilder::Insert(
                v59,
                (const struct PrimitiveGeometryDesc *)&v86,
                (const struct PrimitiveVertexAttributesDesc *)v81,
                0LL);
        v19 = v60;
        if ( v60 >= 0 )
        {
          if ( (char)v72 != -1LL && (_BYTE)v72 && (char)v72 != 1LL )
          {
            v61 = v68;
            v62 = (_QWORD *)*((_QWORD *)v68 + 1);
            if ( !*((_BYTE *)v62 + 25) )
            {
              do
              {
                std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
                  (__int64)&v68,
                  (__int64)&v68,
                  (__int64 *)v62[2]);
                v63 = v62;
                v62 = (_QWORD *)*v62;
                operator delete(v63, 0x30uLL);
              }
              while ( !*((_BYTE *)v62 + 25) );
              v61 = v68;
            }
            operator delete(v61, 0x30uLL);
          }
          if ( v67 )
            std::default_delete<CShape>::operator()();
          return v19;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v60, 0x28Cu, 0LL);
        if ( (char)v72 == -1LL || !(_BYTE)v72 || (char)v72 == 1LL )
          goto LABEL_115;
        v35 = v68;
        v64 = (_QWORD *)*((_QWORD *)v68 + 1);
        if ( !*((_BYTE *)v64 + 25) )
        {
          do
          {
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
              (__int64)&v68,
              (__int64)&v68,
              (__int64 *)v64[2]);
            v65 = v64;
            v64 = (_QWORD *)*v64;
            operator delete(v65, 0x30uLL);
          }
          while ( !*((_BYTE *)v64 + 25) );
          operator delete(v68, 0x30uLL);
LABEL_115:
          if ( v67 )
            (**(void (__fastcall ***)(CShape *, __int64))v67)(v67, 1LL);
          return v19;
        }
LABEL_76:
        operator delete(v35, 0x30uLL);
        goto LABEL_115;
      }
      BYTE8(v87) |= 1u;
      *(_QWORD *)&v86 = v67;
      if ( v23 && !*((_QWORD *)a2 + 3) && !*((_QWORD *)a2 + 5) )
        goto LABEL_95;
      v38 = *((unsigned int *)a2 + 44);
      v39 = *((_DWORD *)a2 + 47);
      if ( a2 != (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-136LL || !MEMORY[0x28] )
      {
        v40 = *((_DWORD *)a2 + 66);
        if ( *((_DWORD *)a2 + 44) )
        {
          do
          {
            v41 = *((_QWORD *)a2 + v3 + 17);
            if ( v41 && *(_BYTE *)(v41 + 52) )
            {
              v42 = *(_DWORD *)(v41 + 12);
              if ( ((1 << v3) & v39) != 0 )
              {
                v79[0] = *(_DWORD *)(v41 + 8);
                v43 = *(_DWORD *)(v41 + 16);
                v79[1] = v42;
                v44 = *(_DWORD *)(v41 + 20);
                v79[3] = v43;
                v45 = *(_DWORD *)(v41 + 24);
                v79[4] = v44;
                v46 = *(_DWORD *)(v41 + 28);
                v79[6] = v45;
                v79[7] = v46;
                v79[2] = 0;
                v79[5] = 0;
                v79[8] = 1065353216;
                v47 = Matrix3x3::operator*(v79, v80, (char *)a2 + 192);
                v48 = *(_OWORD *)v47;
                v49 = *(_OWORD *)(v47 + 16);
                LODWORD(v47) = *(_DWORD *)(v47 + 32);
                v74 = v48;
                v76 = v47;
                v75 = v49;
              }
              else
              {
                LODWORD(v74) = *(_DWORD *)(v41 + 8);
                v50 = *(_DWORD *)(v41 + 16);
                *(_QWORD *)((char *)&v74 + 4) = v42;
                v51 = *(_DWORD *)(v41 + 20);
                HIDWORD(v74) = v50;
                v52 = *(_DWORD *)(v41 + 24);
                *(_QWORD *)&v75 = v51;
                *((_QWORD *)&v75 + 1) = __PAIR64__(*(_DWORD *)(v41 + 28), v52);
                v76 = 1065353216;
              }
              if ( v40 == 1 )
                v53 = 0;
              else
                v53 = *(_DWORD *)(v41 + 48);
              CEdgeFlagsMap::AddEdgeFlags(
                (__int64)&v68,
                (FLOAT *)(v41 + 32),
                v53,
                (FLOAT *)&v74,
                SLODWORD(FLOAT_0_000081380211));
            }
            ++v3;
          }
          while ( v3 < v38 );
          v5 = (CBrushDrawListGenerator *)v84;
        }
        *((_QWORD *)&v86 + 1) = &v68;
        goto LABEL_95;
      }
    }
    gsl::details::terminate(v20);
    __debugbreak();
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x1F6u, 0LL);
  if ( v67 )
    (*(void (__fastcall **)(CShape *))(*(_QWORD *)v67 + 8LL))(v67);
  return v19;
}
