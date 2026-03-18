/*
 * XREFs of ??1CCompositionLight@@MEAA@XZ @ 0x1801EE42C
 * Callers:
 *     ??1CCompositionSpotLight@@EEAA@XZ @ 0x18018C624 (--1CCompositionSpotLight@@EEAA@XZ.c)
 *     ??_ECCompositionAmbientLight@@UEAAPEAXI@Z @ 0x1801EE3E0 (--_ECCompositionAmbientLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionLight@@MEAAPEAXI@Z @ 0x18028F540 (--_GCCompositionLight@@MEAAPEAXI@Z.c)
 *     ??1CCompositionDistantLight@@EEAA@XZ @ 0x18029501C (--1CCompositionDistantLight@@EEAA@XZ.c)
 *     ??1CCompositionPointLight@@EEAA@XZ @ 0x180297FE0 (--1CCompositionPointLight@@EEAA@XZ.c)
 *     ??_GCCompositionEnvironmentLight@@UEAAPEAXI@Z @ 0x1802AD7C0 (--_GCCompositionEnvironmentLight@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x1801EE4B4 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18025F910 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

void __fastcall CCompositionLight::~CCompositionLight(CCompositionLight *this)
{
  bool v1; // zf

  v1 = *((_BYTE *)this + 252) == 0;
  *(_QWORD *)this = &CCompositionLight::`vftable'{for `CPropertyChangeResource'};
  *((_QWORD *)this + 10) = &CCompositionSpotLight::`vftable'{for `ISceneNotificationListener'};
  if ( !v1 )
    CSceneResourceManager::UnregisterSceneListener(
      *(CSceneResourceManager **)(*((_QWORD *)this + 3) + 680LL),
      (CCompositionLight *)((char *)this + 80));
  CCompositionLight::RemoveAllTargets(this, 0LL);
  CCompositionLight::RemoveAllTargets(this, 1LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 22);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 128);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 88);
  CResource::~CResource(this);
}
