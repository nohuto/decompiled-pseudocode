/*
 * XREFs of _lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::operator() @ 0x180049670
 * Callers:
 *     ?EnumerateBrushes@CMultiPrimitiveDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180048650 (-EnumerateBrushes@CMultiPrimitiveDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180199760 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
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

__int64 __fastcall lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::operator()(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 (__fastcall *v5)(__int64 *, __int64); // rax
  CCommonRenderingEffect *v6; // r15
  __int64 v7; // rax
  char v8; // bp
  unsigned __int8 (__fastcall *v9)(__int64 *, __int64); // rax
  _QWORD *v10; // r14
  unsigned int (__fastcall *v11)(CMILRefCountImpl *__hidden); // rax
  volatile signed __int32 *v12; // rdi
  unsigned int (__fastcall *v13)(CMILRefCountImpl *__hidden); // rax
  int v14; // et0
  __int64 v15; // rdx
  const struct CDrawListBitmap *(__fastcall *v16)(CCommonRenderingEffect *__hidden, unsigned int); // rax
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ebp
  __int64 (__fastcall *v20)(CResource *); // rax
  __int64 result; // rax
  char v22; // al
  unsigned int v23; // [rsp+20h] [rbp-48h]
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  char v25; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v27; // [rsp+70h] [rbp+8h] BYREF

  v27 = a1;
  v5 = *(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 8);
  if ( (char *)v5 != (char *)&CSurfaceDrawListBrush::IsOfType
    && ((char *)v5 != (char *)CGeometryOnlyDrawListBrush::IsOfType
      ? ((char *)v5 != (char *)CNineGridDrawListBrush::IsOfType
       ? (v22 = v5(a2, 3LL))
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
  v7 = *a2;
  v8 = 0;
  v25 = 0;
  v24 = 0LL;
  v9 = *(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v7 + 8);
  if ( (char *)v9 == (char *)&CSurfaceDrawListBrush::IsOfType || v9(a2, 2LL) )
  {
    v10 = (_QWORD *)a2[7];
    *(_QWORD *)&v24 = v10;
    if ( v10 )
    {
      v11 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*v10 + 8LL);
      if ( v11 == CMILRefCountImpl::AddReference )
        CMILRefCountImpl::AddReference((CMILRefCountImpl *)v10);
      else
        v11((CMILRefCountImpl *)v10);
    }
    v12 = (volatile signed __int32 *)a2[8];
    *((_QWORD *)&v24 + 1) = v12;
    if ( v12 )
    {
      v13 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v12 + 8LL);
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
        v10 = (_QWORD *)v24;
      }
      else if ( (char *)v13 == (char *)CGDISectionBitmapRealization::AddRef )
      {
        CGDISectionBitmapRealization::AddRef(v12);
      }
      else
      {
        v13((CMILRefCountImpl *)v12);
      }
    }
    v8 = *((_BYTE *)a2 + 72);
    v25 = v8;
  }
  else
  {
    v12 = (volatile signed __int32 *)*((_QWORD *)&v24 + 1);
    v10 = (_QWORD *)v24;
  }
  v15 = *(unsigned int *)(a3 + 184);
  v16 = *(const struct CDrawListBitmap *(__fastcall **)(CCommonRenderingEffect *__hidden, unsigned int))(*(_QWORD *)v6 + 16LL);
  if ( v16 == CCommonRenderingEffect::GetBitmap )
    v17 = (__int64)v6 + 16 * v15 + 8 * v15 + 16;
  else
    v17 = (__int64)v16(v6, v15);
  if ( v10 )
  {
    if ( v10 == *(_QWORD **)v17 && v8 == *(_BYTE *)(v17 + 16) )
      goto LABEL_19;
  }
  else if ( v12 == *(volatile signed __int32 **)(v17 + 8) && v8 == *(_BYTE *)(v17 + 16) )
  {
    goto LABEL_19;
  }
  v18 = CDrawListEntryBuilder::End(*(CDrawListEntryBuilder **)(a3 + 8), v15);
  v19 = v18;
  if ( v18 >= 0 )
  {
LABEL_19:
    if ( v12 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v10 )
    {
      v20 = *(__int64 (__fastcall **)(CResource *))(*v10 + 16LL);
      if ( v20 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
      {
        if ( !CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(v10 + 1)) )
        {
          CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v10 + 1));
          (*(void (__fastcall **)(_QWORD *))(*v10 + 80LL))(v10);
          if ( !CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(v10 + 1)) )
          {
            CMILRefCountImpl::RemoveReference((CMILRefCountImpl *)(v10 + 1));
            CMilObjectDeleter::Delete<IBitmapResource>(v10);
          }
        }
      }
      else if ( v20 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      {
        wil::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>(
          &v27,
          v10[2]);
        if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&v27) )
          EnterCriticalSection((LPCRITICAL_SECTION)(v27 + 16));
        CMILRefCountBaseT<IUnknownWeakRefSource,CResourceDeleter>::InternalRelease((CResource *)v10);
        if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&v27) )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v27 + 16));
        wil::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>::~com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>(&v27);
      }
      else
      {
        v20((CResource *)v10);
      }
    }
    goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x18Cu, 0LL);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v24);
  return v19;
}
