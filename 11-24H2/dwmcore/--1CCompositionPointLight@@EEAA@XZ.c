/*
 * XREFs of ??1CCompositionPointLight@@EEAA@XZ @ 0x180297FE0
 * Callers:
 *     ??_ECCompositionPointLight@@EEAAPEAXI@Z @ 0x180298040 (--_ECCompositionPointLight@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z @ 0x18018BDE8 (-UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z.c)
 */

void __fastcall CCompositionPointLight::~CCompositionPointLight(CCompositionPointLight *this)
{
  bool v1; // zf
  struct CVisual **v2; // rdi

  v1 = *((_BYTE *)this + 253) == 0;
  *(_QWORD *)this = &CCompositionPointLight::`vftable'{for `CPropertyChangeResource'};
  v2 = (struct CVisual **)((char *)this + 256);
  *((_QWORD *)this + 10) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  if ( !v1 )
    CPreWalkVisual::UnregisterLightCoordspace(*v2, this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v2);
  CCompositionLight::~CCompositionLight(this);
}
