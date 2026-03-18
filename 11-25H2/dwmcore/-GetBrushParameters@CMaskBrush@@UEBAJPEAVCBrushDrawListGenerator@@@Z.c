/*
 * XREFs of ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180128740
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z @ 0x18007D534 (-IsValidMaskResource@CMaskBrush@@CA_NPEBVCResource@@@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D700 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007DEF0 (-IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800CE690 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800CE780 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800CEB80 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x1800DECF0 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180127530 (-GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180129940 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18019C790 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801EF650 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801FB160 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMaskBrush::GetBrushParameters(CMaskBrush *this, struct CBrushDrawListGenerator *a2)
{
  CDirtyRegionAnnotation *v2; // rbx
  __int64 v3; // rsi
  int v5; // xmm0_4
  CColorBrush *v6; // rcx
  __int64 (__fastcall *v7)(CColorBrush *, struct CBrushDrawListGenerator *); // rax
  int BrushParameters; // eax
  unsigned int v9; // ebx
  __int64 v10; // r14
  __int64 v11; // rax
  CMultiPrimitiveDrawListBrush *v12; // rcx
  CDrawListPrimitive0 *(__fastcall *v13)(CDrawListPrimitive0 *, char); // rax
  int v14; // esi
  int v15; // eax
  __int64 v16; // rcx
  bool (__fastcall *v17)(__int64, int); // rax
  bool v18; // al
  CDirtyRegionAnnotation *v19; // rbx
  struct CBrushDrawListGenerator *v20; // r8
  int v21; // xmm1_4
  CNineGridBrush *v22; // rcx
  __int64 (__fastcall *v23)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CBrushDrawListGenerator *); // rax
  int v24; // eax
  __int64 v25; // rax
  CMultiPrimitiveDrawListBrush *v26; // rcx
  CDrawListPrimitive0 *(__fastcall *v27)(CDrawListPrimitive0 *, char); // rax
  int v28; // eax
  __int64 v31; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v32[4]; // [rsp+48h] [rbp-21h] BYREF
  int v33; // [rsp+68h] [rbp-1h]
  int v34; // [rsp+6Ch] [rbp+3h]
  int v35; // [rsp+70h] [rbp+7h]
  int v36; // [rsp+74h] [rbp+Bh]
  __int128 v37; // [rsp+78h] [rbp+Fh]

  v2 = (CDirtyRegionAnnotation *)v32;
  v3 = 4LL;
  v31 = *(_QWORD *)a2;
  do
  {
    --v3;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v2);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v2);
    v2 = (CDirtyRegionAnnotation *)((char *)v2 + 8);
  }
  while ( v3 );
  v5 = *((_DWORD *)a2 + 11);
  v33 = 0;
  v36 = 0;
  v34 = v5;
  v35 = *((_DWORD *)a2 + 12);
  v6 = (CColorBrush *)*((_QWORD *)this + 15);
  *(_QWORD *)&v37 = 0x3F8000003F800000LL;
  *((_QWORD *)&v37 + 1) = 0x3F8000003F800000LL;
  v7 = *(__int64 (__fastcall **)(CColorBrush *, struct CBrushDrawListGenerator *))(*(_QWORD *)v6 + 336LL);
  if ( v7 == CColorBrush::GetBrushParameters )
  {
    BrushParameters = CColorBrush::GetBrushParameters(v6, (struct CBrushDrawListGenerator *)&v31);
  }
  else if ( (char *)v7 == (char *)CLinearGradientBrush::GetBrushParameters )
  {
    BrushParameters = CLinearGradientBrush::GetBrushParameters(v6, (struct CBrushDrawListGenerator *)&v31);
  }
  else
  {
    BrushParameters = v7(v6, (struct CBrushDrawListGenerator *)&v31);
  }
  v9 = BrushParameters;
  v10 = 4LL;
  if ( BrushParameters < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, BrushParameters, 0x1DAu, 0LL);
LABEL_54:
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v31);
LABEL_46:
    CBrushDrawListGenerator::Reset(a2);
    return v9;
  }
  v11 = v32[0];
  v32[0] = 0LL;
  *(_OWORD *)((char *)a2 + 56) = v37;
  v12 = (CMultiPrimitiveDrawListBrush *)*((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 1) = v11;
  if ( v12 )
  {
    v13 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v12;
    if ( v13 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v12, 1);
    }
    else if ( v13 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v12, 1);
    }
    else if ( v13 == CDrawListPrimitive0::`scalar deleting destructor' )
    {
      CDrawListPrimitive0::`scalar deleting destructor'(v12, 1);
    }
    else
    {
      ((void (__fastcall *)(CMultiPrimitiveDrawListBrush *, __int64, CDrawListPrimitive0 *(__fastcall *)(CDrawListPrimitive0 *, char), CMultiPrimitiveDrawListBrush *(__fastcall *)(CMultiPrimitiveDrawListBrush *, char)))v13)(
        v12,
        1LL,
        CDrawListPrimitive0::`scalar deleting destructor',
        CMultiPrimitiveDrawListBrush::`vector deleting destructor');
    }
  }
  v14 = v36;
  v15 = 1;
  if ( *((_DWORD *)a2 + 10) > 1u )
    v15 = *((_DWORD *)a2 + 10);
  *((_DWORD *)a2 + 10) = v15;
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v31);
  v16 = *((_QWORD *)this + 14);
  if ( !v16 )
    goto LABEL_38;
  v17 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v16 + 64LL);
  if ( v17 == CSurfaceBrush::IsOfType )
  {
    v18 = CSurfaceBrush::IsOfType(v16, 112);
  }
  else if ( v17 == CNineGridBrush::IsOfType )
  {
    v18 = CNineGridBrush::IsOfType(v16, 112);
  }
  else
  {
    v18 = v17(v16, 112);
  }
  if ( v18 && !CMaskBrush::IsValidMaskResource(*(const struct CResource **)(*((_QWORD *)this + 14) + 104LL)) )
  {
    v9 = -2147024846;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
      McTemplateU0t_EventWriteTransfer(
        (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (__int64)&EVTDESC_MASKBRUSH_DRAW_ERROR_INVALID_INPUT,
        2147942450LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024846, 0x1F1u, 0LL);
    goto LABEL_46;
  }
  v19 = (CDirtyRegionAnnotation *)v32;
  v31 = *(_QWORD *)a2;
  do
  {
    --v10;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v19);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v19);
    v19 = (CDirtyRegionAnnotation *)((char *)v19 + 8);
  }
  while ( v10 );
  v33 = 0;
  v36 = 0;
  v21 = *((_DWORD *)a2 + 12);
  v34 = *((_DWORD *)a2 + 11);
  v22 = (CNineGridBrush *)*((_QWORD *)this + 14);
  v35 = v21;
  *(_QWORD *)&v37 = 0x3F8000003F800000LL;
  *((_QWORD *)&v37 + 1) = 0x3F8000003F800000LL;
  v23 = *(__int64 (__fastcall **)(CBitmapRenderStrategy *, const struct CSurfaceBrush *, struct CBrushDrawListGenerator *))(*(_QWORD *)v22 + 336LL);
  if ( (char *)v23 == (char *)CNineGridBrush::GetBrushParameters )
  {
    v24 = CNineGridBrush::GetBrushParameters(v22, (struct CBrushDrawListGenerator *)&v31);
  }
  else if ( (char *)v23 == (char *)CSurfaceBrush::GetBrushParameters )
  {
    v24 = CSurfaceBrush::GetBrushParameters(v22, (struct CBrushDrawListGenerator *)&v31);
  }
  else if ( v23 == CBitmapRenderStrategy::GetBrushParameters )
  {
    v24 = CBitmapRenderStrategy::GetBrushParameters(v22, (const struct CSurfaceBrush *)&v31, v20);
  }
  else
  {
    v24 = ((__int64 (__fastcall *)(CNineGridBrush *, __int64 *))v23)(v22, &v31);
  }
  v9 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x1F9u, 0LL);
    goto LABEL_54;
  }
  v25 = v32[0];
  v26 = (CMultiPrimitiveDrawListBrush *)*((_QWORD *)a2 + 2);
  v32[0] = 0LL;
  *((_QWORD *)a2 + 2) = v25;
  if ( v26 )
  {
    v27 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v26;
    if ( v27 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v26, 1);
    }
    else if ( v27 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v26, 1);
    }
    else if ( v27 == CDrawListPrimitive0::`scalar deleting destructor' )
    {
      CDrawListPrimitive0::`scalar deleting destructor'(v26, 1);
    }
    else
    {
      v27(v26, 1);
    }
  }
  v28 = 2;
  if ( *((_DWORD *)a2 + 10) > 2u )
    v28 = *((_DWORD *)a2 + 10);
  v14 |= v36;
  *((_DWORD *)a2 + 10) = v28;
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v31);
LABEL_38:
  *((_DWORD *)a2 + 13) = v14;
  return 0;
}
