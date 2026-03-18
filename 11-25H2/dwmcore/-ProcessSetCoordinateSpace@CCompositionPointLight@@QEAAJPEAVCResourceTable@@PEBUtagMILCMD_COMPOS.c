/*
 * XREFs of ?ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1802A247C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B80C0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z @ 0x1800C1028 (-UpdateRegistrationWithCompositor@CCompositionLight@@IEAAXPEAVCVisual@@@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x1800C1AEC (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z @ 0x1801AC95C (--4-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCompositionPointLight::ProcessSetCoordinateSpace(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  struct CMILPoolResource *Resource; // rax
  struct CMILPoolResource **v8; // rcx
  struct CVisual *v9; // rbx
  struct CVisual *v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CMILPoolResource *)CResourceTable::GetResource((__int64)a2, v5, 0xB6u)) != 0LL )
  {
    v8 = (struct CMILPoolResource **)((char *)this + 256);
    v9 = (struct CVisual *)*((_QWORD *)this + 32);
    if ( Resource != v9 )
    {
      *v8 = 0LL;
      v11 = v9;
      wil::com_ptr_t<CVisual,wil::err_returncode_policy>::operator=(v8, Resource);
      CCompositionLight::UpdateRegistrationWithCompositor(this, v9);
      CCompositionLight::IssueLightChangedNotification(this);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x10Cu, 0LL);
  }
  return v4;
}
