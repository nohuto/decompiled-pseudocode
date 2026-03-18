/*
 * XREFs of ??1CSceneSurfaceMaterialInput@@MEAA@XZ @ 0x1802AF8E0
 * Callers:
 *     ??_ECSceneSurfaceMaterialInput@@MEAAPEAXI@Z @ 0x1802AF950 (--_ECSceneSurfaceMaterialInput@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x180269850 (-UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

void __fastcall CSceneSurfaceMaterialInput::~CSceneSurfaceMaterialInput(CSceneSurfaceMaterialInput *this)
{
  struct CResource *v1; // rdx
  unsigned __int64 v2; // rbx

  v1 = (struct CResource *)*((_QWORD *)this + 11);
  *(_QWORD *)this = &CSceneSurfaceMaterialInput::`vftable'{for `CSceneMaterialInput'};
  v2 = (unsigned __int64)this + 72;
  *((_QWORD *)this + 9) = &CSceneSurfaceMaterialInput::`vftable'{for `ISceneNotificationListener'};
  CResource::UnRegisterNotifierInternal(this, v1);
  CSceneResourceManager::UnregisterSceneListener(
    *(const __m128i ***)(*((_QWORD *)this + 3) + 680LL),
    (struct ISceneNotificationListener *)(v2 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 10);
  CResource::~CResource(this);
}
