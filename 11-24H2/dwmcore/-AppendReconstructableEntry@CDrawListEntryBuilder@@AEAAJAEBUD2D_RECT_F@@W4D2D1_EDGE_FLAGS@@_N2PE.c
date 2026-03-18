/*
 * XREFs of ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x18016E700
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801525DC (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01PEAPEAVCRenderingEffect@@@Z @ 0x1800193F0 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800DA770 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?HasAntialiasEdgeFlags@@YA_NW4D2D1_EDGE_FLAGS@@@Z @ 0x1801528A0 (-HasAntialiasEdgeFlags@@YA_NW4D2D1_EDGE_FLAGS@@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180152900 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ?GetBitmap@CCommonRenderingEffect@@UEBAAEBVCDrawListBitmap@@I@Z @ 0x180169030 (-GetBitmap@CCommonRenderingEffect@@UEBAAEBVCDrawListBitmap@@I@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18016E020 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x18016EC60 (-GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ.c)
 *     ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x18016F400 (-Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18019C1C4 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801C5B90 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x1801CD2D0 (-HasClip@CCpuClip@@QEBA_NXZ.c)
 *     ?IsWhitePixelInTopLeft@CDrawListBitmap@@QEBA_NXZ @ 0x1801D8FC4 (-IsWhitePixelInTopLeft@CDrawListBitmap@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     memcmp_0 @ 0x1802DF6C8 (memcmp_0.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::AppendReconstructableEntry(
        unsigned int *a1,
        __int128 *a2,
        int a3,
        char a4,
        char a5,
        struct _D3DCOLORVALUE *a6,
        int a7)
{
  const struct _D3DCOLORVALUE *v7; // r14
  unsigned int v8; // r13d
  struct CReconstructableDrawListEntry *v13; // rdi
  int v14; // r10d
  struct CRenderingEffect *v15; // rcx
  void *v16; // rdx
  __int64 (*v17)(void); // rax
  __int16 v18; // ax
  __int64 v19; // rbx
  int v20; // esi
  unsigned int (__fastcall *v21)(CCommonRenderingEffect *__hidden); // rax
  unsigned int v22; // eax
  __int64 v23; // r8
  int v24; // esi
  struct CPrimitiveColor *v25; // r8
  __int64 v26; // rax
  int BuiltHWPrimitiveEntry; // eax
  unsigned int v28; // r12d
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r14
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  LPVOID v36; // rax
  const void *v37; // rbx
  __int64 v38; // rsi
  LPVOID v39; // r14
  signed __int64 v40; // rsi
  void *v41; // rax
  unsigned int *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  _QWORD *v46; // r10
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // r11
  __int64 v50; // rcx
  int v52; // r10d
  int v53; // r9d
  signed __int64 v54; // rsi
  __int64 v55; // rax
  const struct CDrawListBitmap *(__fastcall *v56)(CCommonRenderingEffect *, unsigned int); // rax
  const struct CDrawListBitmap *Bitmap; // rax
  _QWORD *v58; // r8
  __int64 v59; // r13
  bool v60; // zf
  struct CRenderingEffect **v61; // r13
  __int16 v62; // r12
  __int16 v63; // si
  CCommonRenderingEffectFactory *v64; // rcx
  int v65; // eax
  CCpuClip *v66; // rcx
  int v67; // eax
  unsigned int v68; // [rsp+20h] [rbp-E0h]
  char v69; // [rsp+30h] [rbp-D0h]
  char v70; // [rsp+31h] [rbp-CFh]
  __int16 v71; // [rsp+40h] [rbp-C0h] BYREF
  char v72; // [rsp+42h] [rbp-BEh]
  __int16 v73; // [rsp+50h] [rbp-B0h] BYREF
  char v74; // [rsp+52h] [rbp-AEh]
  void *Buf1; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+68h] [rbp-98h] BYREF
  __int128 Buf2; // [rsp+70h] [rbp-90h] BYREF
  __int128 v78; // [rsp+80h] [rbp-80h]
  int v79; // [rsp+90h] [rbp-70h]
  struct CReconstructableDrawListEntry *v80; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v81; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v82; // [rsp+C0h] [rbp-40h]
  struct CRenderingEffect *v83; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v84; // [rsp+D8h] [rbp-28h]
  __int64 v85; // [rsp+E0h] [rbp-20h]
  struct CPrimitiveColor *v86; // [rsp+E8h] [rbp-18h]
  struct _D3DCOLORVALUE *v87; // [rsp+F0h] [rbp-10h]
  __int64 v88; // [rsp+F8h] [rbp-8h]
  __int64 v89; // [rsp+100h] [rbp+0h]
  __int128 v90; // [rsp+108h] [rbp+8h]
  unsigned int *v91; // [rsp+118h] [rbp+18h]
  unsigned int *v92; // [rsp+120h] [rbp+20h]
  __int128 v93; // [rsp+128h] [rbp+28h]
  int v94; // [rsp+138h] [rbp+38h]
  char v95; // [rsp+13Ch] [rbp+3Ch]
  char v96; // [rsp+13Dh] [rbp+3Dh]
  char v97; // [rsp+13Eh] [rbp+3Eh]

  v7 = a6;
  v8 = 0;
  v80 = 0LL;
  v76 = 0LL;
  v13 = 0LL;
  memset_0(&v83, 0, 0x70uLL);
  v14 = a1[6] | a7;
  v89 = *a1;
  v95 = *((_BYTE *)a1 + 29);
  v97 = a5;
  v84 = v14;
  v94 = a3;
  v96 = a4;
  v93 = *a2;
  if ( (v14 & 1) != 0 && a5 && HasAntialiasEdgeFlags(a3) )
    v84 = v52 & 0xFFFFFFFE;
  if ( *((_BYTE *)a1 + 4489) )
  {
    v91 = a1 + 14;
    v92 = a1 + 8;
  }
  v15 = (struct CRenderingEffect *)*((_QWORD *)a1 + 10);
  v16 = &CCommonRenderingEffect::GetEffectTypeWithAttributes;
  v83 = v15;
  v17 = *(__int64 (**)(void))(*(_QWORD *)v15 + 64LL);
  if ( (char *)v17 == (char *)&CCommonRenderingEffect::GetEffectTypeWithAttributes )
  {
    v18 = 1;
    if ( !*((_BYTE *)v15 + 70) )
      v18 = 1;
  }
  else
  {
    v18 = v17();
  }
  if ( v18 == 1 )
  {
    v19 = *((_QWORD *)a1 + 10);
    if ( a6 )
    {
      v20 = 0;
      if ( *(_BYTE *)(v19 + 70) )
      {
        do
        {
          if ( (unsigned __int64)v8 >= *(_QWORD *)&a6[2].r
            || ((Buf1 = (void *)(*(_QWORD *)&a6[2].b + 56LL * v8),
                 v56 = *(const struct CDrawListBitmap *(__fastcall **)(CCommonRenderingEffect *, unsigned int))(*(_QWORD *)v19 + 16LL),
                 v56 != CCommonRenderingEffect::GetBitmap)
              ? (Bitmap = v56((CCommonRenderingEffect *)v19, v8))
              : (Bitmap = CCommonRenderingEffect::GetBitmap((CCommonRenderingEffect *)v19, v8)),
                !*((_QWORD *)Bitmap + 1)
             || CDrawListBitmap::IsWhitePixelInTopLeft(Bitmap)
             && (v79 = 1065353216, Buf2 = 0LL, v78 = 0LL, !memcmp_0(Buf1, &Buf2, 0x24uLL))) )
          {
            v20 |= 1 << v8;
          }
          ++v8;
        }
        while ( v8 < 2 );
      }
    }
    else
    {
      v20 = 3;
    }
    v21 = *(unsigned int (__fastcall **)(CCommonRenderingEffect *__hidden))(*(_QWORD *)v19 + 24LL);
    v22 = v21 == CCommonRenderingEffect::GetUsedSamplersBitmask
        ? CCommonRenderingEffect::GetUsedSamplersBitmask((CCommonRenderingEffect *)v19)
        : v21((CCommonRenderingEffect *)v19);
    v24 = v22 & v20;
    if ( v24 )
    {
      v59 = (unsigned int)(v24 - 1) + 11LL;
      v60 = *(_QWORD *)&a1[2 * v59] == 0LL;
      v61 = (struct CRenderingEffect **)&a1[2 * v59];
      if ( v60 )
      {
        LOBYTE(v78) = 0;
        v71 = 257;
        v70 = 1;
        Buf2 = 0LL;
        if ( (v24 & 1) != 0 )
        {
          v62 = v71;
        }
        else
        {
          CDrawListBitmap::operator=((__int64)&Buf2, v19 + 16, v23);
          v62 = *(_WORD *)(v19 + 64);
          v70 = *(_BYTE *)(v19 + 66);
        }
        LOBYTE(v82) = 0;
        v71 = 257;
        v69 = 1;
        v81 = 0LL;
        if ( (v24 & 2) != 0 )
        {
          v63 = v71;
        }
        else
        {
          CDrawListBitmap::operator=((__int64)&v81, v19 + 40, v23);
          v63 = *(_WORD *)(v19 + 67);
          v69 = *(_BYTE *)(v19 + 69);
        }
        wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset(v61);
        v72 = v69;
        v74 = v70;
        v71 = v63;
        v73 = v62;
        v65 = CCommonRenderingEffectFactory::CreateRenderingEffect(v64, (__int64)&Buf2, &v73, (__int64)&v81, &v71, v61);
        v28 = v65;
        if ( v65 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v65, 0x31Bu, 0LL);
          CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v81);
          CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&Buf2);
          v53 = v28;
          v68 = 1504;
          goto LABEL_46;
        }
        CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v81);
        CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&Buf2);
      }
      v83 = *v61;
    }
  }
  if ( !*((_BYTE *)a1 + 4490) && CCpuClip::HasClip(*((CCpuClip **)a1 + 2)) )
  {
    Buf1 = 0LL;
    v67 = CCpuClip::ResolveClip(v66, (const struct CShape **)&Buf1, 0LL);
    v28 = v67;
    if ( v67 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v67, 0x5EAu, 0LL);
      goto LABEL_33;
    }
    BuiltHWPrimitiveEntry = (*(__int64 (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)Buf1 + 24LL))(
                              Buf1,
                              0LL,
                              &v76);
    v28 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
    {
      v68 = 1516;
      goto LABEL_45;
    }
    v85 = v76;
  }
  if ( a6 )
  {
    v25 = *(struct CPrimitiveColor **)&a6[1].r;
    v26 = *(_QWORD *)&a6[1].b;
    v90 = *(_OWORD *)&a6[2].r;
    v87 = a6;
    v86 = v25;
    v88 = v26;
  }
  else
  {
    v7 = v87;
    v25 = v86;
  }
  BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                            (CDrawListEntryBuilder *)a1,
                            (__int64)v16,
                            v25,
                            v7);
  v28 = BuiltHWPrimitiveEntry;
  if ( BuiltHWPrimitiveEntry < 0 )
  {
    v68 = 1530;
LABEL_45:
    v53 = BuiltHWPrimitiveEntry;
LABEL_46:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v53, v68, 0LL);
    goto LABEL_33;
  }
  v29 = CReconstructableDrawListEntry::Create((const struct ReconstructableDrawListEntryParams *)&v83, &v80);
  v28 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x5FCu, 0LL);
    v13 = v80;
  }
  else
  {
    v30 = *((_QWORD *)a1 + 15);
    v13 = 0LL;
    v31 = *((_QWORD *)a1 + 14);
    v32 = (v30 - v31) >> 3;
    if ( !((*((_QWORD *)a1 + 16) - v30) >> 3) )
    {
      v33 = v32 + 1;
      v34 = (*((_QWORD *)a1 + 16) - v31) >> 3;
      Buf1 = (void *)(v32 + 1);
      if ( v32 + 1 < v32 )
      {
        std::_Xoverflow_error("overflow");
        __debugbreak();
      }
      v35 = v34 >> 1;
      if ( v34 <= ~(v34 >> 1) && v35 + v34 >= v33 )
      {
        v33 = v35 + v34;
        Buf1 = (void *)(v35 + v34);
      }
      v36 = operator new[](saturated_mul(v33, 8uLL));
      v37 = (const void *)*((_QWORD *)a1 + 14);
      v38 = *((_QWORD *)a1 + 15);
      v39 = v36;
      *(_QWORD *)&Buf2 = v36;
      v40 = v38 - (_QWORD)v37;
      *((_QWORD *)&Buf2 + 1) = v32;
      *(_QWORD *)&v78 = 0LL;
      v81 = Buf2;
      v82 = 0LL;
      v41 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v81, v40 >> 3);
      memmove_0(v41, v37, v40);
      v42 = (unsigned int *)*((_QWORD *)a1 + 14);
      *((_QWORD *)a1 + 14) = v39;
      if ( v42 == a1 + 34 )
        v42 = 0LL;
      operator delete(v42);
      v31 = *((_QWORD *)a1 + 14);
      v30 = v31 + 8 * v32;
      v43 = v31 + 8LL * (_QWORD)Buf1;
      *((_QWORD *)a1 + 15) = v30;
      *((_QWORD *)a1 + 16) = v43;
    }
    v44 = (v30 - v31) >> 3;
    v45 = v44 - v32;
    v46 = (_QWORD *)(8 * v44 + v31);
    if ( !v46 )
      goto LABEL_43;
    v47 = ((v30 - v31) >> 3) - v32;
    if ( v45 > 1 )
      v47 = 1LL;
    v48 = 8 * v47;
    v49 = (_QWORD *)(v30 - v48);
    if ( v30 != v30 - v48 )
    {
      v58 = (_QWORD *)(v30 - 8);
      *v46 = *v58;
      if ( v58 != v49 )
LABEL_43:
        _invalid_parameter_noinfo_noreturn();
    }
    if ( v45 > 1 )
    {
      if ( v44 && (!v31 || v44 < 0) )
        goto LABEL_43;
      *((_QWORD *)&Buf2 + 1) = v44;
      *(_QWORD *)&v78 = v44;
      *(_QWORD *)&Buf2 = v31;
      v54 = 8 * v44 - 8 * v32 - 8;
      v55 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&Buf2, -(v54 >> 3));
      memmove_0((void *)(v55 - v54), (const void *)(v31 + 8 * v32), v54);
    }
    *((_QWORD *)a1 + 15) += 8LL;
    *(_QWORD *)(v31 + 8 * v32) = v80;
  }
LABEL_33:
  v50 = v76;
  if ( v76 )
  {
    v76 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  }
  if ( v13 )
    (*(void (__fastcall **)(struct CReconstructableDrawListEntry *))(*(_QWORD *)v13 + 8LL))(v13);
  return v28;
}
