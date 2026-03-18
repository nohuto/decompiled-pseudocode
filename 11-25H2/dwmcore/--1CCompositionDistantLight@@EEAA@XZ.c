/*
 * XREFs of ??1CCompositionDistantLight@@EEAA@XZ @ 0x1802A096C
 * Callers:
 *     ??_ECCompositionDistantLight@@EEAAPEAXI@Z @ 0x1802A09D0 (--_ECCompositionDistantLight@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z @ 0x1800C0F30 (-UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z.c)
 */

void __fastcall CCompositionDistantLight::~CCompositionDistantLight(CCompositionDistantLight *this)
{
  bool v1; // zf
  struct CVisual **v2; // rdi

  v1 = *((_BYTE *)this + 253) == 0;
  *(_QWORD *)this = &CCompositionDistantLight::`vftable'{for `CPropertyChangeResource'};
  v2 = (struct CVisual **)((char *)this + 256);
  *((_QWORD *)this + 10) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  if ( !v1 )
    CPreWalkVisual::UnregisterLightCoordspace(*v2, this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v2);
  CCompositionLight::~CCompositionLight(this);
}
