/*
 * XREFs of ?get_IsManagedByOrganization@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEA_N@Z @ 0x180479690
 * Callers:
 *     <none>
 * Callees:
 *     ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802DDF1C (-load@-$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA-AW4PreloadPreference@.c)
 */

__int64 __fastcall winrt::impl::produce<SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting,winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::get_IsManagedByOrganization(
        __int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  bool *v4; // rdx

  v2 = a1 + 56;
  if ( !a1 )
    v2 = 72LL;
  v3 = std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((unsigned int *)v2);
  *v4 = v3 != -1;
  return 0LL;
}
