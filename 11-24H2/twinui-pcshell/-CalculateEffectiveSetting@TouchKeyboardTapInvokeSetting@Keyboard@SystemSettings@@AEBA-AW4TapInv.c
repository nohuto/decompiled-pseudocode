/*
 * XREFs of ?CalculateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEBA?AW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@XZ @ 0x180112DBC
 * Callers:
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x180112AD0 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 *     ?UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ @ 0x180477D68 (-UpdateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEAAXXZ.c)
 * Callees:
 *     ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802DDF1C (-load@-$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA-AW4PreloadPreference@.c)
 */

__int64 __fastcall SystemSettings::Keyboard::TouchKeyboardTapInvokeSetting::CalculateEffectiveSetting(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  _DWORD *v3; // rdx
  int v4; // ecx
  unsigned int v5; // r8d

  result = std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load(a1 + 72);
  if ( (_DWORD)result == -1 )
  {
    result = std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load(v2 + 68);
    if ( (_DWORD)result == -1 )
    {
      result = (unsigned int)v3[20];
      if ( (_DWORD)result == -1 )
      {
        v4 = v3[19];
        result = 1LL;
        if ( v4 != 1 )
        {
          v5 = v3[21];
          if ( v5 == -1 )
          {
            if ( v3[22] != -1 )
            {
              if ( v3[22] != 1 )
                return (unsigned int)v3[22];
              result = 2LL;
              if ( v4 != 2 )
                return (unsigned int)v3[22];
            }
          }
          else
          {
            if ( v5 != 1 )
              return v5;
            result = 2LL;
            if ( v4 != 2 )
              return v5;
          }
        }
      }
    }
  }
  return result;
}
