/*
 * XREFs of ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180069FD4
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18006976C (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18000DF90 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x180069F4C (-SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z.c)
 *     ?CalculateBounds@CProjectedShadow@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEBVCVisualTree@@@Z @ 0x18006A2A0 (-CalculateBounds@CProjectedShadow@@AEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadow::AdjustNineGridBrush(__int64 a1, __int64 a2, __int64 a3, float *a4)
{
  int v7; // xmm7_4
  float v8; // xmm0_4
  int v9; // xmm8_4
  float v10; // xmm3_4
  float v11; // xmm6_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm6_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  char *v17; // rax
  CResource *v18; // rdi
  __int64 v19; // rcx
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // eax
  int v23; // eax
  _DWORD v25[2]; // [rsp+38h] [rbp-39h] BYREF
  _DWORD v26[2]; // [rsp+40h] [rbp-31h] BYREF
  char *v27; // [rsp+48h] [rbp-29h] BYREF
  float v28; // [rsp+50h] [rbp-21h]
  float v29; // [rsp+54h] [rbp-1Dh]

  CProjectedShadow::CalculateBounds(a1, &v27, a3, *(_QWORD *)(a2 + 7944));
  v7 = (int)v27;
  v8 = v28 - *(float *)&v27;
  v9 = HIDWORD(v27);
  v10 = FLOAT_32_0;
  v11 = v29 - *((float *)&v27 + 1);
  v12 = FLOAT_32_0;
  if ( (float)(v28 - *(float *)&v27) < (float)(v29 - *((float *)&v27 + 1)) )
  {
    v10 = (float)(v11 / v8) * 32.0;
    v11 = v28 - *(float *)&v27;
  }
  else
  {
    v12 = (float)(v8 / v11) * 32.0;
  }
  v13 = a4[2] - *a4;
  v14 = v11 * 0.03125;
  v26[0] = -1031798784;
  v26[1] = -1031798784;
  v15 = (float)(v12 + 128.0) / v13;
  v16 = a4[3] - a4[1];
  *(float *)v25 = v15;
  *(float *)&v25[1] = (float)(v10 + 128.0) / v16;
  v17 = (char *)DefaultHeap::AllocClear(0xE0uLL);
  v18 = (CResource *)v17;
  if ( !v17 )
  {
    v21 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42Eu, 0LL);
    return v21;
  }
  v19 = *(_QWORD *)(a1 + 24);
  *((_DWORD *)v17 + 2) = 0;
  *((_QWORD *)v17 + 3) = v19;
  *((_QWORD *)v17 + 2) = 0LL;
  *((_QWORD *)v17 + 4) = 0LL;
  *((_QWORD *)v17 + 6) = 0LL;
  *((_DWORD *)v17 + 10) = 0;
  *((_DWORD *)v17 + 36) = 0;
  *((_DWORD *)v17 + 10) |= 1u;
  *(_QWORD *)v17 = &CComponentTransform2D::`vftable';
  *((_DWORD *)v17 + 46) = 1065353216;
  *((_DWORD *)v17 + 47) = 1065353216;
  v17[156] = 0;
  v27 = v17;
  *(_OWORD *)(v17 + 196) = *(_OWORD *)&CComponentTransform2D::sc_defaultTransformMatrix.m11;
  *(_QWORD *)(v17 + 212) = 0LL;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v17 + 8LL))(v17);
  v20 = CResource::SetPropertyImpl(
          v18,
          (const struct AnimationHelper::AnimatedProperty *)&CComponentTransform2D::sc_Scale,
          v25);
  v21 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x430u, 0LL);
    (*(void (__fastcall **)(CResource *))(*(_QWORD *)v18 + 16LL))(v18);
    return v21;
  }
  v22 = CResource::SetPropertyImpl(
          v18,
          (const struct AnimationHelper::AnimatedProperty *)&CComponentTransform2D::sc_Offset,
          v26);
  v21 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x431u, 0LL);
    goto LABEL_14;
  }
  v23 = CSurfaceBrush::SetTransform(*(struct CResource ***)(a3 + 104), v18);
  v21 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x434u, 0LL);
LABEL_14:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v27);
    return v21;
  }
  (*(void (__fastcall **)(CResource *))(*(_QWORD *)v18 + 16LL))(v18);
  *(float *)(a3 + 144) = v14;
  *(_QWORD *)(a3 + 148) = 0LL;
  *(float *)(a3 + 156) = v14;
  *(_DWORD *)(a3 + 160) = v7;
  *(_DWORD *)(a3 + 164) = v9;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a3 + 80LL))(a3, 6LL, a3);
  return v21;
}
