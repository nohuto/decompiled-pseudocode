/*
 * XREFs of _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_ @ 0x1800492C0
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180199760 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x18019BE10 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?EnumerateBrushes@CEmptyRegionDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180201C10 (-EnumerateBrushes@CEmptyRegionDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@P.c)
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18001E0A0 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x180047EA0 (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x180049A20 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800CF050 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCMILCOMWeakRef@@@Z @ 0x1800D0F10 (--0-$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCMILCOMWeakRef@@@Z.c)
 *     ??1?$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800D0F54 (--1-$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ @ 0x1800D0F90 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x180125440 (-IsOfType@CNineGridDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ?IsOfType@CGeometryOnlyDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x1801E9080 (-IsOfType@CGeometryOnlyDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     ??$Delete@VIBitmapResource@@@CMilObjectDeleter@@SAXPEAV?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@@Z @ 0x18020658C (--$Delete@VIBitmapResource@@@CMilObjectDeleter@@SAXPEAV-$CMILRefCountBaseT@VIBitmapResource@@VCM.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802DFE50 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_(
        volatile signed __int32 **a1,
        unsigned int *a2)
{
  __int64 (__fastcall *v4)(const struct CDrawListBrush *, __int64); // rax
  CCommonRenderingEffect *v5; // r15
  volatile signed __int32 *v6; // rax
  char v7; // bp
  unsigned __int8 (__fastcall *v8)(const struct CDrawListBrush *, __int64); // rax
  volatile signed __int32 *v9; // r14
  unsigned int (__fastcall *v10)(CMILRefCountImpl *__hidden); // rax
  volatile signed __int32 *v11; // rdi
  unsigned int (__fastcall *v12)(CMILRefCountImpl *__hidden); // rax
  int v13; // et0
  __int64 v14; // rdx
  const struct CDrawListBitmap *(__fastcall *v15)(CCommonRenderingEffect *__hidden, unsigned int); // rax
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebp
  __int64 (__fastcall *v19)(CResource *); // rax
  __int64 result; // rax
  char v21; // al
  unsigned int v22; // [rsp+20h] [rbp-48h]
  __int128 v23; // [rsp+30h] [rbp-38h] BYREF
  char v24; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v26; // [rsp+70h] [rbp+8h] BYREF

  v4 = (__int64 (__fastcall *)(const struct CDrawListBrush *, __int64))*((_QWORD *)*a1 + 1);
  if ( (char *)v4 != (char *)&CSurfaceDrawListBrush::IsOfType
    && ((char *)v4 != (char *)CGeometryOnlyDrawListBrush::IsOfType
      ? ((char *)v4 != (char *)CNineGridDrawListBrush::IsOfType
       ? (v21 = v4((const struct CDrawListBrush *)a1, 3LL))
       : (v21 = CNineGridDrawListBrush::IsOfType(a1, 3LL)))
      : (v21 = CGeometryOnlyDrawListBrush::IsOfType(a1, 3LL)),
        v21)
    || (v5 = *(CCommonRenderingEffect **)(*((_QWORD *)a2 + 1) + 80LL)) == 0LL
    || a2[46] >= a2[45] )
  {
LABEL_24:
    *(_QWORD *)&a2[2 * a2[46] + 34] = a1;
    result = CBrushDrawListGenerator::GenerateDrawListWorker((struct CBrushDrawListGenerator::GenerateDrawListParameters *)a2);
    *(_QWORD *)&a2[2 * a2[46] + 34] = 0LL;
    return result;
  }
  v6 = *a1;
  v7 = 0;
  v24 = 0;
  v23 = 0LL;
  v8 = (unsigned __int8 (__fastcall *)(const struct CDrawListBrush *, __int64))*((_QWORD *)v6 + 1);
  if ( (char *)v8 == (char *)&CSurfaceDrawListBrush::IsOfType || v8((const struct CDrawListBrush *)a1, 2LL) )
  {
    v9 = a1[7];
    *(_QWORD *)&v23 = v9;
    if ( v9 )
    {
      v10 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v9 + 8LL);
      if ( v10 == CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)v9);
      else
        v10((CMILRefCountImpl *)v9);
    }
    v11 = a1[8];
    *((_QWORD *)&v23 + 1) = v11;
    if ( v11 )
    {
      v12 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v11 + 8LL);
      if ( v12 == CMILRefCountImpl::AddReference )
      {
        v13 = _InterlockedAdd(v11, 1u);
        if ( (v13 < 0) ^ __OFSUB__(v12, CMILRefCountImpl::AddReference) | (v13 == 0) )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v22);
        v11 = (volatile signed __int32 *)*((_QWORD *)&v23 + 1);
        v9 = (volatile signed __int32 *)v23;
      }
      else if ( (char *)v12 == (char *)CGDISectionBitmapRealization::AddRef )
      {
        CGDISectionBitmapRealization::AddRef(v11);
      }
      else
      {
        v12((CMILRefCountImpl *)v11);
      }
    }
    v7 = *((_BYTE *)a1 + 72);
    v24 = v7;
  }
  else
  {
    v11 = (volatile signed __int32 *)*((_QWORD *)&v23 + 1);
    v9 = (volatile signed __int32 *)v23;
  }
  v14 = a2[46];
  v15 = *(const struct CDrawListBitmap *(__fastcall **)(CCommonRenderingEffect *__hidden, unsigned int))(*(_QWORD *)v5 + 16LL);
  if ( v15 == CCommonRenderingEffect::GetBitmap )
    v16 = (__int64)v5 + 16 * v14 + 8 * v14 + 16;
  else
    v16 = (__int64)v15(v5, v14);
  if ( v9 )
  {
    if ( v9 == *(volatile signed __int32 **)v16 && v7 == *(_BYTE *)(v16 + 16) )
      goto LABEL_19;
  }
  else if ( v11 == *(volatile signed __int32 **)(v16 + 8) && v7 == *(_BYTE *)(v16 + 16) )
  {
    goto LABEL_19;
  }
  v17 = CDrawListEntryBuilder::End(*((CDrawListEntryBuilder **)a2 + 1), v14);
  v18 = v17;
  if ( v17 >= 0 )
  {
LABEL_19:
    if ( v11 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v9 )
    {
      v19 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v9 + 16LL);
      if ( v19 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
      {
        if ( !CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(v9 + 2)) )
        {
          CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v9 + 2));
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 80LL))(v9);
          if ( !CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(v9 + 2)) )
          {
            CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(v9 + 2));
            CMilObjectDeleter::Delete<IBitmapResource>(v9);
          }
        }
      }
      else if ( v19 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      {
        wil::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>(
          &v26,
          *((_QWORD *)v9 + 2));
        if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&v26) )
          EnterCriticalSection((LPCRITICAL_SECTION)(v26 + 16));
        CMILRefCountBaseT<IUnknownWeakRefSource,CResourceDeleter>::InternalRelease((CResource *)v9);
        if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&v26) )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v26 + 16));
        wil::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>::~com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>(&v26);
      }
      else
      {
        v19((CResource *)v9);
      }
    }
    goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x18Cu, 0LL);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v23);
  return v18;
}
