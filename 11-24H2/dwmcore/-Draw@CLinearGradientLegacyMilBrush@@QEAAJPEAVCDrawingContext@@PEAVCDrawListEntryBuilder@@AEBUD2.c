/*
 * XREFs of ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUD2D_RECT_F@@@Z @ 0x1801DD054
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18013BB14 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18000DF90 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180037EF0 (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18006BF94 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18006C0F8 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x18006C184 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800A0660 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800C0810 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014F8C0 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18016C070 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1CGradientColorData@@QEAA@XZ @ 0x1801DD478 (--1CGradientColorData@@QEAA@XZ.c)
 *     ?GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z @ 0x1801DD4DC (-GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801DD55C (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::Draw(
        CResource **this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        const __m128i *a4)
{
  FLOAT v5; // xmm1_4
  __m128 v8; // xmm2
  int v9; // ebx
  _QWORD *v10; // rcx
  int v11; // xmm0_4
  struct D2D_SIZE_F v12; // rax
  CResource *v13; // rcx
  int v14; // eax
  int v15; // xmm1_4
  CResource *v16; // rcx
  unsigned int v17; // xmm0_4
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v22; // rdi
  CResource *v23; // rcx
  char *v24; // rbx
  CResource *v25; // rcx
  unsigned __int64 Count; // rax
  CPtrArrayBase *v27; // rcx
  int v28; // eax
  __m128i v29; // xmm0
  int DrawList; // eax
  struct D2D_SIZE_F v31; // [rsp+30h] [rbp-D0h] BYREF
  struct CGeometryOnlyDrawListBrush *v32[2]; // [rsp+38h] [rbp-C8h] BYREF
  char v33; // [rsp+48h] [rbp-B8h]
  _DWORD v34[2]; // [rsp+50h] [rbp-B0h] BYREF
  void *v35[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+68h] [rbp-98h]
  __int128 v37; // [rsp+78h] [rbp-88h]
  __int128 v38; // [rsp+90h] [rbp-70h] BYREF
  int v39; // [rsp+A0h] [rbp-60h]
  int v40; // [rsp+ECh] [rbp-14h]
  char v41; // [rsp+F0h] [rbp-10h]
  CDrawingContext *v42[5]; // [rsp+100h] [rbp+0h] BYREF
  int v43; // [rsp+12Ch] [rbp+2Ch]
  int v44; // [rsp+130h] [rbp+30h]

  v5 = *(float *)&a4->m128i_i32[3] - *(float *)&a4->m128i_i32[1];
  v31.width = *(float *)&a4->m128i_i32[2] - *(float *)a4->m128i_i32;
  v31.height = v5;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v42, a2, &v31);
  v40 = 257;
  v38 = 0LL;
  v39 = 0;
  *(_OWORD *)v35 = 0LL;
  v41 = 0;
  v36 = 0LL;
  v37 = 0LL;
  CGradientLegacyMilBrush::GetGradientColorData((CGradientLegacyMilBrush *)this, (struct CGradientColorData *)v35);
  v8 = (__m128)_mm_loadu_si128(a4);
  if ( *((float *)this + 40) != v8.m128_f32[0]
    || *((float *)this + 41) != _mm_shuffle_ps(v8, v8, 85).m128_f32[0]
    || *((float *)this + 42) != _mm_shuffle_ps(v8, v8, 170).m128_f32[0]
    || *((float *)this + 43) != _mm_shuffle_ps(v8, v8, 255).m128_f32[0]
    || *((_BYTE *)this + 208) )
  {
    v15 = *((_DWORD *)this + 37);
    v16 = this[22];
    v34[0] = *((_DWORD *)this + 36);
    v17 = *((_DWORD *)this + 38);
    v34[1] = v15;
    v32[0] = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(*((_DWORD *)this + 39), v17);
    if ( v16 )
    {
      CPtrArrayBase::Remove((CResource *)((char *)v16 + 32), (unsigned __int64 *)this);
      this[22] = 0LL;
    }
    v18 = CLinearGradientLegacyMilBrush::EnsureDrawlistBrush((CLinearGradientLegacyMilBrush *)this);
    v9 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x3Cu, 0LL);
      goto LABEL_17;
    }
    CResource::SetPropertyImpl(
      this[23],
      (const struct AnimationHelper::AnimatedProperty *)&CLinearGradientBrush::sc_StartPoint,
      v34);
    CResource::SetPropertyImpl(
      this[23],
      (const struct AnimationHelper::AnimatedProperty *)&CLinearGradientBrush::sc_EndPoint,
      v32);
    v22 = *((_QWORD *)&v36 + 1);
    v23 = this[24];
    v31.width = *(FLOAT *)*((_DWORD **)&v36 + 1);
    CResource::SetPropertyImpl(
      v23,
      (const struct AnimationHelper::AnimatedProperty *)&CColorGradientStop::sc_Offset,
      &v31);
    v24 = (char *)v35[0];
    CResource::SetPropertyImpl(
      this[24],
      (const struct AnimationHelper::AnimatedProperty *)&CColorGradientStop::sc_Color,
      v35[0]);
    v25 = this[25];
    v31.width = *(FLOAT *)(v22 + 4);
    CResource::SetPropertyImpl(
      v25,
      (const struct AnimationHelper::AnimatedProperty *)&CColorGradientStop::sc_Offset,
      &v31);
    CResource::SetPropertyImpl(
      this[25],
      (const struct AnimationHelper::AnimatedProperty *)&CColorGradientStop::sc_Color,
      v24 + 16);
    Count = CPtrArray<CVisual>::GetCount((_QWORD *)this[23] + 4);
    v28 = CPtrArrayBase::InsertAt(v27, (unsigned __int64)this, Count);
    v9 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, 0x4Cu, 0LL);
      goto LABEL_17;
    }
    this[22] = this[23];
    v29 = _mm_loadu_si128(a4);
    *((_BYTE *)this + 208) = 0;
    *((__m128i *)this + 10) = v29;
  }
  v31 = 0LL;
  v32[0] = (struct CGeometryOnlyDrawListBrush *)&v31;
  v32[1] = 0LL;
  v33 = 1;
  v9 = CGeometryOnlyDrawListBrush::Create(&v32[1]);
  if ( v33 )
  {
    v10 = *(_QWORD **)v32[0];
    *(_QWORD *)v32[0] = v32[1];
    if ( v10 )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v10);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x58u, 0LL);
LABEL_24:
    std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v31);
    goto LABEL_17;
  }
  v11 = v44;
  v12 = v31;
  v32[0] = 0LL;
  LODWORD(v32[1]) = v43;
  *(_BYTE *)(*(_QWORD *)&v31 + 52LL) = 1;
  *(_DWORD *)(*(_QWORD *)&v12 + 48LL) = 50529027;
  HIDWORD(v32[1]) = v11;
  *(_OWORD *)(*(_QWORD *)&v12 + 32LL) = *(_OWORD *)v32;
  v13 = this[23];
  *(struct D2D_SIZE_F *)&v38 = v31;
  v14 = (*(__int64 (__fastcall **)(CResource *, CDrawingContext **))(*(_QWORD *)v13 + 336LL))(v13, v42);
  v9 = v14;
  if ( v14 >= 0 )
  {
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 v42,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v38,
                 a3);
    v9 = DrawList;
    if ( DrawList < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0x61u, 0LL);
    goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x60u, 0LL);
  if ( v31 )
    CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(*(_QWORD **)&v31);
LABEL_17:
  CGradientColorData::~CGradientColorData((CGradientColorData *)v35);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v42, v19, v20);
  return (unsigned int)v9;
}
