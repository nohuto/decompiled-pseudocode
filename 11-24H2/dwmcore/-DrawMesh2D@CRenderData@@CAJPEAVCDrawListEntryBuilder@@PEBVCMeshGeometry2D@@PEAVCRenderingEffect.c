/*
 * XREFs of ?DrawMesh2D@CRenderData@@CAJPEAVCDrawListEntryBuilder@@PEBVCMeshGeometry2D@@PEAVCRenderingEffect@@@Z @ 0x180244058
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_44c05b5872deb73713c8c59481f10520__long_CMeshGeometry2D_const___::_Do_call @ 0x1802A3400 (std--_Func_impl_no_alloc__lambda_44c05b5872deb73713c8c59481f10520__long_CMeshGeomet_ea_1802A3400.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800638E0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800D7CE0 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x1800F74F8 (--0CCpuClip@@QEAA@XZ.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18010E730 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x18016DF50 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ??$?0$0?0V?$vector@HV?$allocator@H@std@@@std@@$0A@@?$span@$$CBH$0?0@gsl@@QEAA@AEBV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1802442C8 (--$-0$0-0V-$vector@HV-$allocator@H@std@@@std@@$0A@@-$span@$$CBH$0-0@gsl@@QEAA@AEBV-$vector@HV-$a.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IAEBV?$span@$$CBH$0?0@gsl@@@Z @ 0x180244320 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveVertexAttributesDesc@@PEBUD2D_POINT_3F@@PEBUD2D.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __m128 v17; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v18; // [rsp+40h] [rbp-C0h]
  __int64 v19; // [rsp+48h] [rbp-B8h]
  _BYTE v20[16]; // [rsp+50h] [rbp-B0h] BYREF
  CRectanglesShape *v21; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v22[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-20h]
  float *v24; // [rsp+E8h] [rbp-18h]
  float v25[4]; // [rsp+F0h] [rbp-10h] BYREF
  float v26; // [rsp+100h] [rbp+0h]
  int v27; // [rsp+104h] [rbp+4h]
  float v28; // [rsp+108h] [rbp+8h]
  float v29; // [rsp+10Ch] [rbp+Ch]
  int v30; // [rsp+110h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  CCpuClip::CCpuClip((CCpuClip *)v20);
  v19 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v22[1] = 0LL;
  memset_0(v25, 0, 0x70uLL);
  if ( *((_QWORD *)a2 + 18) == *((_QWORD *)a2 + 19) )
    goto LABEL_12;
  v6 = *((_QWORD *)a2 + 13);
  if ( *((_QWORD *)a2 + 12) == v6
    || 0xAAAAAAAAAAAAAAABuLL * ((v6 - *((_QWORD *)a2 + 12)) >> 2) != (__int64)(*((_QWORD *)a2 + 16)
                                                                             - *((_QWORD *)a2 + 15)) >> 3 )
  {
    goto LABEL_12;
  }
  v18 = v20;
  v7 = *a3;
  v17.m128_u64[0] = 0x3F80000000000002LL;
  v17.m128_u64[1] = 0x13F800000LL;
  v8 = (CDrawListBitmap *)((__int64 (__fastcall *)(unsigned int (__fastcall ***)(CMILRefCountImpl *__hidden), _QWORD))v7[2])(
                            a3,
                            0LL);
  v9 = v8;
  if ( *((_DWORD *)a2 + 22) == 255 && CDrawListBitmap::IsOpaque(v8) )
    LODWORD(v19) = v19 | 1;
  CDrawListEntryBuilder::Begin(this, (const struct DrawListEntryBuilderSetupParams *)&v17, a3);
  v10 = (__m128)COERCE_UNSIGNED_INT((float)*((int *)a2 + 22));
  v10.m128_f32[0] = v10.m128_f32[0] / 255.0;
  v17 = _mm_shuffle_ps(v10, v10, 0);
  v22[0] = v17;
  CDrawListBitmap::GetSize(v9, &v17);
  v25[1] = 0.0;
  v25[2] = 0.0;
  v25[3] = 0.0;
  v27 = 0;
  v30 = 1065353216;
  v23 = 2LL;
  v24 = v25;
  v25[0] = 1.0 / (float)v17.m128_i32[0];
  v26 = 1.0 / (float)v17.m128_i32[1];
  v28 = 0.0 - (float)(v25[0] * 0.0);
  v29 = 0.0 - (float)(v26 * 0.0);
  v11 = gsl::span<int const,-1>::span<int const,-1>(&v17, (char *)a2 + 144);
  v12 = CDrawListEntryBuilder::Insert(
          this,
          v22,
          *((_QWORD *)a2 + 12),
          *((_QWORD *)a2 + 15),
          -1431655765 * (unsigned int)((__int64)(*((_QWORD *)a2 + 13) - *((_QWORD *)a2 + 12)) >> 2),
          v11);
  v14 = v12;
  if ( v12 >= 0 )
  {
    v12 = CDrawListEntryBuilder::End(this, v13);
    v14 = v12;
    if ( v12 < 0 )
    {
      v15 = 1243LL;
      goto LABEL_11;
    }
LABEL_12:
    v14 = 0;
    goto LABEL_13;
  }
  v15 = 1241LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\renderdata.cpp",
    (const char *)(unsigned int)v12);
LABEL_13:
  CShapePtr::~CShapePtr(&v21);
  return v14;
}
