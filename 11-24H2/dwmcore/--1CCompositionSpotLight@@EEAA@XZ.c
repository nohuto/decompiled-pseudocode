/*
 * XREFs of ??1CCompositionSpotLight@@EEAA@XZ @ 0x18018C624
 * Callers:
 *     ??_GCCompositionSpotLight@@EEAAPEAXI@Z @ 0x18018B400 (--_GCCompositionSpotLight@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z @ 0x18018BDE8 (-UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCCompositionLight@@@Z.c)
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
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 256);
  CCompositionLight::~CCompositionLight(this);
}
