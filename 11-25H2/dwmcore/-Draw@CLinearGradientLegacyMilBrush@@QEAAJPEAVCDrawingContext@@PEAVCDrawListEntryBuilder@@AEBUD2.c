/*
 * XREFs of ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D_RECT_F@@@Z @ 0x1801ECF34
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18000F914 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180033D10 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B4B40 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800CE690 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18011A280 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180126AE0 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x180126B64 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180126F18 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x18012E050 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??1CGradientColorData@@QEAA@XZ @ 0x1801ED358 (--1CGradientColorData@@QEAA@XZ.c)
 *     ?GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z @ 0x1801ED3BC (-GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801ED43C (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::Draw(
        CResource **this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        const __m128i *a4)
{
  FLOAT v5; // xmm1_4
  __int64 v8; // rdx
  __m128 v9; // xmm2
  int v10; // ebx
  _QWORD *v11; // rcx
  int v12; // xmm0_4
  struct D2D_SIZE_F v13; // rax
  CResource *v14; // rcx
  int v15; // eax
  int v16; // xmm1_4
  CResource *v17; // rcx
  unsigned int v18; // xmm0_4
  int v19; // eax
  __int64 v21; // rdi
  CResource *v22; // rcx
  char *v23; // rbx
  CResource *v24; // rcx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v26; // rcx
  int v27; // eax
  __m128i v28; // xmm0
  int DrawList; // eax
  struct D2D_SIZE_F v30; // [rsp+30h] [rbp-D0h] BYREF
  struct CGeometryOnlyDrawListBrush *v31[2]; // [rsp+38h] [rbp-C8h] BYREF
  char v32; // [rsp+48h] [rbp-B8h]
  _DWORD v33[2]; // [rsp+50h] [rbp-B0h] BYREF
  void *v34[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v35; // [rsp+68h] [rbp-98h]
  __int128 v36; // [rsp+78h] [rbp-88h]
  __int128 v37; // [rsp+90h] [rbp-70h] BYREF
  int v38; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+ECh] [rbp-14h]
  char v40; // [rsp+F0h] [rbp-10h]
  CDrawingContext *v41[5]; // [rsp+100h] [rbp+0h] BYREF
  int v42; // [rsp+12Ch] [rbp+2Ch]
  int v43; // [rsp+130h] [rbp+30h]

  v5 = *(float *)&a4->m128i_i32[3] - *(float *)&a4->m128i_i32[1];
  v30.width = *(float *)&a4->m128i_i32[2] - *(float *)a4->m128i_i32;
  v30.height = v5;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v41, a2, &v30);
  v39 = 257;
  v37 = 0LL;
  v38 = 0;
  *(_OWORD *)v34 = 0LL;
  v40 = 0;
  v35 = 0LL;
  v36 = 0LL;
  CGradientLegacyMilBrush::GetGradientColorData((CGradientLegacyMilBrush *)this, (struct CGradientColorData *)v34);
  v9 = (__m128)_mm_loadu_si128(a4);
  if ( *((float *)this + 40) != v9.m128_f32[0]
    || *((float *)this + 41) != _mm_shuffle_ps(v9, v9, 85).m128_f32[0]
    || *((float *)this + 42) != _mm_shuffle_ps(v9, v9, 170).m128_f32[0]
    || *((float *)this + 43) != _mm_shuffle_ps(v9, v9, 255).m128_f32[0]
    || *((_BYTE *)this + 208) )
  {
    v16 = *((_DWORD *)this + 37);
    v17 = this[22];
    v33[0] = *((_DWORD *)this + 36);
    v18 = *((_DWORD *)this + 38);
    v33[1] = v16;
    v31[0] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(*((_DWORD *)this + 39), v18);
    if ( v17 )
    {
      CPtrArrayBase::Remove((CResource *)((char *)v17 + 32), (unsigned __int64 *)this);
      this[22] = 0LL;
    }
    v19 = CLinearGradientLegacyMilBrush::EnsureDrawlistBrush((CLinearGradientLegacyMilBrush *)this);
    v10 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x3Cu, 0LL);
      goto LABEL_17;
    }
    CResource::SetPropertyImpl(
      this[23],
      (const struct AnimationHelper::AnimatedProperty *)&CLinearGradientBrush::sc_StartPoint,
      v33);
    CResource::SetPropertyImpl(
      this[23],
      (const struct AnimationHelper::AnimatedProperty *)&CLinearGradientBrush::sc_EndPoint,
      v31);
    v21 = *((_QWORD *)&v35 + 1);
    v22 = this[24];
    v30.width = *(FLOAT *)*((_DWORD **)&v35 + 1);
    CResource::SetPropertyImpl(
      v22,
      (const struct AnimationHelper::AnimatedProperty *)&CColorGradientStop::sc_Offset,
      &v30);
    v23 = (char *)v34[0];
    CResource::SetPropertyImpl(
      this[24],
      (const struct AnimationHelper::AnimatedProperty *)&CColorGradientStop::sc_Color,
      v34[0]);
    v24 = this[25];
    v30.width = *(FLOAT *)(v21 + 4);
    CResource::SetPropertyImpl(
      v24,
      (const struct AnimationHelper::AnimatedProperty *)&CColorGradientStop::sc_Offset,
      &v30);
    CResource::SetPropertyImpl(
      this[25],
      (const struct AnimationHelper::AnimatedProperty *)&CColorGradientStop::sc_Color,
      v23 + 16);
    Count = CPtrArray<CVisual>::GetCount((_QWORD *)this[23] + 4);
    v27 = CPtrArrayBase::InsertAt(v26, (unsigned __int64)this, Count);
    v10 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x4Cu, 0LL);
      goto LABEL_17;
    }
    this[22] = this[23];
    v28 = _mm_loadu_si128(a4);
    *((_BYTE *)this + 208) = 0;
    *((__m128i *)this + 10) = v28;
  }
  v30 = 0LL;
  v31[0] = (struct CGeometryOnlyDrawListBrush *)&v30;
  v31[1] = 0LL;
  v32 = 1;
  v10 = CGeometryOnlyDrawListBrush::Create(&v31[1], v8);
  if ( v32 )
  {
    v11 = *(_QWORD **)v31[0];
    *(_QWORD *)v31[0] = v31[1];
    if ( v11 )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v11);
  }
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x58u, 0LL);
LABEL_24:
    std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v30);
    goto LABEL_17;
  }
  v12 = v43;
  v13 = v30;
  v31[0] = 0LL;
  LODWORD(v31[1]) = v42;
  *(_BYTE *)(*(_QWORD *)&v30 + 52LL) = 1;
  *(_DWORD *)(*(_QWORD *)&v13 + 48LL) = 50529027;
  HIDWORD(v31[1]) = v12;
  *(_OWORD *)(*(_QWORD *)&v13 + 32LL) = *(_OWORD *)v31;
  v14 = this[23];
  *(struct D2D_SIZE_F *)&v37 = v30;
  v15 = (*(__int64 (__fastcall **)(CResource *, CDrawingContext **))(*(_QWORD *)v14 + 336LL))(v14, v41);
  v10 = v15;
  if ( v15 >= 0 )
  {
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 v41,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v37,
                 a3);
    v10 = DrawList;
    if ( DrawList < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0x61u, 0LL);
    goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x60u, 0LL);
  if ( v30 )
    CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(*(_QWORD **)&v30);
LABEL_17:
  CGradientColorData::~CGradientColorData((CGradientColorData *)v34);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v41);
  return (unsigned int)v10;
}
