/*
 * XREFs of ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18016E020
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x180072340 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016AED0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18016C070 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x18016DF50 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x18016E700 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IAEBV?$span@$$CBH$0?0@gsl@@@Z @ 0x180244320 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180152900 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x18016EC80 (PrimitiveStorage--Alloc_16_.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@_N@Z @ 0x18016EF10 (-Initialize@CDrawListPrimitive@@IEAAXAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAPEAX_K@Z @ 0x18016F30C (-Alloc@-$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18019C1C4 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x1801CD2D0 (-HasClip@CCpuClip@@QEBA_NXZ.c)
 *     ??1?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAA@XZ @ 0x1801CDE60 (--1-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
        CDrawListEntryBuilder *this,
        __int64 a2,
        struct CPrimitiveColor *a3,
        const struct _D3DCOLORVALUE *a4)
{
  void *v4; // rsi
  __int64 v7; // rdi
  unsigned int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  char v13; // r13
  int v14; // edx
  int v15; // r15d
  unsigned int v16; // eax
  __int64 v17; // rbx
  void (__fastcall ***v18)(_QWORD, __int64); // rax
  void (__fastcall ***v19)(_QWORD, __int64); // rcx
  bool v20; // zf
  volatile signed __int32 *v21; // r15
  int v22; // esi
  int v23; // r13d
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r12
  void (__fastcall ***v27)(_QWORD, __int64); // rcx
  __int64 (__fastcall *v28)(CMILRefCountImpl *); // rax
  int v29; // et0
  _QWORD *v30; // r15
  _OWORD *p_r; // rbx
  __int64 v32; // r8
  __int64 v33; // rsi
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  LPVOID v38; // rax
  __int64 v39; // rdi
  LPVOID v40; // rsi
  const void *v41; // rbx
  signed __int64 v42; // rdi
  void *v43; // rax
  CDrawListEntryBuilder *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  _QWORD *v48; // r9
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  signed __int64 v52; // rdi
  __int64 v53; // rax
  CCpuClip *v54; // rcx
  int v55; // eax
  struct CShape *v56; // rdi
  __int64 (__fastcall *v57)(struct CShape *, _QWORD, __int64 *); // rbx
  int v58; // eax
  int Src; // [rsp+20h] [rbp-B9h]
  int v60; // [rsp+38h] [rbp-A1h]
  __int64 v61; // [rsp+40h] [rbp-99h] BYREF
  struct CShape *v62; // [rsp+48h] [rbp-91h] BYREF
  unsigned int v63; // [rsp+50h] [rbp-89h] BYREF
  int v64; // [rsp+54h] [rbp-85h]
  int v65; // [rsp+58h] [rbp-81h]
  int v66; // [rsp+5Ch] [rbp-7Dh]
  int v67[4]; // [rsp+60h] [rbp-79h] BYREF
  __int64 v68; // [rsp+70h] [rbp-69h]
  char *v69; // [rsp+80h] [rbp-59h]
  volatile signed __int32 *v70; // [rsp+88h] [rbp-51h]
  __int128 v71; // [rsp+90h] [rbp-49h]
  const struct _D3DCOLORVALUE *v72; // [rsp+A8h] [rbp-31h]
  char *v73; // [rsp+B0h] [rbp-29h]
  int v74[4]; // [rsp+C0h] [rbp-19h] BYREF
  __int64 v75; // [rsp+D0h] [rbp-9h]
  __int64 v76; // [rsp+E0h] [rbp+7h] BYREF
  __int64 v77[9]; // [rsp+E8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]
  void (__fastcall ***v79)(_QWORD, __int64); // [rsp+140h] [rbp+67h] BYREF
  struct CPrimitiveColor *v80; // [rsp+150h] [rbp+77h]
  const struct _D3DCOLORVALUE *v81; // [rsp+158h] [rbp+7Fh]

  v81 = a4;
  v80 = a3;
  v4 = (void *)*((_QWORD *)this + 511);
  v7 = (__int64)(*((_QWORD *)this + 512) - (_QWORD)v4) >> 1;
  v8 = 0;
  if ( !v7 )
  {
LABEL_2:
    v9 = (__int64)(*((_QWORD *)this + 23) - *((_QWORD *)this + 22)) >> 4;
    if ( v9 )
      *((_QWORD *)this + 23) -= 16 * v9;
    v10 = (__int64)(*((_QWORD *)this + 267) - *((_QWORD *)this + 266)) >> 4;
    if ( v10 )
      *((_QWORD *)this + 267) -= 16 * v10;
    v11 = (__int64)(*((_QWORD *)this + 512) - *((_QWORD *)this + 511)) >> 1;
    if ( v11 )
      *((_QWORD *)this + 512) -= 2 * v11;
    *((_QWORD *)this + 510) = 0LL;
    *((_QWORD *)this + 558) = 0LL;
    return v8;
  }
  v13 = *((_BYTE *)this + 29);
  v76 = _mm_unpacklo_ps((__m128)*((unsigned int *)this + 1), (__m128)*((unsigned int *)this + 2)).m128_u64[0];
  v79 = 0LL;
  if ( v7 == -1 || !v4 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v14 = *((_DWORD *)this + 1020);
  v15 = *(_DWORD *)this;
  *(_QWORD *)v74 = *((_QWORD *)this + 266);
  *(_QWORD *)v67 = *((_QWORD *)this + 22);
  v74[2] = 8 * v15 + 16;
  v16 = v14;
  v67[2] = v74[2];
  v74[3] = v14;
  v67[3] = v14;
  v63 = v14;
  v64 = v14;
  v65 = v15;
  v66 = v7;
  if ( (v14 & 1) != 0 )
  {
    v16 = v14 - (v14 & 1) + 2;
    v63 = v16;
    if ( v14 )
      v64 = v14 - (v14 & 1) + 2;
  }
  if ( v16 > 0x10000 || (unsigned int)v7 > 0x1FFFE )
  {
    v63 = 0;
    v66 = 0;
  }
  v17 = PrimitiveStorage::Alloc_16_(&v63);
  if ( v17 )
  {
    LOBYTE(v60) = v13;
    CDrawListPrimitive::Initialize(v17, (int)v67, (int)v74, v15, v4, v7, (__int64)&v76, v60);
    v18 = (void (__fastcall ***)(_QWORD, __int64))v17;
    v8 = 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x41u, 0LL);
    v18 = 0LL;
    v8 = -2147024882;
  }
  v19 = v79;
  v79 = v18;
  if ( v19 )
    (**v19)(v19, 1LL);
  if ( (v8 & 0x80000000) == 0 )
  {
    v20 = *((_BYTE *)this + 4493) == 0;
    v21 = (volatile signed __int32 *)*((_QWORD *)this + 10);
    v71 = 0LL;
    v70 = v21;
    v72 = a4;
    if ( v20 )
    {
      v69 = 0LL;
      v73 = 0LL;
    }
    else
    {
      v69 = (char *)this + 4472;
      v73 = (char *)this + 4472;
    }
    v20 = *((_BYTE *)this + 4492) == 0;
    v22 = *((_DWORD *)this + 6);
    LODWORD(v71) = v22;
    if ( !v20 )
    {
      v22 &= ~1u;
      *((_BYTE *)this + 4492) = 0;
      LODWORD(v71) = v22;
    }
    v20 = *((_BYTE *)this + 4490) == 0;
    v23 = v22;
    v61 = 0LL;
    if ( v20 && CCpuClip::HasClip(*((CCpuClip **)this + 2)) )
    {
      v62 = 0LL;
      v55 = CCpuClip::ResolveClip(v54, &v62, 0LL);
      v8 = v55;
      if ( v55 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v55, 0x7C9u, 0LL);
        goto LABEL_65;
      }
      v56 = v62;
      v57 = *(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v62 + 24LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v61);
      v58 = v57(v56, 0LL, &v61);
      v8 = v58;
      if ( v58 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v58, 0x7CAu, 0LL);
        goto LABEL_65;
      }
      v24 = v61;
      v23 = v22;
      *((_QWORD *)&v71 + 1) = v61;
    }
    else
    {
      v24 = *((_QWORD *)&v71 + 1);
    }
    v77[0] = 0LL;
    v25 = CThreadLocalObjectCache<CDrawListEntry,CDrawListEntry>::Alloc();
    v26 = v25;
    if ( v25 )
    {
      *(_DWORD *)(v25 + 8) = 0;
      *(_QWORD *)v25 = &CDrawListEntry::`vftable';
      v27 = v79;
      v79 = 0LL;
      *(_QWORD *)(v25 + 16) = v27;
      *(_QWORD *)(v25 + 24) = v21;
      if ( v21 )
      {
        v28 = **(__int64 (__fastcall ***)(CMILRefCountImpl *))v21;
        if ( v28 == CMILRefCountImpl::AddReference )
        {
          v29 = _InterlockedAdd(v21, 1u);
          if ( (v29 < 0) ^ __OFSUB__(v28, CMILRefCountImpl::AddReference) | (v29 == 0) )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x18,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              Src);
          v30 = v73;
          p_r = (_OWORD *)&v72->r;
          v24 = *((_QWORD *)&v71 + 1);
          v22 = v71;
LABEL_32:
          *(_QWORD *)(v26 + 32) = v24;
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
          *(_QWORD *)(v26 + 40) = v80;
          *(_DWORD *)(v26 + 48) = 1065353216;
          *(_DWORD *)(v26 + 52) = 1065353216;
          *(_DWORD *)(v26 + 56) = 1065353216;
          *(_DWORD *)(v26 + 60) = 1065353216;
          *(_DWORD *)(v26 + 64) = v22;
          if ( p_r )
            *(_OWORD *)(v26 + 48) = *p_r;
          if ( v30 )
          {
            *(_QWORD *)(v26 + 68) = *v30;
            *(_DWORD *)(v26 + 64) = v23 | 0x100;
          }
          (**(void (__fastcall ***)(__int64))v26)(v26);
          v32 = *((_QWORD *)this + 15);
          v33 = *((_QWORD *)this + 14);
          v34 = (v32 - v33) >> 3;
          v8 = 0;
          if ( !((*((_QWORD *)this + 16) - v32) >> 3) )
          {
            v35 = v34 + 1;
            v36 = (*((_QWORD *)this + 16) - v33) >> 3;
            v62 = (struct CShape *)(v34 + 1);
            if ( v34 + 1 < v34 )
            {
              std::_Xoverflow_error("overflow");
              __debugbreak();
            }
            v37 = v36 >> 1;
            if ( v36 <= ~(v36 >> 1) && v36 + v37 >= v35 )
            {
              v35 = v36 + v37;
              v62 = (struct CShape *)(v36 + v37);
            }
            v38 = operator new[](saturated_mul(v35, 8uLL));
            v39 = *((_QWORD *)this + 15);
            v68 = 0LL;
            v40 = v38;
            v41 = (const void *)*((_QWORD *)this + 14);
            v42 = v39 - (_QWORD)v41;
            *(_QWORD *)v67 = v38;
            *(_QWORD *)&v67[2] = v34;
            v75 = 0LL;
            *(_OWORD *)v74 = *(_OWORD *)v67;
            v43 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(
                            v74,
                            v42 >> 3);
            memmove_0(v43, v41, v42);
            v44 = (CDrawListEntryBuilder *)*((_QWORD *)this + 14);
            *((_QWORD *)this + 14) = v40;
            if ( v44 == (CDrawListEntryBuilder *)((char *)this + 136) )
              v44 = 0LL;
            operator delete(v44);
            v33 = *((_QWORD *)this + 14);
            v32 = v33 + 8 * v34;
            v45 = v33 + 8LL * (_QWORD)v62;
            *((_QWORD *)this + 15) = v32;
            *((_QWORD *)this + 16) = v45;
          }
          v46 = (v32 - v33) >> 3;
          v47 = v46 - v34;
          v48 = (_QWORD *)(v33 + 8 * v46);
          if ( !v48 )
            goto LABEL_62;
          v49 = ((v32 - v33) >> 3) - v34;
          if ( v47 > 1 )
            v49 = 1LL;
          v50 = 8 * v49;
          if ( v32 != v32 - v50 )
          {
            *v48 = *(_QWORD *)(v32 - 8);
            if ( v32 - 8 != v32 - v50 )
LABEL_62:
              _invalid_parameter_noinfo_noreturn();
          }
          if ( v47 > 1 )
          {
            if ( v46 && (!v33 || v46 < 0) )
              goto LABEL_62;
            *(_QWORD *)&v67[2] = (v32 - v33) >> 3;
            v68 = *(_QWORD *)&v67[2];
            *(_QWORD *)v67 = v33;
            v52 = -8LL * v34 + 8 * (v46 - 1);
            v53 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(v67, -(v52 >> 3));
            memmove_0((void *)(v53 - v52), (const void *)(v33 + 8 * v34), v52);
          }
          *((_QWORD *)this + 15) += 8LL;
          *(_QWORD *)(v33 + 8 * v34) = v26;
          v51 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
          }
          if ( v79 )
            (**v79)(v79, 1LL);
          goto LABEL_2;
        }
        v28((CMILRefCountImpl *)v21);
      }
      v30 = v69;
      p_r = (_OWORD *)&v81->r;
      goto LABEL_32;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentry.cpp",
      (const char *)0x8007000ELL);
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x7CFu, 0LL);
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(v77);
LABEL_65:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v61);
    std::unique_ptr<CDrawListPrimitive>::~unique_ptr<CDrawListPrimitive>(&v79);
    return v8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x7B1u, 0LL);
  if ( v79 )
    (**v79)(v79, 1LL);
  return v8;
}
