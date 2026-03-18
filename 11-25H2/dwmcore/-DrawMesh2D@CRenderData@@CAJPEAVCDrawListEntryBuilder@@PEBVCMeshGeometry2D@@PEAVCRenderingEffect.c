/*
 * XREFs of ?DrawMesh2D@CRenderData@@CAJPEAVCDrawListEntryBuilder@@PEBVCMeshGeometry2D@@PEAVCRenderingEffect@@@Z @ 0x18024D520
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_44c05b5872deb73713c8c59481f10520__long_CMeshGeometry2D_const___::_Do_call @ 0x1802ACF20 (std--_Func_impl_no_alloc__lambda_44c05b5872deb73713c8c59481f10520__long_CMeshGeomet_ea_1802ACF20.c)
 * Callees:
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180047EA0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x180082478 (--0CCpuClip@@QEAA@XZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x18010D5A0 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18014A370 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18019E740 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??$?0$0?0V?$vector@HV?$allocator@H@std@@@std@@$0A@@?$span@$$CBH$0?0@gsl@@QEAA@AEBV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x18024D790 (--$-0$0-0V-$vector@HV-$allocator@H@std@@@std@@$0A@@-$span@$$CBH$0-0@gsl@@QEAA@AEBV-$vector@HV-$a.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IAEBV?$span@$$CBH$0?0@gsl@@@Z @ 0x18024D7E8 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderData::DrawMesh2D(
        struct CDrawListEntryBuilder *this,
        const struct CMeshGeometry2D *a2,
        unsigned int (__fastcall ***a3)(CMILRefCountImpl *__hidden this))
{
  __int64 v6; // rcx
  unsigned int (__fastcall **v7)(CMILRefCountImpl *__hidden); // rax
  CDrawListBitmap *v8; // rax
  CDrawListBitmap *v9; // r15
  __m128 v10; // xmm0
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __m128 v18; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v19; // [rsp+40h] [rbp-C0h]
  __int64 v20; // [rsp+48h] [rbp-B8h]
  _BYTE v21[16]; // [rsp+50h] [rbp-B0h] BYREF
  CRectanglesShape *v22; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v23[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-20h]
  float *v25; // [rsp+E8h] [rbp-18h]
  float v26[4]; // [rsp+F0h] [rbp-10h] BYREF
  float v27; // [rsp+100h] [rbp+0h]
  int v28; // [rsp+104h] [rbp+4h]
  float v29; // [rsp+108h] [rbp+8h]
  float v30; // [rsp+10Ch] [rbp+Ch]
  int v31; // [rsp+110h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  CCpuClip::CCpuClip((CCpuClip *)v21);
  v20 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v23[1] = 0LL;
  memset_0(v26, 0, 0x70uLL);
  if ( *((_QWORD *)a2 + 18) == *((_QWORD *)a2 + 19) )
    goto LABEL_12;
  v6 = *((_QWORD *)a2 + 13);
  if ( *((_QWORD *)a2 + 12) == v6
    || 0xAAAAAAAAAAAAAAABuLL * ((v6 - *((_QWORD *)a2 + 12)) >> 2) != (__int64)(*((_QWORD *)a2 + 16)
                                                                             - *((_QWORD *)a2 + 15)) >> 3 )
  {
    goto LABEL_12;
  }
  v19 = v21;
  v7 = *a3;
  v18.m128_u64[0] = 0x3F80000000000002LL;
  v18.m128_u64[1] = 0x13F800000LL;
  v8 = (CDrawListBitmap *)((__int64 (__fastcall *)(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden), _QWORD))v7[2])(
                            a3,
                            0LL);
  v9 = v8;
  if ( *((_DWORD *)a2 + 22) == 255 && CDrawListBitmap::IsOpaque(v8) )
    LODWORD(v20) = v20 | 1;
  CDrawListEntryBuilder::Begin(this, (const struct DrawListEntryBuilderSetupParams *)&v18, a3);
  v10 = (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 22));
  v10.m128_f32[0] = v10.m128_f32[0] / 255.0;
  v18 = _mm_shuffle_ps(v10, v10, 0);
  v23[0] = v18;
  CDrawListBitmap::GetSize(v9, &v18, v11);
  v26[1] = 0.0;
  v26[2] = 0.0;
  v26[3] = 0.0;
  v28 = 0;
  v31 = 1065353216;
  v24 = 2LL;
  v25 = v26;
  v26[0] = 1.0 / (float)v18.m128_i32[0];
  v27 = 1.0 / (float)v18.m128_i32[1];
  v29 = 0.0 - (float)(v26[0] * 0.0);
  v30 = 0.0 - (float)(v27 * 0.0);
  v12 = gsl::span<int const,-1>::span<int const,-1>(&v18, (char *)a2 + 144);
  v13 = CDrawListEntryBuilder::Insert(
          this,
          v23,
          *((_QWORD *)a2 + 12),
          *((_QWORD *)a2 + 15),
          -1431655765 * (unsigned int)((__int64)(*((_QWORD *)a2 + 13) - *((_QWORD *)a2 + 12)) >> 2),
          v12);
  v15 = v13;
  if ( v13 >= 0 )
  {
    v13 = CDrawListEntryBuilder::End(this, v14);
    v15 = v13;
    if ( v13 < 0 )
    {
      v16 = 1243LL;
      goto LABEL_11;
    }
LABEL_12:
    v15 = 0;
    goto LABEL_13;
  }
  v16 = 1241LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\renderdata.cpp",
    (const char *)(unsigned int)v13);
LABEL_13:
  CShapePtr::~CShapePtr(&v22);
  return v15;
}
