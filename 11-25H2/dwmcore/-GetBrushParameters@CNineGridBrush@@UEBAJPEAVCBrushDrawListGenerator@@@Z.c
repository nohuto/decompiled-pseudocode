/*
 * XREFs of ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180129940
 * Callers:
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180128740 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D700 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?reset@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDrawListBrush@@@Z @ 0x1800CE56C (-reset@-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDr.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800CE690 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800CE780 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800CEB80 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x1800DECF0 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18011A3A0 (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x1801258EC (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x180126B64 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z @ 0x180126ED4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCNineGridDrawListBrush@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180126F18 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18017A6E0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801EF650 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801FB160 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x18025B674 (-IsIdentity@CComponentTransform2D@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  bool (__fastcall *v18)(__int64, int); // rax
  CComponentTransform2D *v20; // rcx
  CSurfaceBrush *v21; // rcx
  __int64 (__fastcall *v22)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CBrushDrawListGenerator *); // rax
  int BrushParameters; // eax
  __int64 v24; // rdx
  struct CNineGridDrawListBrush *v25; // rcx
  int v26; // edi
  CDrawListPrimitive0 *(__fastcall *v27)(CDrawListPrimitive0 *, char); // rax
  char *v29; // rsi
  float v30; // xmm6_4
  float v31; // xmm7_4
  float v32; // xmm8_4
  float v33; // xmm9_4
  int v34; // r12d
  char v35; // di
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v37; // rsi
  int v38; // edx
  CMultiPrimitiveDrawListBrush *v39; // rax
  int v40; // eax
  float *v41; // rcx
  float v42; // xmm9_4
  float v43; // xmm7_4
  float v44; // xmm13_4
  float v45; // xmm12_4
  float v46; // xmm4_4
  float v47; // xmm10_4
  float v48; // xmm11_4
  float v49; // xmm6_4
  float v50; // xmm8_4
  float v51; // xmm0_4
  float v52; // xmm2_4
  CMultiPrimitiveDrawListBrush *v53; // rcx
  CDrawListPrimitive0 *(__fastcall *v54)(CDrawListPrimitive0 *, char); // rax
  int v55; // eax
  _QWORD *v56; // rcx
  int v57; // xmm1_4
  int v58; // xmm0_4
  _QWORD *v59; // rax
  CMultiPrimitiveDrawListBrush *v60; // rdx
  int v61; // esi
  __int64 v62; // rcx
  unsigned int v63; // xmm1_4
  unsigned int v64; // xmm0_4
  __int128 v65; // xmm1
  unsigned int v66; // [rsp+28h] [rbp-E0h]
  _QWORD *lpMem; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID lpMem_8[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+50h] [rbp-B8h]
  CMultiPrimitiveDrawListBrush *v70; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v71; // [rsp+68h] [rbp-A0h] BYREF
  CMultiPrimitiveDrawListBrush *v72; // [rsp+70h] [rbp-98h] BYREF
  int v73; // [rsp+90h] [rbp-78h]
  int v74; // [rsp+94h] [rbp-74h]
  int v75; // [rsp+98h] [rbp-70h]
  int v76; // [rsp+9Ch] [rbp-6Ch]
  __int128 v77; // [rsp+A0h] [rbp-68h]

  v2 = (CDirtyRegionAnnotation *)&v72;
  v3 = *((float *)this + 31);
  v4 = *((float *)this + 33);
  v6 = *((float *)this + 35);
  v8 = 0LL;
  v9 = *((float *)this + 29) * *((float *)this + 28);
  v10 = 4LL;
  v11 = 0;
  v71 = *(_QWORD *)a2;
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
  v74 = *((_DWORD *)a2 + 11);
  v75 = v16;
  v73 = 0;
  v76 = 0;
  *(_QWORD *)&v77 = 0x3F8000003F800000LL;
  *((_QWORD *)&v77 + 1) = 0x3F8000003F800000LL;
  if ( !*((_BYTE *)this + 169) )
  {
    v17 = *((_QWORD *)this + 13);
    v18 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v17 + 64LL);
    if ( v18 == CSurfaceBrush::IsOfType ? CSurfaceBrush::IsOfType(v17, 167) : v18(v17, 167) )
    {
      v20 = *(CComponentTransform2D **)(*((_QWORD *)this + 13) + 144LL);
      if ( v20 )
      {
        if ( !CComponentTransform2D::IsIdentity(v20) )
        {
          v26 = -2147022876;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
            McTemplateU0t_EventWriteTransfer(
              (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
              (__int64)&EVTDESC_NINEGRIDBRUSH_DRAW_ERROR_INVALID_INPUT,
              2147944420LL);
          v66 = 629;
          goto LABEL_14;
        }
      }
    }
  }
  v21 = (CSurfaceBrush *)*((_QWORD *)this + 13);
  v22 = *(__int64 (__fastcall **)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CBrushDrawListGenerator *))(*(_QWORD *)v21 + 336LL);
  if ( (char *)v22 == (char *)CSurfaceBrush::GetBrushParameters )
  {
    BrushParameters = CSurfaceBrush::GetBrushParameters(v21, (struct CBrushDrawListGenerator *)&v71);
  }
  else if ( v22 == CBitmapRenderStrategy::GetBrushParameters )
  {
    BrushParameters = CBitmapRenderStrategy::GetBrushParameters(v21, (const struct CSurfaceBrush *)&v71, v15);
  }
  else
  {
    BrushParameters = ((__int64 (__fastcall *)(CSurfaceBrush *, __int64 *))v22)(v21, &v71);
  }
  v26 = BrushParameters;
  if ( BrushParameters < 0 )
  {
    v66 = 634;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180337778, 2u, v26, v66, 0LL);
LABEL_15:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_16;
  }
  v8 = v72;
  v29 = (char *)this + 168;
  v72 = 0LL;
  v70 = v8;
  if ( v8 )
  {
    if ( *((_BYTE *)v8 + 52) )
    {
      v30 = *((float *)this + 28);
      v11 = 1;
      v31 = *((float *)this + 30);
      v32 = *((float *)this + 32);
      v33 = *((float *)this + 34);
      goto LABEL_30;
    }
    if ( *v29 )
    {
      v63 = *((_DWORD *)a2 + 11);
      v11 = 1;
      v64 = *((_DWORD *)a2 + 12);
      v30 = v9;
      lpMem_8[0] = 0LL;
      v31 = v12;
      v32 = v13;
      *((_BYTE *)v8 + 52) = 1;
      v33 = v14;
      lpMem_8[1] = (LPVOID)__PAIR64__(v64, v63);
      v65 = *(_OWORD *)lpMem_8;
      *((_DWORD *)v8 + 12) = 50529027;
      *((_OWORD *)v8 + 2) = v65;
      goto LABEL_30;
    }
LABEL_50:
    v33 = *(float *)&lpMem;
    v32 = *(float *)&lpMem;
    v31 = *(float *)&lpMem;
    v30 = *(float *)&lpMem;
    goto LABEL_30;
  }
  *(_OWORD *)((char *)a2 + 56) = v77;
  if ( !*v29 )
    goto LABEL_50;
  lpMem = 0LL;
  v11 = 1;
  lpMem_8[0] = &lpMem;
  LOBYTE(v69) = 1;
  v30 = v9;
  lpMem_8[1] = 0LL;
  v31 = v12;
  v32 = v13;
  v33 = v14;
  v26 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&lpMem_8[1], v24);
  if ( (_BYTE)v69 )
  {
    v56 = *(_QWORD **)lpMem_8[0];
    *(_QWORD *)lpMem_8[0] = lpMem_8[1];
    if ( v56 )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v56);
  }
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180337778, 2u, v26, 0x28Bu, 0LL);
    if ( lpMem )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
    goto LABEL_15;
  }
  v57 = *((_DWORD *)a2 + 11);
  v58 = *((_DWORD *)a2 + 12);
  v59 = lpMem;
  lpMem_8[0] = 0LL;
  LODWORD(lpMem_8[1]) = v57;
  *((_BYTE *)lpMem + 52) = 1;
  *((_DWORD *)v59 + 12) = 50529027;
  HIDWORD(lpMem_8[1]) = v58;
  *((_OWORD *)v59 + 2) = *(_OWORD *)lpMem_8;
  v60 = (CMultiPrimitiveDrawListBrush *)lpMem;
  lpMem = 0LL;
  std::unique_ptr<CDrawListBrush>::reset(&v70, v60);
  v25 = (struct CNineGridDrawListBrush *)lpMem;
  if ( lpMem )
  {
    CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
    v34 = v76;
    v8 = v70;
    goto LABEL_31;
  }
  v8 = v70;
LABEL_30:
  v34 = v76;
  if ( !v11 )
    goto LABEL_37;
LABEL_31:
  v35 = *v29;
  ObjectCache = CThreadContext::GetObjectCache(v25);
  v37 = 0LL;
  v38 = *((_DWORD *)ObjectCache + 1);
  if ( v38 )
  {
    v37 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v37;
    *((_DWORD *)ObjectCache + 1) = v38 - 1;
  }
  if ( !v37 )
  {
    v37 = MIDL_user_allocate(0x240uLL);
    if ( !v37 )
    {
      v26 = -2147024882;
      v61 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x27u, 0LL);
LABEL_59:
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180337778, 2u, v61, 0x2BBu, 0LL);
      goto LABEL_15;
    }
  }
  v37[1] = 1065353216LL;
  *((_DWORD *)v37 + 4) = 0;
  *(_QWORD *)((char *)v37 + 20) = 1065353216LL;
  *((_DWORD *)v37 + 7) = 0;
  *v37 = &CNineGridDrawListBrush::`vftable';
  v39 = v8;
  *((_BYTE *)v37 + 52) = 0;
  v8 = 0LL;
  *((_BYTE *)v37 + 64) = 0;
  v37[9] = v39;
  v37[14] = v37 + 17;
  v37[15] = v37 + 17;
  v37[16] = v37 + 37;
  v37[37] = v37 + 40;
  v37[38] = v37 + 40;
  v37[39] = v37 + 60;
  *((float *)v37 + 20) = v30;
  *((float *)v37 + 21) = v31;
  *((float *)v37 + 22) = v32;
  *((float *)v37 + 23) = v33;
  v37[60] = v37 + 63;
  v37[61] = v37 + 63;
  v37[62] = v37 + 69;
  *((float *)v37 + 24) = v9;
  *((float *)v37 + 25) = v12;
  *((float *)v37 + 26) = v13;
  *((float *)v37 + 27) = v14;
  *((_BYTE *)v37 + 568) = v35;
  *((_BYTE *)v37 + 569) = 0;
  v40 = CNineGridDrawListBrush::Initialize((CNineGridDrawListBrush *)v37);
  v26 = v40;
  if ( v40 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v40, 0x29u, 0LL);
    std::default_delete<CNineGridDrawListBrush>::operator()(v62, (CNineGridDrawListBrush *)v37);
    v61 = v26;
    goto LABEL_59;
  }
  v8 = (CMultiPrimitiveDrawListBrush *)v37;
LABEL_37:
  if ( !D2D1::Matrix3x2F::IsIdentity((CNineGridBrush *)((char *)this + 144)) )
  {
    v42 = v41[2];
    v43 = *v41;
    v44 = v41[3];
    v45 = v41[1];
    v46 = *((float *)v8 + 4);
    v47 = *((float *)v8 + 7);
    v48 = *((float *)v8 + 6);
    v49 = v41[4];
    v50 = v41[5];
    v51 = *((float *)v8 + 5);
    v52 = (float)(*((float *)v8 + 2) * v45) + (float)(*((float *)v8 + 3) * v44);
    *((float *)v8 + 2) = (float)(*((float *)v8 + 2) * *v41) + (float)(*((float *)v8 + 3) * v42);
    *((float *)v8 + 3) = v52;
    *((float *)v8 + 4) = (float)(v46 * v43) + (float)(v51 * v42);
    *((float *)v8 + 5) = (float)(v46 * v45) + (float)(v51 * v44);
    *((float *)v8 + 6) = (float)((float)(v48 * v43) + (float)(v47 * v42)) + v49;
    *((float *)v8 + 7) = (float)((float)(v48 * v45) + (float)(v47 * v44)) + v50;
  }
  v53 = (CMultiPrimitiveDrawListBrush *)*((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = v8;
  v8 = 0LL;
  if ( v53 )
  {
    v54 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v53;
    if ( v54 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v53, 1);
    }
    else if ( v54 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v53, 1);
    }
    else if ( v54 == CDrawListPrimitive0::`scalar deleting destructor' )
    {
      CDrawListPrimitive0::`scalar deleting destructor'(v53, 1);
    }
    else
    {
      v54(v53, 1);
    }
  }
  v55 = 1;
  *((_DWORD *)a2 + 13) = v34;
  if ( *((_DWORD *)a2 + 10) > 1u )
    v55 = *((_DWORD *)a2 + 10);
  v26 = 0;
  *((_DWORD *)a2 + 10) = v55;
LABEL_16:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v71);
  if ( v8 )
  {
    v27 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v8;
    if ( v27 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v8, 1);
    }
    else if ( v27 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v8, 1);
    }
    else if ( v27 == CDrawListPrimitive0::`scalar deleting destructor' )
    {
      CDrawListPrimitive0::`scalar deleting destructor'(v8, 1);
    }
    else
    {
      v27(v8, 1);
    }
  }
  return (unsigned int)v26;
}
