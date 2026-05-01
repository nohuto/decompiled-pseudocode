/*
 * XREFs of ??1OutRef@RoVariant@@QEAA@XZ @ 0x1801A42E8
 * Callers:
 *     _CSingleViewShellExperience::OnViewPropertiesChangedBase_::_1_::dtor$7 @ 0x1806D67E4 (_CSingleViewShellExperience--OnViewPropertiesChangedBase_--_1_--dtor$7.c)
 *     _CQuickConnectExperienceManager::OnViewPropertiesChanging_::_1_::dtor$9 @ 0x1806E52D2 (_CQuickConnectExperienceManager--OnViewPropertiesChanging_--_1_--dtor$9.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$8 @ 0x1806E52E4 (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$8.c)
 *     _CJumpViewExperienceManager::EnsureWindowPosition_::_1_::dtor$5 @ 0x1806E597C (_CJumpViewExperienceManager--EnsureWindowPosition_--_1_--dtor$5.c)
 *     _CQuickConnectExperienceManager::UpdateWindowPosition_::_1_::dtor$3 @ 0x1806E5AAE (_CQuickConnectExperienceManager--UpdateWindowPosition_--_1_--dtor$3.c)
 *     _PeoplePaneViewManager::GetRectFromPropertySet_::_1_::dtor$8 @ 0x1806E81FF (_PeoplePaneViewManager--GetRectFromPropertySet_--_1_--dtor$8.c)
 *     _PeoplePaneViewManager::IsWindowVisibleInContactPanel_::_1_::dtor$6 @ 0x1806E8223 (_PeoplePaneViewManager--IsWindowVisibleInContactPanel_--_1_--dtor$6.c)
 * Callees:
 *     ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x1801A4A48 (--0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall RoVariant::OutRef::~OutRef(struct IInspectable **this, __int64 a2, bool a3, bool a4)
{
  struct IInspectable *v4; // rbx
  struct IInspectableVtbl *lpVtbl; // rcx
  int v6; // edx
  struct IInspectableVtbl *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  v4 = *this;
  RoVariant::RoVariant((RoVariant *)&v7, this[1], a3, a4);
  lpVtbl = v4->lpVtbl;
  v4->lpVtbl = v7;
  v6 = (int)v4[1].lpVtbl;
  LODWORD(v4[1].lpVtbl) = v8;
  if ( lpVtbl )
  {
    if ( ((v6 - 3) & 0xFFFFFFFB) == 0 )
      (*((void (__fastcall **)(struct IInspectableVtbl *))lpVtbl->QueryInterface + 2))(lpVtbl);
  }
}
