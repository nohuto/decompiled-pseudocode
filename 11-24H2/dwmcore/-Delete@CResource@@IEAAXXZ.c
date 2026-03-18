/*
 * XREFs of ?Delete@CResource@@IEAAXXZ @ 0x180132B80
 * Callers:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ @ 0x18004E540 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRefSource@@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800799C0 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180132E48 (-AddDelayDeleteResource@CComposition@@QEAAXPEAVCResource@@@Z.c)
 *     ?InvalidateWeakRef@CResourceWeakRef@@UEAAXXZ @ 0x180132FA0 (-InvalidateWeakRef@CResourceWeakRef@@UEAAXXZ.c)
 *     ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x1801330E0 (--_GCKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x180133150 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 *     ??_GCEffectGroup@@UEAAPEAXI@Z @ 0x1801332A0 (--_GCEffectGroup@@UEAAPEAXI@Z.c)
 *     ??_ECVisualTree@@UEAAPEAXI@Z @ 0x1801336D0 (--_ECVisualTree@@UEAAPEAXI@Z.c)
 *     ??_GCSurfaceBrush@@MEAAPEAXI@Z @ 0x180133720 (--_GCSurfaceBrush@@MEAAPEAXI@Z.c)
 *     ??_ECRectangleGeometry@@UEAAPEAXI@Z @ 0x180133770 (--_ECRectangleGeometry@@UEAAPEAXI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CResource::Delete(CResource *this, __int64 a2, __int64 a3)
{
  CResourceWeakRef *v3; // rbx
  void (__fastcall *v5)(__int64); // rax
  __int64 v6; // rcx
  void (__fastcall *v7)(CResourceWeakRef *__hidden); // rax
  CGlobalComposition *v8; // rsi
  CComposition *v9; // rcx
  __int64 (__fastcall *v10)(CResourceWeakRef *); // rax
  LPVOID Value; // rsi
  const char *v12; // r9
  void *(__fastcall *v13)(CKeyframeAnimation *__hidden, unsigned int); // rax
  const char *v14; // r9
  CVisualTree *v15; // rcx
  __int64 v16; // rax
  void *(__fastcall *v17)(CRectangleGeometry *__hidden, unsigned int); // rax
  __int64 v18; // rax
  CThreadContext *v19; // rax
  CThreadContext *v20; // rax
  unsigned int v21; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (CResourceWeakRef *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    v5 = *(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL);
    v6 = *((_QWORD *)this + 2);
    if ( (char *)v5 == (char *)CGDISectionBitmapRealization::AddRef )
      CGDISectionBitmapRealization::AddRef(v6, a2, a3);
    else
      v5(v6);
    v7 = *(void (__fastcall **)(CResourceWeakRef *__hidden))(*(_QWORD *)v3 + 56LL);
    if ( v7 == CResourceWeakRef::InvalidateWeakRef )
      CResourceWeakRef::InvalidateWeakRef(v3);
    else
      v7(v3);
  }
  v8 = g_pComposition;
  if ( *((_BYTE *)g_pComposition + 6474) || GetCurrentThreadId() == *((_DWORD *)v8 + 1428) )
  {
    Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
    if ( !Value )
    {
      v19 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
      if ( !v19 || (v20 = CThreadContext::CThreadContext(v19), (Value = v20) == 0LL) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x44,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
          (const char *)0x8007000ELL,
          v21);
      }
      TlsSetValue(CThreadContext::s_dwTlsIndex, v20);
    }
    if ( *(_QWORD *)Value )
    {
      if ( *(CResource **)Value == this )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x2E,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resource.cpp",
          v12);
      v18 = *((_QWORD *)Value + 2);
      if ( v18 )
        *(_QWORD *)(v18 + 64) = this;
      else
        *((_QWORD *)Value + 1) = this;
      *((_QWORD *)Value + 2) = this;
    }
    else
    {
      *(_QWORD *)Value = this;
      v13 = *(void *(__fastcall **)(CKeyframeAnimation *__hidden, unsigned int))(*(_QWORD *)this + 32LL);
      if ( v13 == CKeyframeAnimation::`scalar deleting destructor' )
      {
        CKeyframeAnimation::`scalar deleting destructor'(this, 1u);
      }
      else if ( v13 == CSpriteVisual::`scalar deleting destructor' )
      {
        CSpriteVisual::`scalar deleting destructor'(this, 1u);
      }
      else if ( v13 == CEffectGroup::`scalar deleting destructor' )
      {
        CEffectGroup::`scalar deleting destructor'(this, 1u);
      }
      else
      {
        v13(this, 1u);
      }
      while ( 1 )
      {
        v15 = (CVisualTree *)*((_QWORD *)Value + 1);
        if ( !v15 )
          break;
        v16 = *((_QWORD *)v15 + 8);
        *((_QWORD *)Value + 1) = v16;
        if ( !v16 )
          *((_QWORD *)Value + 2) = 0LL;
        if ( *((_DWORD *)v15 + 2) != -1 )
        {
          *((_QWORD *)Value + 3) = v15;
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x5A,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resource.cpp",
            v14);
        }
        v17 = *(void *(__fastcall **)(CRectangleGeometry *__hidden, unsigned int))(*(_QWORD *)v15 + 32LL);
        if ( v17 == CVisualTree::`vector deleting destructor' )
        {
          CVisualTree::`vector deleting destructor'(v15, 1u);
        }
        else if ( v17 == CSurfaceBrush::`scalar deleting destructor' )
        {
          CSurfaceBrush::`scalar deleting destructor'(v15, 1u);
        }
        else if ( v17 == CRectangleGeometry::`vector deleting destructor' )
        {
          CRectangleGeometry::`vector deleting destructor'(v15, 1u);
        }
        else
        {
          v17(v15, 1u);
        }
      }
      *(_QWORD *)Value = 0LL;
    }
  }
  else
  {
    CComposition::AddDelayDeleteResource(v9, this);
  }
  if ( v3 )
  {
    v10 = *(__int64 (__fastcall **)(CResourceWeakRef *))(*(_QWORD *)v3 + 16LL);
    if ( v10 == CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::InternalRelease(v3);
    else
      v10(v3);
  }
}
