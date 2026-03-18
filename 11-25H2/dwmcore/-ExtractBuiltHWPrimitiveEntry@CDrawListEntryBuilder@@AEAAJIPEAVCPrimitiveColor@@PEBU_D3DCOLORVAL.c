/*
 * XREFs of ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x180047F70
 * Callers:
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x180047920 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180047EA0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x180090CA0 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800DF8A0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IAEBV?$span@$$CBH$0?0@gsl@@@Z @ 0x18024D7E8 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D.c)
 * Callees:
 *     ?Alloc@?$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAPEAX_K@Z @ 0x1800471A4 (-Alloc@-$CThreadLocalObjectCache@VCDrawListEntry@@V1@@@SAPEAX_K@Z.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@_N@Z @ 0x1800473D0 (-Initialize@CDrawListPrimitive@@IEAAXAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x180047690 (PrimitiveStorage--Alloc_16_.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x180194FE4 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180196A70 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x1801DAA00 (-HasClip@CCpuClip@@QEBA_NXZ.c)
 *     ??1?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAA@XZ @ 0x1801DC1B0 (--1-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v17; // ecx
  char *v18; // rbx
  char *v19; // rax
  char *v20; // rcx
  bool v21; // zf
  volatile signed __int32 *v22; // r15
  int v23; // esi
  int v24; // r13d
  __int64 v25; // rdi
  _QWORD *v26; // rax
  _QWORD *v27; // r12
  char *v28; // rcx
  unsigned int (__fastcall *v29)(CMILRefCountImpl *__hidden); // rax
  int v30; // et0
  _QWORD *v31; // r15
  _OWORD *p_r; // rbx
  __int64 v33; // r8
  __int64 v34; // rsi
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  void *v39; // rax
  __int64 v40; // rdi
  void *v41; // rsi
  const void *v42; // rbx
  signed __int64 v43; // rdi
  void *v44; // rax
  CDrawListEntryBuilder *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  _QWORD *v49; // r9
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  signed __int64 v53; // rdi
  __int64 v54; // rax
  CCpuClip *v55; // rcx
  int v56; // eax
  struct CShape *v57; // rdi
  __int64 (__fastcall *v58)(struct CShape *, _QWORD, __int64 *); // rbx
  int v59; // eax
  int Src; // [rsp+20h] [rbp-B9h]
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
  char *v79; // [rsp+140h] [rbp+67h] BYREF
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
  v17 = v14 & 1;
  if ( (v14 & 1) != 0 )
  {
    v16 = v14 - v17 + 2;
    v63 = v16;
    if ( v14 )
      v64 = v14 - v17 + 2;
  }
  if ( v16 > 0x10000 || (unsigned int)v7 > 0x1FFFE )
  {
    v63 = 0;
    v66 = 0;
  }
  v18 = PrimitiveStorage::Alloc_16_(&v63);
  if ( v18 )
  {
    CDrawListPrimitive::Initialize((__int64)v18, (__int64)v67, (__int64)v74, v15, v4, v7, &v76, v13);
    v19 = v18;
    v8 = 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x41u, 0LL);
    v19 = 0LL;
    v8 = -2147024882;
  }
  v20 = v79;
  v79 = v19;
  if ( v20 )
    (**(void (__fastcall ***)(char *, __int64))v20)(v20, 1LL);
  if ( (v8 & 0x80000000) == 0 )
  {
    v21 = *((_BYTE *)this + 4493) == 0;
    v22 = (volatile signed __int32 *)*((_QWORD *)this + 10);
    v71 = 0LL;
    v70 = v22;
    v72 = a4;
    if ( v21 )
    {
      v69 = 0LL;
      v73 = 0LL;
    }
    else
    {
      v69 = (char *)this + 4472;
      v73 = (char *)this + 4472;
    }
    v21 = *((_BYTE *)this + 4492) == 0;
    v23 = *((_DWORD *)this + 6);
    LODWORD(v71) = v23;
    if ( !v21 )
    {
      v23 &= ~1u;
      *((_BYTE *)this + 4492) = 0;
      LODWORD(v71) = v23;
    }
    v21 = *((_BYTE *)this + 4490) == 0;
    v24 = v23;
    v61 = 0LL;
    if ( v21 && CCpuClip::HasClip(*((CCpuClip **)this + 2)) )
    {
      v62 = 0LL;
      v56 = CCpuClip::ResolveClip(v55, &v62, 0LL);
      v8 = v56;
      if ( v56 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x7C9u, 0LL);
        goto LABEL_65;
      }
      v57 = v62;
      v58 = *(__int64 (__fastcall **)(struct CShape *, _QWORD, __int64 *))(*(_QWORD *)v62 + 24LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v61);
      v59 = v58(v57, 0LL, &v61);
      v8 = v59;
      if ( v59 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x7CAu, 0LL);
        goto LABEL_65;
      }
      v25 = v61;
      v24 = v23;
      *((_QWORD *)&v71 + 1) = v61;
    }
    else
    {
      v25 = *((_QWORD *)&v71 + 1);
    }
    v77[0] = 0LL;
    v26 = CThreadLocalObjectCache<CDrawListEntry,CDrawListEntry>::Alloc();
    v27 = v26;
    if ( v26 )
    {
      *((_DWORD *)v26 + 2) = 0;
      *v26 = &CDrawListEntry::`vftable';
      v28 = v79;
      v79 = 0LL;
      v26[2] = v28;
      v26[3] = v22;
      if ( v22 )
      {
        v29 = **(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v22;
        if ( v29 == CMILRefCountImpl::AddReference )
        {
          v30 = _InterlockedAdd(v22, 1u);
          if ( (v30 < 0) ^ __OFSUB__(v29, CMILRefCountImpl::AddReference) | (v30 == 0) )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x18,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              Src);
          v31 = v73;
          p_r = (_OWORD *)&v72->r;
          v25 = *((_QWORD *)&v71 + 1);
          v23 = v71;
LABEL_32:
          v27[4] = v25;
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
          v27[5] = v80;
          *((_DWORD *)v27 + 12) = 1065353216;
          *((_DWORD *)v27 + 13) = 1065353216;
          *((_DWORD *)v27 + 14) = 1065353216;
          *((_DWORD *)v27 + 15) = 1065353216;
          *((_DWORD *)v27 + 16) = v23;
          if ( p_r )
            *((_OWORD *)v27 + 3) = *p_r;
          if ( v31 )
          {
            *(_QWORD *)((char *)v27 + 68) = *v31;
            *((_DWORD *)v27 + 16) = v24 | 0x100;
          }
          (*(void (__fastcall **)(_QWORD *))*v27)(v27);
          v33 = *((_QWORD *)this + 15);
          v34 = *((_QWORD *)this + 14);
          v35 = (v33 - v34) >> 3;
          v8 = 0;
          if ( !((*((_QWORD *)this + 16) - v33) >> 3) )
          {
            v36 = v35 + 1;
            v37 = (*((_QWORD *)this + 16) - v34) >> 3;
            v62 = (struct CShape *)(v35 + 1);
            if ( v35 + 1 < v35 )
            {
              std::_Xoverflow_error("overflow");
              __debugbreak();
            }
            v38 = v37 >> 1;
            if ( v37 <= ~(v37 >> 1) && v37 + v38 >= v36 )
            {
              v36 = v37 + v38;
              v62 = (struct CShape *)(v37 + v38);
            }
            v39 = operator new[](saturated_mul(v36, 8uLL));
            v40 = *((_QWORD *)this + 15);
            v68 = 0LL;
            v41 = v39;
            v42 = (const void *)*((_QWORD *)this + 14);
            v43 = v40 - (_QWORD)v42;
            *(_QWORD *)v67 = v39;
            *(_QWORD *)&v67[2] = v35;
            v75 = 0LL;
            *(_OWORD *)v74 = *(_OWORD *)v67;
            v44 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(
                            v74,
                            v43 >> 3);
            memmove_0(v44, v42, v43);
            v45 = (CDrawListEntryBuilder *)*((_QWORD *)this + 14);
            *((_QWORD *)this + 14) = v41;
            if ( v45 == (CDrawListEntryBuilder *)((char *)this + 136) )
              v45 = 0LL;
            operator delete(v45);
            v34 = *((_QWORD *)this + 14);
            v33 = v34 + 8 * v35;
            v46 = v34 + 8LL * (_QWORD)v62;
            *((_QWORD *)this + 15) = v33;
            *((_QWORD *)this + 16) = v46;
          }
          v47 = (v33 - v34) >> 3;
          v48 = v47 - v35;
          v49 = (_QWORD *)(v34 + 8 * v47);
          if ( !v49 )
            goto LABEL_62;
          v50 = ((v33 - v34) >> 3) - v35;
          if ( v48 > 1 )
            v50 = 1LL;
          v51 = 8 * v50;
          if ( v33 != v33 - v51 )
          {
            *v49 = *(_QWORD *)(v33 - 8);
            if ( v33 - 8 != v33 - v51 )
LABEL_62:
              _invalid_parameter_noinfo_noreturn();
          }
          if ( v48 > 1 )
          {
            if ( v47 && (!v34 || v47 < 0) )
              goto LABEL_62;
            *(_QWORD *)&v67[2] = (v33 - v34) >> 3;
            v68 = *(_QWORD *)&v67[2];
            *(_QWORD *)v67 = v34;
            v53 = -8LL * v35 + 8 * (v47 - 1);
            v54 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(v67, -(v53 >> 3));
            memmove_0((void *)(v54 - v53), (const void *)(v34 + 8 * v35), v53);
          }
          *((_QWORD *)this + 15) += 8LL;
          *(_QWORD *)(v34 + 8 * v35) = v27;
          v52 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
          }
          if ( v79 )
            (**(void (__fastcall ***)(char *, __int64))v79)(v79, 1LL);
          goto LABEL_2;
        }
        v29((CMILRefCountImpl *)v22);
      }
      v31 = v69;
      p_r = (_OWORD *)&v81->r;
      goto LABEL_32;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistentry.cpp",
      (const char *)0x8007000ELL,
      Src);
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x7CFu, 0LL);
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(v77);
LABEL_65:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v61);
    std::unique_ptr<CDrawListPrimitive>::~unique_ptr<CDrawListPrimitive>(&v79);
    return v8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x7B1u, 0LL);
  if ( v79 )
    (**(void (__fastcall ***)(char *, __int64))v79)(v79, 1LL);
  return v8;
}
