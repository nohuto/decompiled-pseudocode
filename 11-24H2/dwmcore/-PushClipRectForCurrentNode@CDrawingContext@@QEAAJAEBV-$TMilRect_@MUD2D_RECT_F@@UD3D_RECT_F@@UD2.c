/*
 * XREFs of ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1801741B0
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180140BA0 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800737F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x180079260 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?Reset@CRectanglesShape@@AEAAXXZ @ 0x180079780 (-Reset@CRectanglesShape@@AEAAXXZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x18007A2E0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??_ECRoundedRectangleShape@@UEAAPEAXI@Z @ 0x18007A500 (--_ECRoundedRectangleShape@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800C6BC0 (-ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x180175100 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x180175224 (--$move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushClipRectForCurrentNode(__int64 a1, const __m128i *a2, _BYTE *a3)
{
  const __m128i *v4; // rbx
  struct CDrawingContext *v5; // r14
  __int64 v6; // rax
  int v7; // eax
  _OWORD *i; // rax
  _QWORD *v9; // rax
  unsigned __int64 v10; // r8
  CPolygonShape *v11; // rsi
  _QWORD *v12; // r12
  const __m128i *v13; // rdx
  __m128i v14; // xmm6
  unsigned __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  const __m128i *v20; // r10
  void (__fastcall *v21)(CPolygonShape *, __int64); // rax
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // ebx
  unsigned __int64 v26; // rdi
  LPVOID v27; // rax
  __int64 v28; // r8
  LPVOID v29; // rbx
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  char *v32; // rax
  __m128i *v33; // r11
  void *v34[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+48h] [rbp-C0h]
  _QWORD v36[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h]
  __int64 v38; // [rsp+78h] [rbp-90h] BYREF
  CPolygonShape *v39; // [rsp+80h] [rbp-88h] BYREF
  char v40; // [rsp+88h] [rbp-80h]
  __int64 v41; // [rsp+90h] [rbp-78h]
  int v42; // [rsp+98h] [rbp-70h]
  int v43; // [rsp+9Ch] [rbp-6Ch]
  int v44; // [rsp+E0h] [rbp-28h]
  _BYTE v45[68]; // [rsp+E4h] [rbp-24h] BYREF
  __int64 v46; // [rsp+128h] [rbp+20h]
  int v47; // [rsp+130h] [rbp+28h]
  __int16 v48; // [rsp+134h] [rbp+2Ch]

  memset(v45, 0, 60);
  *(_QWORD *)&v45[60] = 0x2A993F800000LL;
  v4 = a2;
  v5 = (struct CDrawingContext *)a1;
  v39 = 0LL;
  v40 = 0;
  v41 = 0LL;
  v42 = 0;
  v43 = 1065353216;
  v44 = 0;
  v46 = 0LL;
  v47 = 0;
  v48 = 0;
  if ( *(_BYTE *)(a1 + 7936) )
  {
    if ( *(_BYTE *)(a1 + 7937) )
      v6 = *(_QWORD *)(a1 + 3216);
    else
      v6 = *(_QWORD *)(a1 + 7952);
  }
  else
  {
    v6 = 0LL;
  }
  v38 = v6;
  v7 = *(_DWORD *)(a1 + 296);
  if ( !v7 )
    goto LABEL_39;
  a1 = (unsigned int)(v7 - 1);
  for ( i = (_OWORD *)(*((_QWORD *)v5 + 36) + 68 * a1); ; i = &CMILMatrix::Identity )
  {
    *(_OWORD *)v45 = *i;
    *(_OWORD *)&v45[16] = i[1];
    *(_OWORD *)&v45[32] = i[2];
    *(_OWORD *)&v45[48] = i[3];
    *(_DWORD *)&v45[64] = *((_DWORD *)i + 16);
    v9 = (_QWORD *)CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc(a1, a2);
    v11 = (CPolygonShape *)v9;
    if ( !v9 )
    {
      v11 = 0LL;
      goto LABEL_14;
    }
    v9[1] = 0LL;
    v12 = v9 + 5;
    *v9 = &CRectanglesShape::`vftable';
    v9[4] = v9 + 7;
    v9[2] = v9 + 5;
    v9[3] = v9 + 5;
    v9[7] = 0LL;
    CRectanglesShape::Reset((CRectanglesShape *)v9);
    v13 = (const __m128i *)*((_QWORD *)v11 + 3);
    v14 = _mm_loadu_si128(v4);
    v4 = (const __m128i *)*((_QWORD *)v11 + 2);
    v15 = v13 - v4;
    if ( (__int64)(*((_QWORD *)v11 + 4) - (_QWORD)v13) >> 4 )
      goto LABEL_8;
    if ( v15 + 1 >= v15 )
      break;
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_39:
    ;
  }
  v26 = detail::liberal_expansion_policy::expand(
          (detail::liberal_expansion_policy *)((__int64)(*((_QWORD *)v11 + 4) - (_QWORD)v4) >> 4),
          (__int64)(*((_QWORD *)v11 + 4) - (_QWORD)v4) >> 4,
          v15 + 1);
  v27 = operator new[](saturated_mul(v26, 0x10uLL));
  v35 = 0LL;
  v28 = *((_QWORD *)v11 + 3);
  v29 = v27;
  v30 = *((_QWORD *)v11 + 2);
  v34[0] = v27;
  v34[1] = (void *)v15;
  v37 = 0LL;
  *(_OWORD *)&v36[1] = *(_OWORD *)v34;
  std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
    v34,
    v30,
    v28,
    &v36[1]);
  v31 = (_QWORD *)*((_QWORD *)v11 + 2);
  *((_QWORD *)v11 + 2) = v29;
  if ( v31 == v12 )
    v31 = 0LL;
  operator delete(v31);
  v4 = (const __m128i *)*((_QWORD *)v11 + 2);
  v13 = &v4[v15];
  *((_QWORD *)v11 + 4) = &v4[v26];
  *((_QWORD *)v11 + 3) = v13;
LABEL_8:
  v35 = 0LL;
  v16 = v13 - v4;
  v34[1] = (void *)1;
  v17 = 16 * v16;
  v10 = v16 - v15;
  v37 = 0LL;
  v34[0] = (void *)&v4[v16];
  if ( !v34[0] )
    goto LABEL_28;
  v37 = 1LL;
  v18 = v13 - v4 - v15;
  if ( v10 > 1 )
    v18 = 1LL;
  v19 = 16 * v18;
  v20 = &v13[v19 / 0xFFFFFFFFFFFFFFF0uLL];
  v35 = 1LL;
  if ( v13 != &v13[v19 / 0xFFFFFFFFFFFFFFF0uLL] )
  {
    v32 = (char *)v35;
    v33 = (__m128i *)((char *)v34[0] + 16);
    do
    {
      --v13;
      if ( !v34[0] )
        goto LABEL_28;
      if ( !v32 )
        goto LABEL_28;
      --v32;
      --v33;
      if ( v32 >= v34[1] )
        goto LABEL_28;
      *v33 = *v13;
    }
    while ( v13 != v20 );
  }
  if ( v10 <= 1 )
    goto LABEL_13;
  if ( v16 && (!v4 || v16 < 0) )
LABEL_28:
    _invalid_parameter_noinfo_noreturn();
  if ( (__int64)(v17 - 16 * v15 - 16) >> 4 > 0 )
  {
    if ( v16 >= (unsigned __int64)((__int64)(v17 - 16 * v15 - 16) >> 4) )
      goto LABEL_32;
    goto LABEL_28;
  }
  if ( (__int64)(v17 - 16 * v15 - 16) >> 4 < 0 )
    goto LABEL_28;
LABEL_32:
  memmove_0(&v4->m128i_i8[16 - -16LL * v15], &v4[v15], v17 - 16 * v15 - 16);
LABEL_13:
  *((_QWORD *)v11 + 3) += 16LL;
  v4[v15] = v14;
LABEL_14:
  if ( v40 && v39 )
  {
    v21 = **(void (__fastcall ***)(CPolygonShape *, __int64))v39;
    if ( (char *)v21 == (char *)CRectanglesShape::`scalar deleting destructor' )
    {
      CRectanglesShape::`scalar deleting destructor'(v39, 1, v10);
    }
    else if ( (char *)v21 == (char *)CRoundedRectangleShape::`vector deleting destructor' )
    {
      CRoundedRectangleShape::`vector deleting destructor'(v39, 1);
    }
    else if ( (char *)v21 == (char *)CPolygonShape::`scalar deleting destructor' )
    {
      CPolygonShape::`scalar deleting destructor'(v39, 1);
    }
    else
    {
      v21(v39, 1LL);
    }
  }
  v39 = v11;
  v40 = 1;
  if ( v11 )
  {
    v22 = *((_QWORD *)v5 + 94);
    if ( v22 != *((_QWORD *)v5 + 93) && *(_QWORD *)(v22 - 176) && *(_QWORD *)(*((_QWORD *)v5 + 337) - 24LL)
      || !CCpuClippingData::ShouldRealizeCpuClipOnGpu(v11, (const struct CMILMatrix *)v45) )
    {
      LOBYTE(v47) = 1;
    }
    v23 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(v5, 0LL, (__int64)&v38, a3);
    v24 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0xD07u, 0LL);
  }
  else
  {
    v24 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xCFDu, 0LL);
  }
  CShapePtr::~CShapePtr(&v39);
  return v24;
}
