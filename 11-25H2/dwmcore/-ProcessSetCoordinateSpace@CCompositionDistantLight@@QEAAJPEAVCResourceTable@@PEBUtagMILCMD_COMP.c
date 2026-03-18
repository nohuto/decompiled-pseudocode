/*
 * XREFs of ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1800C020C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B80C0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z @ 0x1800C1028 (-UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x1800C1AEC (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1801AC95C (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionDistantLight::ProcessSetCoordinateSpace(
        CCompositionDistantLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE *a3)
{
  struct CResourceTable *v3; // r9
  unsigned int v4; // edi
  unsigned int v5; // edx
  __int64 Resource; // rax
  _QWORD *v8; // rcx
  struct CVisual *v9; // rbx

  v3 = a2;
  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = CResourceTable::GetResource((__int64)v3, v5, 0xB6u)) != 0 )
  {
    v8 = (_QWORD *)((char *)this + 256);
    v9 = (struct CVisual *)*((_QWORD *)this + 32);
    if ( (struct CVisual *)Resource != v9 )
    {
      *v8 = 0LL;
      wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(v8, Resource, a3, v3);
      CCompositionLight::UpdateRegistrationWithCompositor(this, v9);
      CCompositionLight::IssueLightChangedNotification(this);
      if ( v9 )
        (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xC4u, 0LL);
  }
  return v4;
}
