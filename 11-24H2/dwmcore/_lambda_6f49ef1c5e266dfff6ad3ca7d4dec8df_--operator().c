/*
 * XREFs of _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::operator() @ 0x18016CFB0
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800B70A0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?EnumerateBrushes@CMultiPrimitiveDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18016BF90 (-EnumerateBrushes@CMultiPrimitiveDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 * Callees:
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x18004C5F0 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ??0?$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCMILCOMWeakRef@@@Z @ 0x18004E4C0 (--0-$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCMILCOMWeakRef@@@Z.c)
 *     ??1?$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004E504 (--1-$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ @ 0x18004E540 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$Delete@VIBitmapResource@@@CMilObjectDeleter@@SAXPEAV?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@@Z @ 0x1800FDB88 (--$Delete@VIBitmapResource@@@CMilObjectDeleter@@SAXPEAV-$CMILRefCountBaseT@VIBitmapResource@@VCM.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x18016D360 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x18016DF50 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?IsOfType@CGeometryOnlyDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x1801DEFB0 (-IsOfType@CGeometryOnlyDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ?IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x1801E3490 (-IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::operator()(CResourceWeakRef *a1, __int64 a2, __int64 a3)
{
  bool (__fastcall *v5)(__int64, int); // rax
  CCommonRenderingEffect *v6; // r15
  __int64 v7; // rax
  char v8; // bp
  bool (__fastcall *v9)(__int64, int); // rax
  __int64 *v10; // r14
  __int64 (__fastcall *v11)(CMILRefCountImpl *); // rax
  volatile signed __int32 *v12; // rdi
  __int64 (__fastcall *v13)(CMILRefCountImpl *); // rax
  int v14; // et0
  __int64 v15; // rdx
  const struct CDrawListBitmap *(__fastcall *v16)(CCommonRenderingEffect *, unsigned int); // rax
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ebp
  __int64 (__fastcall *v20)(CCachedVisualImage *, __int64, __int64); // rax
  __int64 result; // rax
  char v22; // al
  unsigned int v23; // [rsp+20h] [rbp-48h]
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  char v25; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  CResourceWeakRef *v27; // [rsp+70h] [rbp+8h] BYREF

  v27 = a1;
  v5 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 8LL);
  if ( v5 != CSurfaceDrawListBrush::IsOfType
    && ((char *)v5 != (char *)CGeometryOnlyDrawListBrush::IsOfType
      ? ((char *)v5 != (char *)CNineGridDrawListBrush::IsOfType
       ? (v22 = v5(a2, 3))
       : (v22 = CNineGridDrawListBrush::IsOfType(a2, 3LL)))
      : (v22 = CGeometryOnlyDrawListBrush::IsOfType(a2, 3LL)),
        v22)
    || (v6 = *(CCommonRenderingEffect **)(*(_QWORD *)(a3 + 8) + 80LL)) == 0LL
    || *(_DWORD *)(a3 + 184) >= *(_DWORD *)(a3 + 180) )
  {
LABEL_24:
    *(_QWORD *)(a3 + 8LL * *(unsigned int *)(a3 + 184) + 136) = a2;
    result = CBrushDrawListGenerator::GenerateDrawListWorker((struct CBrushDrawListGenerator::GenerateDrawListParameters *)a3);
    *(_QWORD *)(a3 + 8LL * *(unsigned int *)(a3 + 184) + 136) = 0LL;
    return result;
  }
  v7 = *(_QWORD *)a2;
  v8 = 0;
  v25 = 0;
  v24 = 0LL;
  v9 = *(bool (__fastcall **)(__int64, int))(v7 + 8);
  if ( v9 == CSurfaceDrawListBrush::IsOfType || v9(a2, 2) )
  {
    v10 = *(__int64 **)(a2 + 56);
    *(_QWORD *)&v24 = v10;
    if ( v10 )
    {
      v11 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*v10 + 8);
      if ( v11 == CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)v10);
      else
        v11((CMILRefCountImpl *)v10);
    }
    v12 = *(volatile signed __int32 **)(a2 + 64);
    *((_QWORD *)&v24 + 1) = v12;
    if ( v12 )
    {
      v13 = *(__int64 (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v12 + 8LL);
      if ( v13 == CMILRefCountImpl::AddReference )
      {
        v14 = _InterlockedAdd(v12, 1u);
        if ( (v14 < 0) ^ __OFSUB__(v13, CMILRefCountImpl::AddReference) | (v14 == 0) )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v23);
        v12 = (volatile signed __int32 *)*((_QWORD *)&v24 + 1);
        v10 = (__int64 *)v24;
      }
      else if ( (char *)v13 == (char *)CGDISectionBitmapRealization::AddRef )
      {
        CGDISectionBitmapRealization::AddRef(v12, a2, a3);
      }
      else
      {
        v13((CMILRefCountImpl *)v12);
      }
    }
    v8 = *(_BYTE *)(a2 + 72);
    v25 = v8;
  }
  else
  {
    v12 = (volatile signed __int32 *)*((_QWORD *)&v24 + 1);
    v10 = (__int64 *)v24;
  }
  v15 = *(unsigned int *)(a3 + 184);
  v16 = *(const struct CDrawListBitmap *(__fastcall **)(CCommonRenderingEffect *, unsigned int))(*(_QWORD *)v6 + 16LL);
  if ( v16 == CCommonRenderingEffect::GetBitmap )
    v17 = (__int64)v6 + 16 * v15 + 8 * v15 + 16;
  else
    v17 = (__int64)v16(v6, v15);
  if ( v10 )
  {
    if ( v10 == *(__int64 **)v17 && v8 == *(_BYTE *)(v17 + 16) )
      goto LABEL_19;
  }
  else if ( v12 == *(volatile signed __int32 **)(v17 + 8) && v8 == *(_BYTE *)(v17 + 16) )
  {
    goto LABEL_19;
  }
  v18 = CDrawListEntryBuilder::End(*(CDrawListEntryBuilder **)(a3 + 8));
  v19 = v18;
  if ( v18 >= 0 )
  {
LABEL_19:
    if ( v12 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v10 )
    {
      v20 = *(__int64 (__fastcall **)(CCachedVisualImage *, __int64, __int64))(*v10 + 16);
      if ( (char *)v20 == (char *)CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
      {
        if ( !(unsigned int)CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(v10 + 1)) )
        {
          CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v10 + 1));
          (*(void (__fastcall **)(__int64 *))(*v10 + 80))(v10);
          if ( !(unsigned int)CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(v10 + 1)) )
          {
            CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(v10 + 1));
            CMilObjectDeleter::Delete<IBitmapResource>((CEffectIntermediateProducer *)v10);
          }
        }
      }
      else if ( v20 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      {
        wil::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>(
          &v27,
          v10[2],
          a3);
        if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&v27) )
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)v27 + 16));
        CMILRefCountBaseT<IUnknownWeakRefSource,CResourceDeleter>::InternalRelease((CCachedVisualImage *)v10);
        if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&v27) )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v27 + 16));
        wil::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>::~com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>(&v27);
      }
      else
      {
        ((void (__fastcall *)(__int64 *))v20)(v10);
      }
    }
    goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x18Cu, 0LL);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v24);
  return v19;
}
