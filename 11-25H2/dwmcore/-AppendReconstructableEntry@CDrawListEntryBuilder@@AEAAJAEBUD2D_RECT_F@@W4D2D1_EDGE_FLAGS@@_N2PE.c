/*
 * XREFs of ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x180047920
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x180196748 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 * Callees:
 *     ?Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z @ 0x180046710 (-Create@CReconstructableDrawListEntry@@SAJAEBUReconstructableDrawListEntryParams@@PEAPEAV1@@Z.c)
 *     ?GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ @ 0x180047E80 (-GetUsedSamplersBitmask@CCommonRenderingEffect@@UEBAIXZ.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x180047F70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?GetBitmap@CCommonRenderingEffect@@UEBAAEBVCDrawListBitmap@@I@Z @ 0x1800DEA60 (-GetBitmap@CCommonRenderingEffect@@UEBAAEBVCDrawListBitmap@@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180110030 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01PEAPEAVCRenderingEffect@@@Z @ 0x180128BA0 (-CreateRenderingEffect@CCommonRenderingEffectFactory@@QEAAJAEBVCDrawListBitmap@@USamplerMode@@01.c)
 *     ?reset@?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801749A0 (-reset@-$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x180194FE4 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ?HasAntialiasEdgeFlags@@YA_NW4D2D1_EDGE_FLAGS@@@Z @ 0x180196A10 (-HasAntialiasEdgeFlags@@YA_NW4D2D1_EDGE_FLAGS@@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180196A70 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ?HasClip@CCpuClip@@QEBA_NXZ @ 0x1801DAA00 (-HasClip@CCpuClip@@QEBA_NXZ.c)
 *     ?IsWhitePixelInTopLeft@CDrawListBitmap@@QEBA_NXZ @ 0x1801E4FB4 (-IsWhitePixelInTopLeft@CDrawListBitmap@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     memcmp_0 @ 0x1802E8968 (memcmp_0.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::AppendReconstructableEntry(
        unsigned int *a1,
        __int128 *a2,
        unsigned int a3,
        char a4,
        char a5,
        struct _D3DCOLORVALUE *a6,
        int a7)
{
  const struct _D3DCOLORVALUE *v7; // r14
  unsigned int v8; // r13d
  struct CReconstructableDrawListEntry *v13; // rdi
  int v14; // r10d
  _BYTE *v15; // rcx
  void *v16; // rdx
  __int64 (*v17)(void); // rax
  __int16 v18; // ax
  __int64 v19; // rbx
  int v20; // esi
  unsigned int (__fastcall *v21)(CCommonRenderingEffect *__hidden); // rax
  unsigned int v22; // eax
  int v23; // esi
  struct CPrimitiveColor *v24; // r8
  __int64 v25; // rax
  int BuiltHWPrimitiveEntry; // eax
  unsigned int v27; // r12d
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // r14
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  void *v35; // rax
  const void *v36; // rbx
  __int64 v37; // rsi
  void *v38; // r14
  signed __int64 v39; // rsi
  void *v40; // rax
  unsigned int *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  _QWORD *v45; // r10
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // r11
  __int64 v49; // rcx
  int v51; // r10d
  int v52; // r9d
  signed __int64 v53; // rsi
  __int64 v54; // rax
  const struct CDrawListBitmap *(__fastcall *v55)(CCommonRenderingEffect *__hidden, unsigned int); // rax
  const struct CDrawListBitmap *Bitmap; // rax
  _QWORD *v57; // r8
  __int64 v58; // r13
  bool v59; // zf
  unsigned int *v60; // r13
  __int16 v61; // r12
  __int64 v62; // rcx
  int v63; // eax
  CCpuClip *v64; // rcx
  int v65; // eax
  unsigned int v66; // [rsp+20h] [rbp-E0h]
  char v67; // [rsp+31h] [rbp-CFh]
  __int16 v68; // [rsp+50h] [rbp-B0h] BYREF
  char v69; // [rsp+52h] [rbp-AEh]
  void *Buf1; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+68h] [rbp-98h] BYREF
  __int128 Buf2; // [rsp+70h] [rbp-90h] BYREF
  __int128 v73; // [rsp+80h] [rbp-80h]
  int v74; // [rsp+90h] [rbp-70h]
  struct CReconstructableDrawListEntry *v75; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v76; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-40h]
  _BYTE *v78; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v79; // [rsp+D8h] [rbp-28h]
  __int64 v80; // [rsp+E0h] [rbp-20h]
  struct CPrimitiveColor *v81; // [rsp+E8h] [rbp-18h]
  struct _D3DCOLORVALUE *v82; // [rsp+F0h] [rbp-10h]
  __int64 v83; // [rsp+F8h] [rbp-8h]
  __int64 v84; // [rsp+100h] [rbp+0h]
  __int128 v85; // [rsp+108h] [rbp+8h]
  unsigned int *v86; // [rsp+118h] [rbp+18h]
  unsigned int *v87; // [rsp+120h] [rbp+20h]
  __int128 v88; // [rsp+128h] [rbp+28h]
  unsigned int v89; // [rsp+138h] [rbp+38h]
  char v90; // [rsp+13Ch] [rbp+3Ch]
  char v91; // [rsp+13Dh] [rbp+3Dh]
  char v92; // [rsp+13Eh] [rbp+3Eh]

  v7 = a6;
  v8 = 0;
  v75 = 0LL;
  v71 = 0LL;
  v13 = 0LL;
  memset_0(&v78, 0, 0x70uLL);
  v14 = a1[6] | a7;
  v84 = *a1;
  v90 = *((_BYTE *)a1 + 29);
  v92 = a5;
  v79 = v14;
  v89 = a3;
  v91 = a4;
  v88 = *a2;
  if ( (v14 & 1) != 0 && a5 && (unsigned __int8)HasAntialiasEdgeFlags(a3) )
    v79 = v51 & 0xFFFFFFFE;
  if ( *((_BYTE *)a1 + 4489) )
  {
    v86 = a1 + 14;
    v87 = a1 + 8;
  }
  v15 = (_BYTE *)*((_QWORD *)a1 + 10);
  v16 = &CCommonRenderingEffect::GetEffectTypeWithAttributes;
  v78 = v15;
  v17 = *(__int64 (**)(void))(*(_QWORD *)v15 + 64LL);
  if ( (char *)v17 == (char *)&CCommonRenderingEffect::GetEffectTypeWithAttributes )
  {
    v18 = 1;
    if ( !v15[70] )
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
                 v55 = *(const struct CDrawListBitmap *(__fastcall **)(CCommonRenderingEffect *__hidden, unsigned int))(*(_QWORD *)v19 + 16LL),
                 v55 != CCommonRenderingEffect::GetBitmap)
              ? (Bitmap = v55((CCommonRenderingEffect *)v19, v8))
              : (Bitmap = CCommonRenderingEffect::GetBitmap((CCommonRenderingEffect *)v19, v8)),
                !*((_QWORD *)Bitmap + 1)
             || CDrawListBitmap::IsWhitePixelInTopLeft(Bitmap)
             && (v74 = 1065353216, Buf2 = 0LL, v73 = 0LL, !memcmp_0(Buf1, &Buf2, 0x24uLL))) )
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
    v23 = v22 & v20;
    if ( v23 )
    {
      v58 = (unsigned int)(v23 - 1) + 11LL;
      v59 = *(_QWORD *)&a1[2 * v58] == 0LL;
      v60 = &a1[2 * v58];
      if ( v59 )
      {
        LOBYTE(v73) = 0;
        v67 = 1;
        Buf2 = 0LL;
        if ( (v23 & 1) != 0 )
        {
          v61 = 257;
        }
        else
        {
          CDrawListBitmap::operator=(&Buf2, v19 + 16);
          v61 = *(_WORD *)(v19 + 64);
          v67 = *(_BYTE *)(v19 + 66);
        }
        LOBYTE(v77) = 0;
        v76 = 0LL;
        if ( (v23 & 2) == 0 )
          CDrawListBitmap::operator=(&v76, v19 + 40);
        wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>::reset(v60);
        v69 = v67;
        v68 = v61;
        v63 = CCommonRenderingEffectFactory::CreateRenderingEffect(v62, &Buf2, &v68, &v76);
        v27 = v63;
        if ( v63 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0x31Bu, 0LL);
          CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v76);
          CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&Buf2);
          v52 = v27;
          v66 = 1504;
          goto LABEL_46;
        }
        CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v76);
        CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&Buf2);
      }
      v78 = *(_BYTE **)v60;
    }
  }
  if ( !*((_BYTE *)a1 + 4490) && CCpuClip::HasClip(*((CCpuClip **)a1 + 2)) )
  {
    Buf1 = 0LL;
    v65 = CCpuClip::ResolveClip(v64, (const struct CShape **)&Buf1, 0LL);
    v27 = v65;
    if ( v65 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0x5EAu, 0LL);
      goto LABEL_33;
    }
    BuiltHWPrimitiveEntry = (*(__int64 (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)Buf1 + 24LL))(
                              Buf1,
                              0LL,
                              &v71);
    v27 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
    {
      v66 = 1516;
      goto LABEL_45;
    }
    v80 = v71;
  }
  if ( a6 )
  {
    v24 = *(struct CPrimitiveColor **)&a6[1].r;
    v25 = *(_QWORD *)&a6[1].b;
    v85 = *(_OWORD *)&a6[2].r;
    v82 = a6;
    v81 = v24;
    v83 = v25;
  }
  else
  {
    v7 = v82;
    v24 = v81;
  }
  BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                            (CDrawListEntryBuilder *)a1,
                            (unsigned int)v16,
                            v24,
                            v7);
  v27 = BuiltHWPrimitiveEntry;
  if ( BuiltHWPrimitiveEntry < 0 )
  {
    v66 = 1530;
LABEL_45:
    v52 = BuiltHWPrimitiveEntry;
LABEL_46:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, v66, 0LL);
    goto LABEL_33;
  }
  v28 = CReconstructableDrawListEntry::Create((const struct ReconstructableDrawListEntryParams *)&v78, &v75);
  v27 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x5FCu, 0LL);
    v13 = v75;
  }
  else
  {
    v29 = *((_QWORD *)a1 + 15);
    v13 = 0LL;
    v30 = *((_QWORD *)a1 + 14);
    v31 = (v29 - v30) >> 3;
    if ( !((*((_QWORD *)a1 + 16) - v29) >> 3) )
    {
      v32 = v31 + 1;
      v33 = (*((_QWORD *)a1 + 16) - v30) >> 3;
      Buf1 = (void *)(v31 + 1);
      if ( v31 + 1 < v31 )
      {
        std::_Xoverflow_error("overflow");
        __debugbreak();
      }
      v34 = v33 >> 1;
      if ( v33 <= ~(v33 >> 1) && v34 + v33 >= v32 )
      {
        v32 = v34 + v33;
        Buf1 = (void *)(v34 + v33);
      }
      v35 = operator new[](saturated_mul(v32, 8uLL));
      v36 = (const void *)*((_QWORD *)a1 + 14);
      v37 = *((_QWORD *)a1 + 15);
      v38 = v35;
      *(_QWORD *)&Buf2 = v35;
      v39 = v37 - (_QWORD)v36;
      *((_QWORD *)&Buf2 + 1) = v31;
      *(_QWORD *)&v73 = 0LL;
      v76 = Buf2;
      v77 = 0LL;
      v40 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v76, v39 >> 3);
      memmove_0(v40, v36, v39);
      v41 = (unsigned int *)*((_QWORD *)a1 + 14);
      *((_QWORD *)a1 + 14) = v38;
      if ( v41 == a1 + 34 )
        v41 = 0LL;
      operator delete(v41);
      v30 = *((_QWORD *)a1 + 14);
      v29 = v30 + 8 * v31;
      v42 = v30 + 8LL * (_QWORD)Buf1;
      *((_QWORD *)a1 + 15) = v29;
      *((_QWORD *)a1 + 16) = v42;
    }
    v43 = (v29 - v30) >> 3;
    v44 = v43 - v31;
    v45 = (_QWORD *)(8 * v43 + v30);
    if ( !v45 )
      goto LABEL_43;
    v46 = ((v29 - v30) >> 3) - v31;
    if ( v44 > 1 )
      v46 = 1LL;
    v47 = 8 * v46;
    v48 = (_QWORD *)(v29 - v47);
    if ( v29 != v29 - v47 )
    {
      v57 = (_QWORD *)(v29 - 8);
      *v45 = *v57;
      if ( v57 != v48 )
LABEL_43:
        _invalid_parameter_noinfo_noreturn();
    }
    if ( v44 > 1 )
    {
      if ( v43 && (!v30 || v43 < 0) )
        goto LABEL_43;
      *((_QWORD *)&Buf2 + 1) = v43;
      *(_QWORD *)&v73 = v43;
      *(_QWORD *)&Buf2 = v30;
      v53 = 8 * v43 - 8 * v31 - 8;
      v54 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&Buf2, -(v53 >> 3));
      memmove_0((void *)(v54 - v53), (const void *)(v30 + 8 * v31), v53);
    }
    *((_QWORD *)a1 + 15) += 8LL;
    *(_QWORD *)(v30 + 8 * v31) = v75;
  }
LABEL_33:
  v49 = v71;
  if ( v71 )
  {
    v71 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  }
  if ( v13 )
    (*(void (__fastcall **)(struct CReconstructableDrawListEntry *))(*(_QWORD *)v13 + 8LL))(v13);
  return v27;
}
