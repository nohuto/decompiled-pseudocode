/*
 * XREFs of ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x18010D5A0
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180049BE0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180080B20 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18010DE80 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawListEntry@@PEAPEAVCDrawListPrimitive@@@Z @ 0x180169888 (-BuildPrimitiveFromReconstructableDrawList@CDrawListEntryBuilder@@SAJPEBVCReconstructableDrawLis.c)
 *     ?DrawMesh2D@CRenderData@@CAJPEAVCDrawListEntryBuilder@@PEBVCMeshGeometry2D@@PEAVCRenderingEffect@@@Z @ 0x18024D520 (-DrawMesh2D@CRenderData@@CAJPEAVCDrawListEntryBuilder@@PEBVCMeshGeometry2D@@PEAVCRenderingEffect.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawListEntryBuilder::Begin(
        CDrawListEntryBuilder *this,
        const struct DrawListEntryBuilderSetupParams *a2,
        unsigned int (__fastcall ***a3)(CMILRefCountImpl *__hidden this))
{
  int v4; // eax
  __int64 v5; // rdi
  unsigned int (__fastcall *v6)(CMILRefCountImpl *__hidden); // rax
  int v7; // et0
  bool v8; // al
  __int64 v9; // rdx
  int v10; // ecx
  unsigned int v11; // ecx
  char v12; // al
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  float v20; // xmm2_4
  float v21; // xmm5_4
  float v22; // xmm0_4
  float v23; // xmm5_4
  float v24; // xmm9_4
  float v25; // xmm2_4
  float v26; // xmm4_4
  float v27; // xmm1_4
  float v28; // xmm8_4
  float v29; // xmm1_4
  int v30; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 2;
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  if ( *(_DWORD *)this > 2u )
    v4 = 4;
  *(_DWORD *)this = v4;
  v5 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = a3;
  if ( a3 )
  {
    v6 = **a3;
    if ( v6 == CMILRefCountImpl::AddReference )
    {
      v7 = _InterlockedAdd((volatile signed __int32 *)a3, 1u);
      if ( (v7 < 0) ^ __OFSUB__(v6, CMILRefCountImpl::AddReference) | (v7 == 0) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v30);
    }
    else
    {
      v6((CMILRefCountImpl *)a3);
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *((_WORD *)this + 2246) = 0;
  v8 = CCommonRegistryData::EnableMegaRects && (float)CCommonRegistryData::MegaRectSize > 0.0;
  v9 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 4491) = v8;
  v10 = *((_DWORD *)this + 6) | *(_DWORD *)(v9 + 104);
  *((_DWORD *)this + 6) = v10;
  if ( (*(_BYTE *)(v9 + 104) & 4) != 0 )
  {
    *((_BYTE *)this + 4490) = 1;
    v11 = v10 | 4;
    v12 = 1;
  }
  else
  {
    v11 = v10 & 0xFFFFFFFB;
    *((_BYTE *)this + 4490) = CCommonRegistryData::EnableCpuClipping;
    v12 = CCommonRegistryData::EnableCpuClipping;
  }
  *((_DWORD *)this + 6) = v11;
  if ( (v11 & 0x800) != 0 )
    *((_BYTE *)this + 28) = 0;
  v13 = 0.0;
  v14 = 0.0;
  if ( v12 && (*(_QWORD *)v9 || *(_QWORD *)(v9 + 16)) )
  {
    v20 = *(float *)(v9 + 44) * 0.0;
    v21 = *(float *)(v9 + 60) * 0.0;
    v22 = v21 - *(float *)(v9 + 48);
    v23 = v21 - *(float *)(v9 + 52);
    v24 = v20 - *(float *)(v9 + 32);
    v25 = v20 - *(float *)(v9 + 36);
    if ( (float)(v24 * v23) != (float)(v22 * v25) )
    {
      v26 = (float)(v24 * v23) - (float)(v22 * v25);
      v27 = *(float *)(v9 + 92) * 0.0;
      v28 = v27 - *(float *)(v9 + 80);
      v29 = v27 - *(float *)(v9 + 84);
      v13 = (float)((float)(v22 * v29) - (float)(v28 * v23)) / v26;
      v14 = (float)((float)(v28 * v25) - (float)(v29 * v24)) / v26;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v13 - 0.0) & _xmm) <= 0.015625 )
      v13 = 0.0;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - 0.0) & _xmm) <= 0.015625 )
      v14 = 0.0;
  }
  v15 = *((float *)this + 1);
  if ( COERCE_FLOAT(LODWORD(v15) & _xmm) < 0.000081380211
    || (v16 = *((float *)this + 2), COERCE_FLOAT(LODWORD(v16) & _xmm) < 0.000081380211) )
  {
    *((_DWORD *)this + 1) = 1065353216;
    v15 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    *((_DWORD *)this + 2) = 1065353216;
    v16 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 1.0) & _xmm) <= 0.000081380211 )
    v15 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - 1.0) & _xmm) <= 0.000081380211 )
    v16 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( v15 == 1.0 && v16 == 1.0 && v13 == 0.0 && v14 == 0.0 )
  {
    *((_BYTE *)this + 4489) = 0;
  }
  else
  {
    *((_BYTE *)this + 4489) = 1;
    *((float *)this + 8) = v15;
    *(_QWORD *)((char *)this + 36) = 0LL;
    *((float *)this + 11) = v16;
    *((_DWORD *)this + 12) = COERCE_UNSIGNED_INT(v13 * v15) ^ _xmm;
    *((_DWORD *)this + 13) = COERCE_UNSIGNED_INT(v14 * v16) ^ _xmm;
    *((float *)this + 14) = 1.0 / v15;
    *(_QWORD *)((char *)this + 60) = 0LL;
    *((float *)this + 17) = 1.0 / v16;
    *((float *)this + 18) = v13;
    *((float *)this + 19) = v14;
  }
  v17 = (__int64)(*((_QWORD *)this + 23) - *((_QWORD *)this + 22)) >> 4;
  if ( v17 )
    *((_QWORD *)this + 23) -= 16 * v17;
  v18 = (__int64)(*((_QWORD *)this + 267) - *((_QWORD *)this + 266)) >> 4;
  if ( v18 )
    *((_QWORD *)this + 267) -= 16 * v18;
  v19 = (__int64)(*((_QWORD *)this + 512) - *((_QWORD *)this + 511)) >> 1;
  if ( v19 )
    *((_QWORD *)this + 512) -= 2 * v19;
  *((_QWORD *)this + 558) = 0LL;
  *((_QWORD *)this + 510) = 0LL;
}
