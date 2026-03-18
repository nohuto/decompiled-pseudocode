/*
 * XREFs of ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18001A190
 * Callers:
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180018F90 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18004C190 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18006BF94 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x18006C184 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x18009EF40 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?reset@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDrawListBrush@@@Z @ 0x1800A053C (-reset@-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDr.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800A0660 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800A0750 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180126E00 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180136530 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18014F9E0 (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z @ 0x18014FFF0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z.c)
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180150034 (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x18016AD30 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E53E0 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801EEA10 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x18025007C (-IsIdentity@CComponentTransform2D@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridBrush::GetBrushParameters(CNineGridBrush *this, struct CBrushDrawListGenerator *a2)
{
  CDirtyRegionAnnotation *v2; // rdi
  float v3; // xmm11_4
  float v4; // xmm12_4
  float v6; // xmm13_4
  CMultiPrimitiveDrawListBrush *v8; // rbx
  float v9; // xmm10_4
  __int64 v10; // rsi
  char v11; // r13
  float v12; // xmm11_4
  float v13; // xmm12_4
  float v14; // xmm13_4
  struct CBrushDrawListGenerator *v15; // r8
  int v16; // xmm1_4
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  CComponentTransform2D *v20; // rcx
  CSurfaceBrush *v21; // rcx
  __int64 (__fastcall *v22)(CSurfaceBrush *__hidden, struct CBrushDrawListGenerator *); // rax
  int BrushParameters; // eax
  struct CNineGridDrawListBrush *v24; // rcx
  int v25; // edi
  void *(__fastcall *v26)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  char *v28; // rsi
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm8_4
  float v32; // xmm9_4
  int v33; // r12d
  char v34; // di
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v36; // rsi
  int v37; // edx
  CMultiPrimitiveDrawListBrush *v38; // rax
  int v39; // eax
  float *v40; // rcx
  float v41; // xmm9_4
  float v42; // xmm7_4
  float v43; // xmm13_4
  float v44; // xmm12_4
  float v45; // xmm4_4
  float v46; // xmm10_4
  float v47; // xmm11_4
  float v48; // xmm6_4
  float v49; // xmm8_4
  float v50; // xmm0_4
  float v51; // xmm2_4
  CMultiPrimitiveDrawListBrush *v52; // rcx
  void *(__fastcall *v53)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  int v54; // eax
  void *v55; // rcx
  int v56; // xmm1_4
  int v57; // xmm0_4
  _DWORD *v58; // rax
  LPVOID v59; // rdx
  int v60; // esi
  __int64 v61; // rcx
  unsigned int v62; // xmm1_4
  unsigned int v63; // xmm0_4
  __int128 v64; // xmm1
  unsigned int v65; // [rsp+28h] [rbp-E0h]
  LPVOID lpMem; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID lpMem_8[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+50h] [rbp-B8h]
  CMultiPrimitiveDrawListBrush *v69; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v70; // [rsp+68h] [rbp-A0h] BYREF
  CMultiPrimitiveDrawListBrush *v71; // [rsp+70h] [rbp-98h] BYREF
  int v72; // [rsp+90h] [rbp-78h]
  int v73; // [rsp+94h] [rbp-74h]
  int v74; // [rsp+98h] [rbp-70h]
  int v75; // [rsp+9Ch] [rbp-6Ch]
  __int128 v76; // [rsp+A0h] [rbp-68h]

  v2 = (CDirtyRegionAnnotation *)&v71;
  v3 = *((float *)this + 31);
  v4 = *((float *)this + 33);
  v6 = *((float *)this + 35);
  v8 = 0LL;
  v9 = *((float *)this + 29) * *((float *)this + 28);
  v10 = 4LL;
  v11 = 0;
  v70 = *(_QWORD *)a2;
  v12 = v3 * *((float *)this + 30);
  v13 = v4 * *((float *)this + 32);
  v14 = v6 * *((float *)this + 34);
  do
  {
    --v10;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v2);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v2);
    v2 = (CDirtyRegionAnnotation *)((char *)v2 + 8);
  }
  while ( v10 );
  v16 = *((_DWORD *)a2 + 12);
  v73 = *((_DWORD *)a2 + 11);
  v74 = v16;
  v72 = 0;
  v75 = 0;
  *(_QWORD *)&v76 = 0x3F8000003F800000LL;
  *((_QWORD *)&v76 + 1) = 0x3F8000003F800000LL;
  if ( !*((_BYTE *)this + 169) )
  {
    v17 = *((_QWORD *)this + 13);
    v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 64LL);
    if ( v18 == CSurfaceBrush::IsOfType ? CSurfaceBrush::IsOfType(v17, 169LL) : (unsigned __int8)v18(v17, 169LL) )
    {
      v20 = *(CComponentTransform2D **)(*((_QWORD *)this + 13) + 144LL);
      if ( v20 )
      {
        if ( !CComponentTransform2D::IsIdentity(v20) )
        {
          v25 = -2147022876;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
            McTemplateU0t_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_NINEGRIDBRUSH_DRAW_ERROR_INVALID_INPUT,
              2147944420LL);
          v65 = 629;
          goto LABEL_14;
        }
      }
    }
  }
  v21 = (CSurfaceBrush *)*((_QWORD *)this + 13);
  v22 = *(__int64 (__fastcall **)(CSurfaceBrush *__hidden, struct CBrushDrawListGenerator *))(*(_QWORD *)v21 + 336LL);
  if ( v22 == CSurfaceBrush::GetBrushParameters )
  {
    BrushParameters = CSurfaceBrush::GetBrushParameters(v21, (struct CBrushDrawListGenerator *)&v70);
  }
  else if ( (char *)v22 == (char *)CBitmapRenderStrategy::GetBrushParameters )
  {
    BrushParameters = CBitmapRenderStrategy::GetBrushParameters(v21, (const struct CSurfaceBrush *)&v70, v15);
  }
  else
  {
    BrushParameters = v22(v21, (struct CBrushDrawListGenerator *)&v70);
  }
  v25 = BrushParameters;
  if ( BrushParameters < 0 )
  {
    v65 = 634;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180313C78, 2u, v25, v65, 0LL);
LABEL_15:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_16;
  }
  v8 = v71;
  v28 = (char *)this + 168;
  v71 = 0LL;
  v69 = v8;
  if ( v8 )
  {
    if ( *((_BYTE *)v8 + 52) )
    {
      v29 = *((float *)this + 28);
      v11 = 1;
      v30 = *((float *)this + 30);
      v31 = *((float *)this + 32);
      v32 = *((float *)this + 34);
      goto LABEL_30;
    }
    if ( *v28 )
    {
      v62 = *((_DWORD *)a2 + 11);
      v11 = 1;
      v63 = *((_DWORD *)a2 + 12);
      v29 = v9;
      lpMem_8[0] = 0LL;
      v30 = v12;
      v31 = v13;
      *((_BYTE *)v8 + 52) = 1;
      v32 = v14;
      lpMem_8[1] = (LPVOID)__PAIR64__(v63, v62);
      v64 = *(_OWORD *)lpMem_8;
      *((_DWORD *)v8 + 12) = 50529027;
      *((_OWORD *)v8 + 2) = v64;
      goto LABEL_30;
    }
LABEL_50:
    v32 = *(float *)&lpMem;
    v31 = *(float *)&lpMem;
    v30 = *(float *)&lpMem;
    v29 = *(float *)&lpMem;
    goto LABEL_30;
  }
  *(_OWORD *)((char *)a2 + 56) = v76;
  if ( !*v28 )
    goto LABEL_50;
  lpMem = 0LL;
  v11 = 1;
  lpMem_8[0] = &lpMem;
  LOBYTE(v68) = 1;
  v29 = v9;
  lpMem_8[1] = 0LL;
  v30 = v12;
  v31 = v13;
  v32 = v14;
  v25 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&lpMem_8[1]);
  if ( (_BYTE)v68 )
  {
    v55 = *(void **)lpMem_8[0];
    *(_QWORD *)lpMem_8[0] = lpMem_8[1];
    if ( v55 )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v55);
  }
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180313C78, 2u, v25, 0x28Bu, 0LL);
    if ( lpMem )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
    goto LABEL_15;
  }
  v56 = *((_DWORD *)a2 + 11);
  v57 = *((_DWORD *)a2 + 12);
  v58 = lpMem;
  lpMem_8[0] = 0LL;
  LODWORD(lpMem_8[1]) = v56;
  *((_BYTE *)lpMem + 52) = 1;
  v58[12] = 50529027;
  HIDWORD(lpMem_8[1]) = v57;
  *((_OWORD *)v58 + 2) = *(_OWORD *)lpMem_8;
  v59 = lpMem;
  lpMem = 0LL;
  std::unique_ptr<CDrawListBrush>::reset(&v69, v59);
  v24 = (struct CNineGridDrawListBrush *)lpMem;
  if ( lpMem )
  {
    CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
    v33 = v75;
    v8 = v69;
    goto LABEL_31;
  }
  v8 = v69;
LABEL_30:
  v33 = v75;
  if ( !v11 )
    goto LABEL_37;
LABEL_31:
  v34 = *v28;
  ObjectCache = CThreadContext::GetObjectCache(v24);
  v36 = 0LL;
  v37 = *((_DWORD *)ObjectCache + 1);
  if ( v37 )
  {
    v36 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v36;
    *((_DWORD *)ObjectCache + 1) = v37 - 1;
  }
  if ( !v36 )
  {
    v36 = MIDL_user_allocate(0x240uLL);
    if ( !v36 )
    {
      v25 = -2147024882;
      v60 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u, 0LL);
LABEL_59:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180313C78, 2u, v60, 0x2BBu, 0LL);
      goto LABEL_15;
    }
  }
  v36[1] = 1065353216LL;
  *((_DWORD *)v36 + 4) = 0;
  *(_QWORD *)((char *)v36 + 20) = 1065353216LL;
  *((_DWORD *)v36 + 7) = 0;
  *v36 = &CNineGridDrawListBrush::`vftable';
  v38 = v8;
  *((_BYTE *)v36 + 52) = 0;
  v8 = 0LL;
  *((_BYTE *)v36 + 64) = 0;
  v36[9] = v38;
  v36[14] = v36 + 17;
  v36[15] = v36 + 17;
  v36[16] = v36 + 37;
  v36[37] = v36 + 40;
  v36[38] = v36 + 40;
  v36[39] = v36 + 60;
  *((float *)v36 + 20) = v29;
  *((float *)v36 + 21) = v30;
  *((float *)v36 + 22) = v31;
  *((float *)v36 + 23) = v32;
  v36[60] = v36 + 63;
  v36[61] = v36 + 63;
  v36[62] = v36 + 69;
  *((float *)v36 + 24) = v9;
  *((float *)v36 + 25) = v12;
  *((float *)v36 + 26) = v13;
  *((float *)v36 + 27) = v14;
  *((_BYTE *)v36 + 568) = v34;
  *((_BYTE *)v36 + 569) = 0;
  v39 = CNineGridDrawListBrush::Initialize((CNineGridDrawListBrush *)v36);
  v25 = v39;
  if ( v39 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x29u, 0LL);
    std::default_delete<CNineGridDrawListBrush>::operator()(v61, v36);
    v60 = v25;
    goto LABEL_59;
  }
  v8 = (CMultiPrimitiveDrawListBrush *)v36;
LABEL_37:
  if ( !D2D1::Matrix3x2F::IsIdentity((CNineGridBrush *)((char *)this + 144)) )
  {
    v41 = v40[2];
    v42 = *v40;
    v43 = v40[3];
    v44 = v40[1];
    v45 = *((float *)v8 + 4);
    v46 = *((float *)v8 + 7);
    v47 = *((float *)v8 + 6);
    v48 = v40[4];
    v49 = v40[5];
    v50 = *((float *)v8 + 5);
    v51 = (float)(*((float *)v8 + 2) * v44) + (float)(*((float *)v8 + 3) * v43);
    *((float *)v8 + 2) = (float)(*((float *)v8 + 2) * *v40) + (float)(*((float *)v8 + 3) * v41);
    *((float *)v8 + 3) = v51;
    *((float *)v8 + 4) = (float)(v45 * v42) + (float)(v50 * v41);
    *((float *)v8 + 5) = (float)(v45 * v44) + (float)(v50 * v43);
    *((float *)v8 + 6) = (float)((float)(v47 * v42) + (float)(v46 * v41)) + v48;
    *((float *)v8 + 7) = (float)((float)(v47 * v44) + (float)(v46 * v43)) + v49;
  }
  v52 = (CMultiPrimitiveDrawListBrush *)*((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = v8;
  v8 = 0LL;
  if ( v52 )
  {
    v53 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v52;
    if ( v53 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v52, 1u);
    }
    else if ( v53 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v52, 1u);
    }
    else if ( v53 == CDrawListPrimitive0::`scalar deleting destructor' )
    {
      CDrawListPrimitive0::`scalar deleting destructor'(v52, 1u);
    }
    else
    {
      v53(v52, 1u);
    }
  }
  v54 = 1;
  *((_DWORD *)a2 + 13) = v33;
  if ( *((_DWORD *)a2 + 10) > 1u )
    v54 = *((_DWORD *)a2 + 10);
  v25 = 0;
  *((_DWORD *)a2 + 10) = v54;
LABEL_16:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v70);
  if ( v8 )
  {
    v26 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v8;
    if ( v26 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v8, 1u);
    }
    else if ( v26 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v8, 1u);
    }
    else if ( v26 == CDrawListPrimitive0::`scalar deleting destructor' )
    {
      CDrawListPrimitive0::`scalar deleting destructor'(v8, 1u);
    }
    else
    {
      v26(v8, 1u);
    }
  }
  return (unsigned int)v25;
}
