/*
 * XREFs of ?Delete@CResource@@IEAAXXZ @ 0x180069460
 * Callers:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ @ 0x1800D0F90 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ.c)
 * Callees:
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x180068CF0 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x180068F50 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ?AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180069728 (-AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?InvalidateWeakRef@CResourceWeakRef@@UEAAXXZ @ 0x180069880 (-InvalidateWeakRef@CResourceWeakRef@@UEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AB7E0 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x180133020 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 *     ??_GCSurfaceBrush@@MEAAPEAXI@Z @ 0x180133070 (--_GCSurfaceBrush@@MEAAPEAXI@Z.c)
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x1801330C0 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ??_GCEffectGroup@@UEAAPEAXI@Z @ 0x18020CE60 (--_GCEffectGroup@@UEAAPEAXI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802DFE50 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CResource::Delete(CResource *this)
{
  CResourceWeakRef *v1; // rbx
  void (__fastcall *v3)(__int64); // rax
  __int64 v4; // rcx
  void (__fastcall *v5)(CResourceWeakRef *__hidden); // rax
  CGlobalComposition *v6; // rsi
  CComposition *v7; // rcx
  __int64 (__fastcall *v8)(CResourceWeakRef *); // rax
  LPVOID Value; // rsi
  const char *v10; // r9
  CSpriteVisual *(__fastcall *v11)(CSpriteVisual *, char); // rax
  const char *v12; // r9
  CVisualTree *v13; // rcx
  __int64 v14; // rax
  void *(__fastcall *v15)(CRectangleGeometry *__hidden, unsigned int); // rax
  __int64 v16; // rax
  CThreadContext *v17; // rax
  CThreadContext *v18; // rax
  unsigned int v19; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = (CResourceWeakRef *)*((_QWORD *)this + 2);
  if ( v1 )
  {
    v3 = *(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL);
    v4 = *((_QWORD *)this + 2);
    if ( (char *)v3 == (char *)CGDISectionBitmapRealization::AddRef )
      CGDISectionBitmapRealization::AddRef(v4);
    else
      v3(v4);
    v5 = *(void (__fastcall **)(CResourceWeakRef *__hidden))(*(_QWORD *)v1 + 56LL);
    if ( v5 == CResourceWeakRef::InvalidateWeakRef )
      CResourceWeakRef::InvalidateWeakRef(v1);
    else
      v5(v1);
  }
  v6 = g_pComposition;
  if ( *((_BYTE *)g_pComposition + 6497) || GetCurrentThreadId() == *((_DWORD *)v6 + 1428) )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v17 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v17 || (v18 = CThreadContext::CThreadContext(v17), (Value = v18) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x44,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
          (const char *)0x8007000ELL,
          v19);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v18);
    }
    if ( *(_QWORD *)Value )
    {
      if ( *(CResource **)Value == this )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2E,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resource.cpp",
          v10);
      v16 = *((_QWORD *)Value + 2);
      if ( v16 )
        *(_QWORD *)(v16 + 64) = this;
      else
        *((_QWORD *)Value + 1) = this;
      *((_QWORD *)Value + 2) = this;
    }
    else
    {
      *(_QWORD *)Value = this;
      v11 = *(CSpriteVisual *(__fastcall **)(CSpriteVisual *, char))(*(_QWORD *)this + 32LL);
      if ( v11 == CKeyframeAnimation::`scalar deleting destructor' )
      {
        CKeyframeAnimation::`scalar deleting destructor'(this, 1);
      }
      else if ( v11 == CSpriteVisual::`scalar deleting destructor' )
      {
        CSpriteVisual::`scalar deleting destructor'(this, 1);
      }
      else if ( (char *)v11 == (char *)CEffectGroup::`scalar deleting destructor' )
      {
        CEffectGroup::`scalar deleting destructor'(this, 1u);
      }
      else
      {
        v11(this, 1);
      }
      while ( 1 )
      {
        v13 = (CVisualTree *)*((_QWORD *)Value + 1);
        if ( !v13 )
          break;
        v14 = *((_QWORD *)v13 + 8);
        *((_QWORD *)Value + 1) = v14;
        if ( !v14 )
          *((_QWORD *)Value + 2) = 0LL;
        if ( *((_DWORD *)v13 + 2) != -1 )
        {
          *((_QWORD *)Value + 3) = v13;
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x5A,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resource.cpp",
            v12);
        }
        v15 = *(void *(__fastcall **)(CRectangleGeometry *__hidden, unsigned int))(*(_QWORD *)v13 + 32LL);
        if ( v15 == CVisualTree::`vector deleting destructor' )
        {
          CVisualTree::`vector deleting destructor'(v13, 1u);
        }
        else if ( v15 == CSurfaceBrush::`scalar deleting destructor' )
        {
          CSurfaceBrush::`scalar deleting destructor'(v13, 1u);
        }
        else if ( v15 == CRectangleGeometry::`vector deleting destructor' )
        {
          CRectangleGeometry::`vector deleting destructor'(v13, 1u);
        }
        else
        {
          v15(v13, 1u);
        }
      }
      *(_QWORD *)Value = 0LL;
    }
  }
  else
  {
    CComposition::AddDelayDeleteResource(v7, this);
  }
  if ( v1 )
  {
    v8 = *(__int64 (__fastcall **)(CResourceWeakRef *))(*(_QWORD *)v1 + 16LL);
    if ( v8 == CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::InternalRelease(v1);
    else
      v8(v1);
  }
}
