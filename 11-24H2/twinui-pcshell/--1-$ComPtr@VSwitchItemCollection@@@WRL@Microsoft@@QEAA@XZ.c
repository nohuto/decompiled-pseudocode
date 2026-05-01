/*
 * XREFs of ??1?$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1804B2C58
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SwitchItemCollection_SwitchItemCollection_ISwitchItemFactory___&_IApplicationViewCollection___&_IApplicationViewVisibilityDebouncedNotificationService___&_enum_SwitchItemFilterBehavior_&__::_1_::dtor$1 @ 0x1806EFAB8 (_Microsoft--WRL--Details--MakeAndInitialize_SwitchItemCollection_SwitchItemCollection_ISwitchIte.c)
 *     _SwitchItemCollection_CreateInstance_::_1_::dtor$0 @ 0x1806EFAF6 (_SwitchItemCollection_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SwitchItemCollection>::~ComPtr<SwitchItemCollection>(_QWORD *a1)
{
  return Microsoft::WRL::ComPtr<SwitchItemCollection>::InternalRelease(a1);
}
