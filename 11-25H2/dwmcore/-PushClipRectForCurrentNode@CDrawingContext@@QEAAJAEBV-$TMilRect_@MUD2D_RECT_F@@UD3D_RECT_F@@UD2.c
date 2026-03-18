/*
 * XREFs of ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800A360C
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800149A0 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18008B0E0 (-ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x1800A3230 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800A5660 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?Reset@CRectanglesShape@@AEAAXXZ @ 0x1800AB5A0 (-Reset@CRectanglesShape@@AEAAXXZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800AC100 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??_ECRoundedRectangleShape@@UEAAPEAXI@Z @ 0x1800AC320 (--_ECRoundedRectangleShape@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801924DC (--$move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushClipRectForCurrentNode(struct CDrawingContext *a1, const __m128i *a2)
{
  __int64 v4; // rax
  int v5; // eax
  _OWORD *i; // rax
  _QWORD *v7; // rax
  CPolygonShape *v8; // rsi
  _QWORD *v9; // r12
  const __m128i *v10; // rdx
  __m128i v11; // xmm6
  unsigned __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // r9
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  const __m128i *v18; // r10
  void *(__fastcall *v19)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // ebx
  unsigned __int64 v24; // rdi
  void *v25; // rax
  __int64 v26; // r8
  void *v27; // rbx
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  char *v30; // rax
  __m128i *v31; // r11
  void *v32[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h]
  _QWORD v34[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+78h] [rbp-90h]
  CPolygonShape *v37; // [rsp+80h] [rbp-88h] BYREF
  char v38; // [rsp+88h] [rbp-80h]
  __int64 v39; // [rsp+90h] [rbp-78h]
  int v40; // [rsp+98h] [rbp-70h]
  int v41; // [rsp+9Ch] [rbp-6Ch]
  int v42; // [rsp+E0h] [rbp-28h]
  _BYTE v43[68]; // [rsp+E4h] [rbp-24h] BYREF
  __int64 v44; // [rsp+128h] [rbp+20h]
  int v45; // [rsp+130h] [rbp+28h]
  __int16 v46; // [rsp+134h] [rbp+2Ch]

  memset(v43, 0, 60);
  *(_QWORD *)&v43[60] = 0x2A993F800000LL;
  v37 = 0LL;
  v38 = 0;
  v39 = 0LL;
  v40 = 0;
  v41 = 1065353216;
  v42 = 0;
  v44 = 0LL;
  v45 = 0;
  v46 = 0;
  if ( *((_BYTE *)a1 + 7936) )
  {
    if ( *((_BYTE *)a1 + 7937) )
      v4 = *((_QWORD *)a1 + 402);
    else
      v4 = *((_QWORD *)a1 + 994);
  }
  else
  {
    v4 = 0LL;
  }
  v36 = v4;
  v5 = *((_DWORD *)a1 + 74);
  if ( !v5 )
    goto LABEL_39;
  for ( i = (_OWORD *)(*((_QWORD *)a1 + 36) + 68LL * (unsigned int)(v5 - 1)); ; i = &CMILMatrix::Identity )
  {
    *(_OWORD *)v43 = *i;
    *(_OWORD *)&v43[16] = i[1];
    *(_OWORD *)&v43[32] = i[2];
    *(_OWORD *)&v43[48] = i[3];
    *(_DWORD *)&v43[64] = *((_DWORD *)i + 16);
    v7 = CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc();
    v8 = (CPolygonShape *)v7;
    if ( !v7 )
    {
      v8 = 0LL;
      goto LABEL_14;
    }
    v7[1] = 0LL;
    v9 = v7 + 5;
    *v7 = &CRectanglesShape::`vftable';
    v7[4] = v7 + 7;
    v7[2] = v7 + 5;
    v7[3] = v7 + 5;
    v7[7] = 0LL;
    CRectanglesShape::Reset((CRectanglesShape *)v7);
    v10 = (const __m128i *)*((_QWORD *)v8 + 3);
    v11 = _mm_loadu_si128(a2);
    a2 = (const __m128i *)*((_QWORD *)v8 + 2);
    v12 = v10 - a2;
    if ( (__int64)(*((_QWORD *)v8 + 4) - (_QWORD)v10) >> 4 )
      goto LABEL_8;
    if ( v12 + 1 >= v12 )
      break;
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_39:
    ;
  }
  v24 = detail::liberal_expansion_policy::expand(
          (detail::liberal_expansion_policy *)((__int64)(*((_QWORD *)v8 + 4) - (_QWORD)a2) >> 4),
          (__int64)(*((_QWORD *)v8 + 4) - (_QWORD)a2) >> 4,
          v12 + 1);
  v25 = operator new[](saturated_mul(v24, 0x10uLL));
  v33 = 0LL;
  v26 = *((_QWORD *)v8 + 3);
  v27 = v25;
  v28 = *((_QWORD *)v8 + 2);
  v32[0] = v25;
  v32[1] = (void *)v12;
  v35 = 0LL;
  *(_OWORD *)&v34[1] = *(_OWORD *)v32;
  std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
    v32,
    v28,
    v26,
    &v34[1]);
  v29 = (_QWORD *)*((_QWORD *)v8 + 2);
  *((_QWORD *)v8 + 2) = v27;
  if ( v29 == v9 )
    v29 = 0LL;
  operator delete(v29);
  a2 = (const __m128i *)*((_QWORD *)v8 + 2);
  v10 = &a2[v12];
  *((_QWORD *)v8 + 4) = &a2[v24];
  *((_QWORD *)v8 + 3) = v10;
LABEL_8:
  v33 = 0LL;
  v13 = v10 - a2;
  v32[1] = (void *)1;
  v14 = 16 * v13;
  v15 = v13 - v12;
  v35 = 0LL;
  v32[0] = (void *)&a2[v13];
  if ( !v32[0] )
    goto LABEL_28;
  v35 = 1LL;
  v16 = v10 - a2 - v12;
  if ( v15 > 1 )
    v16 = 1LL;
  v17 = 16 * v16;
  v18 = &v10[v17 / 0xFFFFFFFFFFFFFFF0uLL];
  v33 = 1LL;
  if ( v10 != &v10[v17 / 0xFFFFFFFFFFFFFFF0uLL] )
  {
    v30 = (char *)v33;
    v31 = (__m128i *)((char *)v32[0] + 16);
    do
    {
      --v10;
      if ( !v32[0] )
        goto LABEL_28;
      if ( !v30 )
        goto LABEL_28;
      --v30;
      --v31;
      if ( v30 >= v32[1] )
        goto LABEL_28;
      *v31 = *v10;
    }
    while ( v10 != v18 );
  }
  if ( v15 <= 1 )
    goto LABEL_13;
  if ( v13 && (!a2 || v13 < 0) )
LABEL_28:
    _invalid_parameter_noinfo_noreturn();
  if ( (__int64)(v14 - 16 * v12 - 16) >> 4 > 0 )
  {
    if ( v13 >= (unsigned __int64)((__int64)(v14 - 16 * v12 - 16) >> 4) )
      goto LABEL_32;
    goto LABEL_28;
  }
  if ( (__int64)(v14 - 16 * v12 - 16) >> 4 < 0 )
    goto LABEL_28;
LABEL_32:
  memmove_0(&a2->m128i_i8[16 - -16LL * v12], &a2[v12], v14 - 16 * v12 - 16);
LABEL_13:
  *((_QWORD *)v8 + 3) += 16LL;
  a2[v12] = v11;
LABEL_14:
  if ( v38 && v37 )
  {
    v19 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v37;
    if ( v19 == CRectanglesShape::`scalar deleting destructor' )
    {
      CRectanglesShape::`scalar deleting destructor'(v37, 1u);
    }
    else if ( v19 == CRoundedRectangleShape::`vector deleting destructor' )
    {
      CRoundedRectangleShape::`vector deleting destructor'(v37, 1u);
    }
    else if ( v19 == CPolygonShape::`scalar deleting destructor' )
    {
      CPolygonShape::`scalar deleting destructor'(v37, 1u);
    }
    else
    {
      v19(v37, 1u);
    }
  }
  v37 = v8;
  v38 = 1;
  if ( v8 )
  {
    v20 = *((_QWORD *)a1 + 94);
    if ( v20 != *((_QWORD *)a1 + 93) && *(_QWORD *)(v20 - 176) && *(_QWORD *)(*((_QWORD *)a1 + 337) - 24LL)
      || !CCpuClippingData::ShouldRealizeCpuClipOnGpu(v8, (const struct CMILMatrix *)v43) )
    {
      LOBYTE(v45) = 1;
    }
    v21 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(a1);
    v22 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xD07u, 0LL);
  }
  else
  {
    v22 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xCFDu, 0LL);
  }
  CShapePtr::~CShapePtr((CShapePtr *)&v37);
  return v22;
}
