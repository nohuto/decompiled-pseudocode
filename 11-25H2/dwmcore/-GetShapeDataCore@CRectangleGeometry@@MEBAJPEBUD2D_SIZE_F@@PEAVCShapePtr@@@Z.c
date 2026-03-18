/*
 * XREFs of ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180059890
 * Callers:
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058AB0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x18005A1B0 (-Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801924DC (--$move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRectangleGeometry::GetShapeDataCore(
        CRectangleGeometry *this,
        const struct D2D_SIZE_F *a2,
        CRectanglesShape **a3)
{
  __int64 v3; // rdi
  float *v5; // r8
  float *v6; // rbx
  float *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  char v10; // dl
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm9_4
  _DWORD *Value; // rbx
  int v16; // ecx
  char *v17; // rsi
  HANDLE v18; // rax
  CRoundedRectangleShape *v19; // rbx
  void *(__fastcall *v20)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  char v22; // al
  bool v23; // cl
  _DWORD *v24; // rbx
  int v25; // ecx
  HANDLE v26; // rax
  char *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // r15
  __int64 v31; // r10
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  char *v35; // rcx
  _DWORD *v36; // rdi
  int v37; // ecx
  HANDLE v38; // rax
  volatile signed __int32 *v39; // rax
  signed __int32 v40; // ecx
  HANDLE ProcessHeap; // rax
  CThreadContext *v42; // rax
  CThreadContext *v43; // rax
  HANDLE v44; // rax
  CThreadContext *v45; // rax
  CThreadContext *v46; // rax
  CThreadContext *v47; // rax
  CThreadContext *v48; // rax
  unsigned __int64 v49; // rdi
  void *v50; // rax
  __int64 v51; // r8
  __int64 v52; // rdx
  void *v53; // rbx
  char *v54; // rcx
  void *v55; // r14
  _OWORD *v56; // r11
  unsigned __int64 v57; // rax
  int v58; // [rsp+28h] [rbp-E0h]
  void *v59[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v60; // [rsp+48h] [rbp-C0h]
  _QWORD v61[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+68h] [rbp-A0h]
  _OWORD v63[3]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-60h]
  __int128 v65; // [rsp+B0h] [rbp-58h]
  __int64 v66; // [rsp+120h] [rbp+18h]
  void *retaddr; // [rsp+140h] [rbp+38h]

  LODWORD(v64) = 0;
  v5 = (float *)((char *)this + 148);
  v6 = (float *)((char *)this + 136);
  v7 = (float *)((char *)this + 144);
  if ( a2 )
  {
    v8 = *(_OWORD *)((char *)this + 152);
    v63[0] = *(_OWORD *)v6;
    v9 = *(_OWORD *)((char *)this + 168);
    v63[1] = v8;
    *(_QWORD *)&v8 = *((_QWORD *)this + 23);
    v6 = (float *)v63;
    v63[2] = v9;
    *(float *)&v9 = a2->width - *v7;
    v64 = v8;
    v7 = (float *)v63 + 2;
    *(float *)&v8 = a2->height - *v5;
    v5 = (float *)v63 + 3;
    *((_QWORD *)&v63[0] + 1) = __PAIR64__(v8, v9);
  }
  v10 = *((_BYTE *)this + 188);
  v11 = *v6;
  v12 = v6[1];
  if ( v10 )
  {
    v13 = v11 + *v7;
    v14 = v12 + *v5;
  }
  else
  {
    v13 = *v7;
    v14 = *v5;
  }
  v66 = v3;
  if ( v13 <= v11 || v14 <= v12 )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      ProcessHeap = GetProcessHeap();
      v42 = (CThreadContext *)HeapAlloc(ProcessHeap, 0, 0x1C0uLL);
      if ( !v42 || (v43 = CThreadContext::CThreadContext(v42), (Value = v43) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v43);
    }
    v16 = Value[13];
    v17 = 0LL;
    if ( v16 )
    {
      v17 = (char *)*((_QWORD *)Value + 7);
      *((_QWORD *)Value + 7) = *(_QWORD *)v17;
      Value[13] = v16 - 1;
    }
    if ( !v17 )
    {
      v18 = GetProcessHeap();
      v17 = (char *)HeapAlloc(v18, 0, 0x40uLL);
      if ( !v17 )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    *((_QWORD *)v17 + 1) = 0LL;
    *(_QWORD *)v17 = &CRectanglesShape::`vftable';
    LODWORD(v3) = 1;
    *((_QWORD *)v17 + 2) = v17 + 40;
    *((_QWORD *)v17 + 3) = v17 + 40;
    *((_QWORD *)v17 + 4) = v17 + 56;
    *((_QWORD *)v17 + 7) = 0LL;
    goto LABEL_13;
  }
  v22 = *((float *)this + 38) > 0.0 && *((float *)this + 39) > 0.0;
  if ( !v10 )
  {
    v23 = *((float *)this + 40) > 0.0 && *((float *)this + 41) > 0.0
       || *((float *)this + 44) > 0.0 && *((float *)this + 45) > 0.0
       || *((float *)this + 42) > 0.0 && *((float *)this + 43) > 0.0;
    v22 |= v23;
  }
  if ( !v22 )
  {
    v24 = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !v24 )
    {
      v44 = GetProcessHeap();
      v45 = (CThreadContext *)HeapAlloc(v44, 0, 0x1C0uLL);
      if ( !v45 || (v46 = CThreadContext::CThreadContext(v45), (v24 = v46) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
        ModuleFailFastForHRESULT(-2147024882, retaddr);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v46);
    }
    v25 = v24[13];
    v17 = 0LL;
    if ( v25 )
    {
      v17 = (char *)*((_QWORD *)v24 + 7);
      *((_QWORD *)v24 + 7) = *(_QWORD *)v17;
      v24[13] = v25 - 1;
    }
    if ( !v17 )
    {
      v26 = GetProcessHeap();
      v17 = (char *)HeapAlloc(v26, 0, 0x40uLL);
      if ( !v17 )
        ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    *((_QWORD *)v17 + 1) = 0LL;
    *(_QWORD *)v17 = &CRectanglesShape::`vftable';
    *((_QWORD *)v17 + 4) = v17 + 56;
    *((_QWORD *)v17 + 2) = v17 + 40;
    *((_QWORD *)v17 + 3) = v17 + 40;
    *((_QWORD *)v17 + 7) = 0LL;
    v27 = (char *)*((_QWORD *)v17 + 3);
    v28 = (v27 - (v17 + 40)) >> 4;
    if ( v28 )
    {
      v27 -= 16 * v28;
      *((_QWORD *)v17 + 3) = v27;
    }
    v29 = *((_QWORD *)v17 + 4);
    v19 = (CRoundedRectangleShape *)*((_QWORD *)v17 + 2);
    *(_QWORD *)&v65 = __PAIR64__(LODWORD(v12), LODWORD(v11));
    v30 = (v27 - (char *)v19) >> 4;
    *((_QWORD *)&v65 + 1) = __PAIR64__(LODWORD(v14), LODWORD(v13));
    if ( !((v29 - (__int64)v27) >> 4) )
    {
      if ( v30 + 1 < v30 )
      {
        std::_Xoverflow_error("overflow");
        __debugbreak();
LABEL_69:
        if ( v20 == CRoundedRectangleShape::`vector deleting destructor' )
        {
          CRoundedRectangleShape::~CRoundedRectangleShape(v19);
          CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v19);
        }
        else if ( v20 == CPolygonShape::`scalar deleting destructor' )
        {
          CPolygonShape::`scalar deleting destructor'(v19, v3);
        }
        else
        {
          v20(v19, v3);
        }
        goto LABEL_17;
      }
      v49 = detail::liberal_expansion_policy::expand(
              (detail::liberal_expansion_policy *)((v29 - (__int64)v19) >> 4),
              (v29 - (__int64)v19) >> 4,
              v30 + 1);
      v50 = operator new[](saturated_mul(v49, 0x10uLL));
      v51 = *((_QWORD *)v17 + 3);
      v52 = *((_QWORD *)v17 + 2);
      v59[0] = v50;
      v53 = v50;
      v59[1] = (void *)v30;
      v60 = 0LL;
      *(_OWORD *)&v61[1] = *(_OWORD *)v59;
      v62 = 0LL;
      std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
        v59,
        v52,
        v51,
        &v61[1]);
      v54 = (char *)*((_QWORD *)v17 + 2);
      *((_QWORD *)v17 + 2) = v53;
      if ( v54 == v17 + 40 )
        v54 = 0LL;
      operator delete(v54);
      v19 = (CRoundedRectangleShape *)*((_QWORD *)v17 + 2);
      v27 = (char *)v19 + 16 * v30;
      *((_QWORD *)v17 + 3) = v27;
      *((_QWORD *)v17 + 4) = (char *)v19 + 16 * v49;
    }
    v60 = 0LL;
    v31 = (v27 - (char *)v19) >> 4;
    LODWORD(v3) = 1;
    v59[1] = (void *)1;
    v32 = v31 - v30;
    v62 = 0LL;
    v59[0] = (char *)v19 + 16 * v31;
    if ( v59[0] )
    {
      v62 = 1LL;
      v33 = ((v27 - (char *)v19) >> 4) - v30;
      if ( v32 > 1 )
        v33 = 1LL;
      v34 = 16 * v33;
      v35 = &v27[-v34];
      v60 = 1LL;
      if ( v27 == &v27[-v34] )
      {
LABEL_40:
        if ( v32 <= 1 )
        {
LABEL_41:
          *((_QWORD *)v17 + 3) += 16LL;
          *((_OWORD *)v19 + v30) = v65;
          goto LABEL_13;
        }
        if ( !v31 || v19 && v31 >= 0 )
        {
          if ( (__int64)(16 * v31 - 16 * v30 - 16) >> 4 > 0 )
          {
            if ( v31 >= (unsigned __int64)((__int64)(16 * v31 - 16 * v30 - 16) >> 4) )
            {
LABEL_66:
              memmove_0(
                (char *)v19 + 16 * v31 - (16 * v31 - 16 * v30 - 16),
                (char *)v19 + 16 * v30,
                16 * v31 - 16 * v30 - 16);
              goto LABEL_41;
            }
          }
          else if ( (__int64)(16 * v31 - 16 * v30 - 16) >> 4 >= 0 )
          {
            goto LABEL_66;
          }
        }
      }
      else
      {
        v55 = v59[1];
        v56 = (char *)v59[0] + 16;
        v57 = v60;
        while ( 1 )
        {
          v27 -= 16;
          if ( !v57 )
            break;
          --v57;
          --v56;
          if ( v57 >= (unsigned __int64)v55 )
            break;
          *v56 = *(_OWORD *)v27;
          if ( v27 == v35 )
            goto LABEL_40;
        }
      }
    }
    _invalid_parameter_noinfo_noreturn();
  }
  v36 = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !v36 )
  {
    v47 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
    if ( !v47 || (v48 = CThreadContext::CThreadContext(v47), (v36 = v48) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v48);
  }
  v37 = v36[17];
  v17 = 0LL;
  if ( v37 )
  {
    v17 = (char *)*((_QWORD *)v36 + 9);
    *((_QWORD *)v36 + 9) = *(_QWORD *)v17;
    v36[17] = v37 - 1;
  }
  if ( !v17 )
  {
    v38 = GetProcessHeap();
    v17 = (char *)HeapAlloc(v38, 0, 0x18uLL);
    if ( !v17 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
  }
  *((_QWORD *)v17 + 1) = 0LL;
  *(_QWORD *)v17 = &CRoundedRectangleShape::`vftable';
  v39 = (volatile signed __int32 *)CRoundedRectangleShape::SharedData::Create((const struct CRoundedRectangleGeometryData *)v6);
  *((_QWORD *)v17 + 2) = v39;
  LODWORD(v3) = 1;
  if ( v39 )
  {
    if ( **(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden))v39 == CMILRefCountImpl::AddReference )
    {
      v40 = _InterlockedExchangeAdd(v39, 1u);
      if ( (v40 + 1 < 0) ^ __OFADD__(1, v40) | (v40 == -1) )
        wil::details::in1diag3::Log_Hr(
          (wil::details::in1diag3 *)retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v58);
    }
    else
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v39)(v39);
    }
  }
LABEL_13:
  if ( *((_BYTE *)a3 + 8) )
  {
    v19 = *a3;
    if ( *a3 )
    {
      v20 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v19;
      if ( v20 == CRectanglesShape::`scalar deleting destructor' )
      {
        CRectanglesShape::~CRectanglesShape(*a3);
        CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v19);
        goto LABEL_17;
      }
      goto LABEL_69;
    }
  }
LABEL_17:
  *a3 = (CRectanglesShape *)v17;
  *((_BYTE *)a3 + 8) = 1;
  return 0LL;
}
