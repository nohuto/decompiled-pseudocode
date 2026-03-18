/*
 * XREFs of ?ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18018ADB8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800368D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800373C0 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x18003BB0C (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z @ 0x18018BEE0 (-UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x18018E67C (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetCoordinateSpace(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE *a3)
{
  unsigned int v3; // r9d
  struct CVisual *v5; // rdx
  unsigned int v6; // edi
  __int64 v8; // rax
  bool v9; // al
  _QWORD *v10; // rcx
  struct CVisual *v11; // rbx
  __int64 v13; // rbx
  __int64 v14; // rcx
  bool (__fastcall *v15)(__int64, int); // rax

  v3 = *((_DWORD *)a3 + 2);
  v5 = 0LL;
  v6 = 0;
  if ( !v3
    || v3 < *((_DWORD *)a2 + 7)
    && (v8 = *((_QWORD *)a2 + 5), *(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v8))
    && (v13 = v8 + *((_DWORD *)a2 + 6) * v3, (v14 = *(_QWORD *)(v13 + 8)) != 0)
    && ((v15 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v14 + 64LL), v15 == CKeyframeAnimation::IsOfType)
      ? (v9 = CKeyframeAnimation::IsOfType(v14, 184))
      : v15 != CVisual::IsOfType
      ? (v15 != CSharedSection::IsOfType
       ? (v9 = v15(v14, 184))
       : (v9 = CSharedSection::IsOfType(v14, 184)))
      : (v9 = CVisual::IsOfType(v14, 184)),
        v9 && (v5 = *(struct CVisual **)(v13 + 8)) != 0LL) )
  {
    v10 = (_QWORD *)((char *)this + 304);
    v11 = (struct CVisual *)*((_QWORD *)this + 38);
    if ( v5 != v11 )
    {
      *v10 = 0LL;
      wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(v10, v5);
      CCompositionLight::UpdateRegistrationWithCompositor(this, v11);
      CCompositionLight::IssueLightChangedNotification(this);
      if ( v11 )
        (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x12Cu, 0LL);
  }
  return v6;
}
