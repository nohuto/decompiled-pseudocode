/*
 * XREFs of ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18016CE28
 * Callers:
 *     ?Create@CCpuClipAntialiasSink@@SAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180211580 (-Create@CCpuClipAntialiasSink@@SAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialia.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009BF4 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x180047290 (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 *     ??0CPolygonBuilder@@QEAA@XZ @ 0x18005E110 (--0CPolygonBuilder@@QEAA@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCPolygonBuilder@@V1@@@SAPEAX_K@Z @ 0x18005E220 (-Alloc@-$CThreadLocalObjectCache@VCPolygonBuilder@@V1@@@SAPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180089340 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x18008F360 (-TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEB.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180091460 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScribble@@@Z @ 0x1800FCF9C (--4-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCComputeScrib.c)
 *     ?reset@?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAAXPEAVCDrawListPrimitive@@@Z @ 0x18016975C (-reset@-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAA.c)
 *     ?reserve_region@?$vector_facade@GV?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAG_K0@Z @ 0x180169B0C (-reserve_region@-$vector_facade@GV-$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@deta.c)
 *     ?GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18016BE70 (-GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ?GetMeshCacheManager@@YAPEAVCMeshCacheManager@@XZ @ 0x18016CE08 (-GetMeshCacheManager@@YAPEAVCMeshCacheManager@@XZ.c)
 *     ?TryAddEdge@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBUSinkRoutingInfo@CCpuClipAntialiasSink@@M@Z @ 0x18016D7CC (-TryAddEdge@-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEAA_NAEBUD2D_VECT.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18016DEF8 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016EEC0 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?resize@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x1801917E8 (-resize@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_ex.c)
 *     ?Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z @ 0x1801B5D4C (-Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z.c)
 *     ??1?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801D7E10 (--1-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansi.c)
 *     ??4?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801FBA4C (--4-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygonEdgeMap@USinkRoutingInf.c)
 *     ?resize@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x1802082E8 (-resize@-$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V-$buffer_impl@UVertexXYW_ColorDW_UV2_AA.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18021EB28 (-clear_region@-$vector_facade@GV-$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x18021F2A0 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 *     ??1?$expandable_buffer_base@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@@detail@@QEAA@XZ @ 0x18022603C (--1-$expandable_buffer_base@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@@detail@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCpuClipAntialiasSink::Initialize(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        const struct CShape *a4,
        CMILMatrix *a5)
{
  unsigned __int16 v6; // r13
  __int64 v7; // r15
  char v8; // al
  __m128 v9; // xmm6
  __m128 v10; // xmm8
  struct CPolygonBuilder *v11; // rcx
  CPolygonBuilder *v12; // rax
  CPolygonBuilder *v13; // rax
  CPolygonBuilder *v14; // rbx
  int v15; // eax
  unsigned int v16; // edi
  CMeshCacheManager *MeshCacheManager; // rax
  _QWORD *v18; // rdi
  struct Mesh::VertexAAOffsetsResource *MeshAAOffsets; // rax
  __int64 v20; // rsi
  __int64 v21; // rsi
  _WORD *v22; // rdi
  __int64 i; // rcx
  _BYTE *v24; // rdi
  __int64 v25; // r12
  void *v26; // r14
  __int64 v27; // rsi
  unsigned int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int16 v32; // ax
  int v33; // r14d
  float v34; // xmm6_4
  unsigned int v35; // eax
  int v36; // r13d
  __int64 v37; // r14
  __int64 v38; // r15
  unsigned __int64 v39; // rcx
  float v40; // xmm0_4
  __int64 v41; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int16 v45; // di
  __int64 v46; // rcx
  float *v47; // rdx
  __int64 v48; // rax
  unsigned int v49; // r15d
  int v50; // r14d
  char v51; // [rsp+48h] [rbp-C0h]
  int v52; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v53; // [rsp+50h] [rbp-B8h] BYREF
  CPolygonBuilder *v54; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A8h] BYREF
  int v56; // [rsp+68h] [rbp-A0h]
  int v57; // [rsp+6Ch] [rbp-9Ch]
  int v58[4]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v59; // [rsp+80h] [rbp-88h] BYREF
  int v60; // [rsp+88h] [rbp-80h]
  int v61; // [rsp+8Ch] [rbp-7Ch]
  float v62[2]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v63; // [rsp+98h] [rbp-70h]
  __int128 v64; // [rsp+A8h] [rbp-60h]
  __int128 v65; // [rsp+B8h] [rbp-50h]
  _BYTE *v66; // [rsp+C8h] [rbp-40h] BYREF
  int v67; // [rsp+D0h] [rbp-38h]
  int v68; // [rsp+D4h] [rbp-34h]
  __int64 v69; // [rsp+D8h] [rbp-30h]
  int v70; // [rsp+E0h] [rbp-28h]
  _BYTE v71[12]; // [rsp+E4h] [rbp-24h]
  __int128 v72; // [rsp+F0h] [rbp-18h]
  __int64 v73; // [rsp+100h] [rbp-8h]
  __int128 v74; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v75[64]; // [rsp+118h] [rbp+10h] BYREF
  int v76; // [rsp+158h] [rbp+50h]
  __int64 v77[2]; // [rsp+168h] [rbp+60h] BYREF
  int v78; // [rsp+178h] [rbp+70h]
  int v79; // [rsp+17Ch] [rbp+74h]
  _BYTE *v80; // [rsp+188h] [rbp+80h] BYREF
  _BYTE *v81; // [rsp+190h] [rbp+88h]
  _QWORD *v82; // [rsp+198h] [rbp+90h]
  _BYTE v83[200]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v84[3]; // [rsp+268h] [rbp+160h] BYREF
  _BYTE v85[160]; // [rsp+280h] [rbp+178h] BYREF
  char v86; // [rsp+320h] [rbp+218h] BYREF
  _BYTE *v87; // [rsp+328h] [rbp+220h] BYREF
  _BYTE *v88; // [rsp+330h] [rbp+228h]
  __int64 *v89; // [rsp+338h] [rbp+230h]
  _BYTE v90[2560]; // [rsp+348h] [rbp+240h] BYREF
  __int64 v91; // [rsp+D48h] [rbp+C40h] BYREF
  void *retaddr; // [rsp+DD0h] [rbp+CC8h]

  LOWORD(v52) = a2;
  *(_QWORD *)v58 = a1;
  v6 = a2;
  v7 = a1;
  if ( a3 )
    std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::operator=(
      a1 + 16,
      a3);
  LODWORD(v54) = 0;
  LODWORD(v53) = 0;
  CMILMatrix::Get2DScaleDimensionsWithPerspective(a5, &v54, &v53, 0LL);
  v8 = CMILMatrix::Is2DAxisAlignedPreserving(a5);
  v9 = (__m128)(unsigned int)v54;
  v10 = (__m128)(unsigned int)v53;
  v51 = v8;
  v63 = 0LL;
  v76 = 0;
  v64 = 0LL;
  v62[1] = 0.0;
  v65 = 0LL;
  v62[0] = 0.015625 / fmaxf(*(float *)&v54, *(float *)&v53);
  CMILMatrix::SetScale((CMILMatrix *)v75, *(float *)&v54, *(float *)&v53, 1.0, 0.0, 0.0, 0.0);
  v12 = (CPolygonBuilder *)CThreadLocalObjectCache<CPolygonBuilder,CPolygonBuilder>::Alloc(v11);
  if ( !v12 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v13 = CPolygonBuilder::CPolygonBuilder(v12);
  v54 = v13;
  v14 = v13;
  if ( v13 )
    (*(void (__fastcall **)(CPolygonBuilder *))(*(_QWORD *)v13 + 8LL))(v13);
  v15 = (*(__int64 (__fastcall **)(const struct CShape *, CPolygonBuilder *))(*(_QWORD *)a4 + 32LL))(a4, v14);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x65,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassink.cpp",
      (const char *)(unsigned int)v15);
    if ( v14 )
      (*(void (__fastcall **)(CPolygonBuilder *))(*(_QWORD *)v14 + 16LL))(v14);
    return v16;
  }
  if ( !(unsigned int)((__int64)(*((_QWORD *)v14 + 3) - *((_QWORD *)v14 + 2)) >> 3) )
  {
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v54);
    return 0LL;
  }
  LODWORD(v53) = 3;
  v84[0] = v85;
  v84[1] = v85;
  v84[2] = &v86;
  detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::resize(
    v84,
    (unsigned int)((__int64)(*((_QWORD *)v14 + 3) - *((_QWORD *)v14 + 2)) >> 3),
    &v53);
  WORD6(v65) = 0;
  *(_QWORD *)&v63 = (unsigned int)((__int64)(*((_QWORD *)v14 + 3) - *((_QWORD *)v14 + 2)) >> 3);
  *((_QWORD *)&v63 + 1) = *((_QWORD *)v14 + 2);
  *(_QWORD *)&v64 = v84[0];
  DWORD2(v65) = 1;
  MeshCacheManager = GetMeshCacheManager();
  v78 = 0;
  v79 = 0;
  v18 = (_QWORD *)(v7 + 32);
  *(_OWORD *)v77 = _xmm;
  MeshAAOffsets = CMeshCacheManager::TryGetMeshAAOffsets(
                    MeshCacheManager,
                    (const struct Mesh::MeshDesc *)v62,
                    a4,
                    (const struct D2D1::Matrix3x2F *)v77,
                    0);
  wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>::operator=(
    (__int64 *)(v7 + 32),
    (void (__fastcall ***)(_QWORD))MeshAAOffsets);
  if ( !*(_QWORD *)(v7 + 32) )
  {
    *v18 = 0LL;
    Mesh::VertexAAOffsetsResource::Create(
      (const struct Mesh::MeshDesc *)v62,
      (struct Mesh::VertexAAOffsetsResource **)(v7 + 32));
  }
  *((_QWORD *)&v64 + 1) = *v18 + 24LL;
  v87 = v90;
  v20 = 3 * v63;
  v88 = v90;
  v89 = &v91;
  detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::resize(
    &v87,
    2 * v63 + 2);
  v80 = v83;
  v81 = v83;
  v82 = v84;
  v21 = 2 * v20;
  if ( v21 )
  {
    v22 = (_WORD *)detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>>::reserve_region(
                     (__int64 *)&v80,
                     0LL,
                     v21);
    for ( i = v21; i; --i )
      *v22++ = 0;
  }
  else
  {
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>>::clear_region(
      &v80,
      0LL,
      0LL);
  }
  v24 = v87;
  v25 = (v88 - v87) >> 6;
  *(_DWORD *)&v71[8] = 0;
  v73 = 0LL;
  v26 = v80;
  v27 = (unsigned __int64)(v87 + 32) & -(__int64)(v87 != 0LL);
  v66 = v87;
  v69 = v27;
  v67 = 64;
  v68 = v25;
  v70 = 64;
  *(_QWORD *)v71 = (unsigned int)v25;
  gsl::details::extent_type<-1>::extent_type<-1>(&v55, (v81 - v80) >> 1);
  if ( v55 == -1 || !v26 && v55 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  *(_QWORD *)&v72 = v55;
  *((_QWORD *)&v72 + 1) = v26;
  Mesh::GenerateGeometry((const struct Mesh::MeshDesc *)v62, (struct Mesh::GeometryBuffers *)&v66);
  if ( !CMILMatrix::IsIdentity<0>((__int64)v75) )
  {
    v49 = 0;
    if ( *(_QWORD *)&v71[4] )
    {
      v50 = 0;
      do
      {
        Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
          (_DWORD)v24 + v50,
          v50 + v27,
          0,
          (unsigned int)v75,
          (__int64)&v24[v50],
          v50 + v27);
        ++v49;
        v50 += 64;
      }
      while ( (unsigned __int64)v49 < *(_QWORD *)&v71[4] );
      v14 = v54;
    }
    v7 = *(_QWORD *)v58;
  }
  v28 = 0;
  do
  {
    v29 = (int)v28;
    v28 += 64;
    *(_OWORD *)&v24[*(_DWORD *)&v71[4] << 6] = *(_OWORD *)&v24[v29];
    *(_OWORD *)((int)(*(_DWORD *)&v71[4] << 6) + v27) = *(_OWORD *)(v29 + v27);
    ++*(_QWORD *)&v71[4];
  }
  while ( v28 < 0x80 );
  v30 = *((_QWORD *)&v72 + 1);
  v77[1] = 0LL;
  v31 = 3 * v63;
  v53 = _mm_unpacklo_ps(v9, v10).m128_u64[0];
  v32 = *(_WORD *)&v71[4] - 2;
  LOBYTE(v78) = 1;
  *(_WORD *)(*((_QWORD *)&v72 + 1) + 4 * v31 - 8) = *(_WORD *)&v71[4] - 2;
  *(_WORD *)(v30 + 4 * v31 - 4) = v32;
  v59 = v27;
  *(_WORD *)(v30 + 4 * v31 - 10) = *(_WORD *)&v71[4] - 1;
  v60 = 64;
  v77[0] = v7 + 40;
  v61 = v25;
  v55 = (__int64)v24;
  v56 = 64;
  v57 = v25;
  v74 = v72;
  v33 = CDrawListPrimitive::Create((__int64)&v55, (int)&v59, 0, (__int64)&v74, (__int64)&v53, 0, &v77[1]);
  if ( (_BYTE)v78 )
    std::unique_ptr<CDrawListPrimitive>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))v77[0],
      (__int64 (__fastcall ***)(_QWORD, __int64))v77[1]);
  if ( v33 >= 0 )
  {
    v34 = 0.0;
    if ( *(_QWORD *)&v71[4] )
    {
      v35 = 2;
      LODWORD(v53) = 2;
      v36 = 128;
      do
      {
        v37 = v36;
        v38 = v36;
        v39 = v35;
        v59 = v35;
        *(float *)&v24[v36 - 124] = v34;
        *(_DWORD *)&v24[v36 - 128] = 0;
        *(_DWORD *)&v24[v36 - 120] = 1065353216;
        *(float *)&v24[v36 - 60] = v34;
        *(_DWORD *)&v24[v36 - 64] = 1065353216;
        *(_DWORD *)&v24[v36 - 56] = 1065353216;
        if ( (unsigned __int64)v35 < *(_QWORD *)&v71[4] )
        {
          v40 = sqrtf_0(
                  (float)((float)(*(float *)(v36 + v27 + 4) - *(float *)(v36 + v27 - 124))
                        * (float)(*(float *)(v36 + v27 + 4) - *(float *)(v36 + v27 - 124)))
                + (float)((float)(*(float *)(v36 + v27) - *(float *)(v36 + v27 - 128))
                        * (float)(*(float *)(v36 + v27) - *(float *)(v36 + v27 - 128))));
          v35 = v53;
          v34 = v34 + v40;
          v39 = v59;
        }
        v35 += 2;
        *(_QWORD *)(v36 + v27 - 128) = *(_QWORD *)&v24[v36 - 128];
        v36 += 128;
        *(_DWORD *)(v37 + v27 - 120) = 0;
        *(_QWORD *)(v38 + v27 - 64) = *(_QWORD *)&v24[v38 - 64];
        *(_DWORD *)(v38 + v27 - 52) = 1065353216;
        *(_DWORD *)(v38 + v27 - 56) = 0;
        LODWORD(v53) = v35;
      }
      while ( v39 < *(_QWORD *)&v71[4] );
      v14 = v54;
      v7 = *(_QWORD *)v58;
      v6 = v52;
    }
    v77[1] = 0LL;
    v77[0] = v7 + 48;
    v55 = v27;
    v59 = _mm_unpacklo_ps(
            (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue,
            (__m128)(unsigned int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue).m128_u64[0];
    LOBYTE(v78) = 1;
    v56 = 64;
    v57 = v25;
    *(_QWORD *)v58 = v24;
    v58[2] = 64;
    v58[3] = v25;
    v74 = v72;
    v16 = CDrawListPrimitive::Create((__int64)v58, (int)&v55, 0, (__int64)&v74, (__int64)&v59, 0, &v77[1]);
    if ( (_BYTE)v78 )
      std::unique_ptr<CDrawListPrimitive>::reset(
        (__int64 (__fastcall ****)(_QWORD, __int64))v77[0],
        (__int64 (__fastcall ***)(_QWORD, __int64))v77[1]);
    if ( (v16 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0xFC,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassink.cpp",
        (const char *)v16);
      if ( (v81 - v80) >> 1 )
        v81 -= 2 * ((v81 - v80) >> 1);
      detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v80);
      v41 = (v88 - v87) >> 6;
      if ( v41 )
        v88 -= 64 * v41;
      detail::expandable_buffer_base<VertexXYW_ColorDW_UV2_AAFixup,40>::~expandable_buffer_base<VertexXYW_ColorDW_UV2_AAFixup,40>(&v87);
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::~vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>(v84);
      (*(void (__fastcall **)(CPolygonBuilder *))(*(_QWORD *)v14 + 16LL))(v14);
      return v16;
    }
    if ( (v81 - v80) >> 1 )
      v81 -= 2 * ((v81 - v80) >> 1);
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v80);
    v43 = (v88 - v87) >> 6;
    if ( v43 )
      v88 -= 64 * v43;
    detail::expandable_buffer_base<VertexXYW_ColorDW_UV2_AAFixup,40>::~expandable_buffer_base<VertexXYW_ColorDW_UV2_AAFixup,40>(&v87);
    v44 = v63;
    v45 = 0;
    v52 = v6;
    if ( (_QWORD)v63 )
    {
      v46 = 0LL;
      do
      {
        v47 = (float *)(*((_QWORD *)&v64 + 1) + 32 * v46);
        if ( v51 && (*v47 == 0.0 || v47[1] == 0.0) )
        {
          *(_BYTE *)(v7 + 56) = 1;
        }
        else
        {
          HIWORD(v52) = v45;
          CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::TryAddEdge(
            v7 + 16,
            (_DWORD)v47,
            DWORD2(v63) + 8 * v46,
            (unsigned int)&v52,
            LODWORD(FLOAT_0_000081380211));
          v44 = v63;
        }
        v46 = ++v45;
      }
      while ( v45 < v44 );
    }
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::~vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>(v84);
    (*(void (__fastcall **)(CPolygonBuilder *))(*(_QWORD *)v14 + 16LL))(v14);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    (wil::details::in1diag3 *)retaddr,
    (void *)0xCE,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassink.cpp",
    (const char *)(unsigned int)v33);
  if ( (v81 - v80) >> 1 )
    v81 -= 2 * ((v81 - v80) >> 1);
  detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)&v80);
  v48 = (v88 - v87) >> 6;
  if ( v48 )
    v88 -= 64 * v48;
  detail::expandable_buffer_base<VertexXYW_ColorDW_UV2_AAFixup,40>::~expandable_buffer_base<VertexXYW_ColorDW_UV2_AAFixup,40>(&v87);
  detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::~vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>(v84);
  (*(void (__fastcall **)(CPolygonBuilder *))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v33;
}
