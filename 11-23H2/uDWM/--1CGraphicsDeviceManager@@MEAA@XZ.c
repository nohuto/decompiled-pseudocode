/*
 * XREFs of ??1CGraphicsDeviceManager@@MEAA@XZ @ 0x1800C14C8
 * Callers:
 *     ??_GCGraphicsDeviceManager@@MEAAPEAXI@Z @ 0x1800C1550 (--_GCGraphicsDeviceManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007478 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B064 (--1-$com_ptr_t@UICompositionEffectFactory@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800219A8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800258F8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x1800C15B8 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 */

void __fastcall CGraphicsDeviceManager::~CGraphicsDeviceManager(CGraphicsDeviceManager *this)
{
  void *v2; // rdx
  wil::details *v3; // rcx

  *(_QWORD *)this = &CGraphicsDeviceManager::`vftable';
  CGraphicsDeviceManager::ReleaseGraphicsDevice(this);
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    (wil::details **)this + 7,
    0LL);
  v3 = (wil::details *)*((_QWORD *)this + 7);
  if ( v3 )
    wil::details::CloseHandle(v3, v2);
  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)this + 6);
  wil::com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionEffectFactory,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>((__int64 *)this + 2);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
