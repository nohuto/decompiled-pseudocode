/*
 * XREFs of ??1CCompositionSpotLight@@EEAA@XZ @ 0x1800C0640
 * Callers:
 *     ??_GCCompositionSpotLight@@EEAAPEAXI@Z @ 0x1800C05C0 (--_GCCompositionSpotLight@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z @ 0x1800C0F30 (-UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CCompositionSpotLight::~CCompositionSpotLight(CCompositionSpotLight *this)
{
  bool v1; // zf
  struct CVisual **v2; // rdi

  v1 = *((_BYTE *)this + 253) == 0;
  *(_QWORD *)this = &CCompositionSpotLight::`vftable'{for `CPropertyChangeResource'};
  v2 = (struct CVisual **)((char *)this + 304);
  *((_QWORD *)this + 10) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  if ( !v1 )
    CPreWalkVisual::UnregisterLightCoordspace(*v2, this);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v2);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 256);
  CCompositionLight::~CCompositionLight(this);
}
