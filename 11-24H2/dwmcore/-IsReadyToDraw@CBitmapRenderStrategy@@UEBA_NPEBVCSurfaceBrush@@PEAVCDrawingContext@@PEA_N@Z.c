/*
 * XREFs of ?IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x18004DFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x18004C5F0 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18004CFCC (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ??8@YA_NAEBU_GUID@@0@Z @ 0x18004E300 (--8@YA_NAEBU_GUID@@0@Z.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@VIUnknownWeakRefSource@@V1@VCResourceDeleter@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004E320 (-InternalQueryInterface@-$CMILCOMBaseT@VIUnknownWeakRefSource@@V1@VCResourceDeleter@@@@IEAAJAEBU.c)
 *     ??0?$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCMILCOMWeakRef@@@Z @ 0x18004E4C0 (--0-$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCMILCOMWeakRef@@@Z.c)
 *     ??1?$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004E504 (--1-$com_ptr_t@VCMILCOMWeakRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ @ 0x18004E540 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$Delete@VIBitmapResource@@@CMilObjectDeleter@@SAXPEAV?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@@Z @ 0x1800FDB88 (--$Delete@VIBitmapResource@@@CMilObjectDeleter@@SAXPEAV-$CMILRefCountBaseT@VIBitmapResource@@VCM.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CBitmapRenderStrategy::IsReadyToDraw(
        CBitmapRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CDrawingContext *a3,
        bool *a4)
{
  __int64 (__fastcall ***v4)(CMaskBrush *, const struct _GUID *, void **); // rbx
  __int64 (__fastcall *v5)(CMaskBrush *, const struct _GUID *, void **); // rax
  CCachedVisualImage *v6; // rdi
  __int64 (__fastcall *v7)(CCompositionSurfaceBitmap *, struct IBitmapRealization **); // rax
  int v8; // ebx
  CGlobalCompositionSurfaceInfo *v9; // rdi
  struct IBitmapRealization *(__fastcall *v10)(CGlobalCompositionSurfaceInfo *); // rax
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rax
  unsigned int (__fastcall *v13)(CMILRefCountImpl *__hidden); // rdx
  int v14; // et0
  bool v15; // bl
  CCachedVisualImage *v16; // rdi
  __int64 (__fastcall *v17)(CEffectIntermediateProducer *); // rax
  unsigned int v19; // [rsp+20h] [rbp-28h]
  volatile signed __int32 *v20; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  CCachedVisualImage *v22; // [rsp+58h] [rbp+10h] BYREF
  __int64 v23; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0;
  v4 = (__int64 (__fastcall ***)(CMaskBrush *, const struct _GUID *, void **))*((_QWORD *)a2 + 16);
  v22 = 0LL;
  v5 = **v4;
  if ( v5 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalQueryInterface )
  {
    if ( (unsigned __int8)operator==(
                            &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
                            &GUID_73f2a332_aba0_4b29_88bc_6ee79b3941bc) )
    {
      v22 = (CCachedVisualImage *)v4;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v4 + 1));
    }
    else
    {
      CMILCOMBaseT<IUnknownWeakRefSource,IUnknownWeakRefSource,CResourceDeleter>::InternalQueryInterface((CMaskBrush *)v4);
    }
  }
  else
  {
    v5((CMaskBrush *)v4, &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c, (void **)&v22);
  }
  v6 = v22;
  v20 = 0LL;
  v7 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, struct IBitmapRealization **))(*(_QWORD *)v22 + 64LL);
  if ( v7 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
  {
    v8 = 0;
    if ( (unsigned __int8)wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((char *)v22 + 24, 0LL) )
    {
      v9 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)v6 + 3);
      v10 = *(struct IBitmapRealization *(__fastcall **)(CGlobalCompositionSurfaceInfo *))(*(_QWORD *)v9 + 48LL);
      if ( v10 == CGlobalCompositionSurfaceInfo::GetRenderingRealization )
      {
        if ( !*((_QWORD *)v9 + 26) )
          CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(v9);
        v11 = *((_QWORD *)v9 + 26);
        v12 = (volatile signed __int32 *)(v11 + 8);
        if ( !v11 )
          v12 = 0LL;
      }
      else
      {
        v12 = (volatile signed __int32 *)v10(v9);
      }
      v20 = v12;
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
              v19);
        }
        else
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        }
      }
      else
      {
        v8 = -2003304309;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304309, 0xC0u, 0LL);
      }
    }
    else
    {
      v8 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0xC5u, 0LL);
    }
  }
  else
  {
    v8 = v7(v22, (struct IBitmapRealization **)&v20);
  }
  v15 = v8 >= 0;
  if ( v20 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
  v16 = v22;
  if ( !v22 )
    return v15;
  v17 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v22 + 16LL);
  if ( v17 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
  {
    if ( !(unsigned int)CMILRefCountImpl::RemoveReference((CCachedVisualImage *)((char *)v22 + 8)) )
    {
      CMILRefCountImpl::AddReference((CCachedVisualImage *)((char *)v16 + 8));
      (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v16 + 80LL))(v16);
      if ( !(unsigned int)CMILRefCountImpl::RemoveReference((CCachedVisualImage *)((char *)v16 + 8)) )
      {
        CMILRefCountImpl::RemoveReference((CCachedVisualImage *)((char *)v16 + 8));
        CMilObjectDeleter::Delete<IBitmapResource>(v16);
        return v15;
      }
    }
    return v15;
  }
  if ( v17 != CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
  {
    v17(v22);
    return v15;
  }
  wil::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>(
    &v23,
    *((_QWORD *)v22 + 2));
  if ( (unsigned __int8)wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&v23, 0LL) )
    EnterCriticalSection((LPCRITICAL_SECTION)(v23 + 16));
  CMILRefCountBaseT<IUnknownWeakRefSource,CResourceDeleter>::InternalRelease(v16);
  if ( (unsigned __int8)wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(&v23, 0LL) )
    LeaveCriticalSection((LPCRITICAL_SECTION)(v23 + 16));
  wil::com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>::~com_ptr_t<CMILCOMWeakRef,wil::err_returncode_policy>(&v23);
  return v15;
}
