/*
 * XREFs of ?ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1800C047C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z @ 0x1800C1028 (-UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x1800C1AEC (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8D0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E910 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1801AC95C (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetCoordinateSpace(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE *a3)
{
  __int64 v3; // r9
  struct CVisual *v5; // rdx
  unsigned int v6; // edi
  __int64 v8; // rax
  char v9; // al
  _QWORD *v10; // rcx
  struct CVisual *v11; // rbx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, __int64); // rax

  v3 = *((unsigned int *)a3 + 2);
  v5 = 0LL;
  v6 = 0;
  if ( !(_DWORD)v3
    || (unsigned int)v3 < *((_DWORD *)a2 + 7)
    && (v8 = *((_QWORD *)a2 + 5), *(_DWORD *)((unsigned int)(*((_DWORD *)a2 + 6) * v3) + v8))
    && (v13 = v8 + (unsigned int)(*((_DWORD *)a2 + 6) * v3), (v14 = *(_QWORD *)(v13 + 8)) != 0)
    && ((v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 64LL), v15 == CKeyframeAnimation::IsOfType)
      ? (v9 = CKeyframeAnimation::IsOfType(v14, 182LL))
      : v15 != CVisual::IsOfType
      ? (v15 != CSharedSection::IsOfType
       ? (v9 = v15(v14, 182LL))
       : (v9 = CSharedSection::IsOfType(v14, 182LL)))
      : (v9 = CVisual::IsOfType(v14, 182LL)),
        v9 && (v5 = *(struct CVisual **)(v13 + 8)) != 0LL) )
  {
    v10 = (_QWORD *)((char *)this + 304);
    v11 = (struct CVisual *)*((_QWORD *)this + 38);
    if ( v5 != v11 )
    {
      *v10 = 0LL;
      wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(v10, v5, a3, v3);
      CCompositionLight::UpdateRegistrationWithCompositor(this, v11);
      CCompositionLight::IssueLightChangedNotification(this);
      if ( v11 )
        (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x12Cu, 0LL);
  }
  return v6;
}
