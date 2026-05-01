/*
 * XREFs of ?IsPreloadEnabled@InputAppPreloader@KeyboardHosting@@AEAA_NXZ @ 0x18022EA70
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?IsPreloadEnabledByIme@InputAppPreloader@KeyboardHosting@@AEAA_NXZ @ 0x1801C3334 (-IsPreloadEnabledByIme@InputAppPreloader@KeyboardHosting@@AEAA_NXZ.c)
 *     ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802DDF1C (-load@-$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA-AW4PreloadPreference@.c)
 *     GetPreferenceFromRegistry @ 0x18048359C (GetPreferenceFromRegistry.c)
 */

char __fastcall KeyboardHosting::InputAppPreloader::IsPreloadEnabled(KeyboardHosting::InputAppPreloader *this)
{
  volatile __int32 *v1; // rsi
  char v3; // bl

  v1 = (volatile __int32 *)((char *)this + 24);
  if ( (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((char *)this + 24) == 2
    || (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((char *)this + 28) == 2
    || (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((char *)this + 32) == 2 )
  {
    return 1;
  }
  v3 = 0;
  if ( !(unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load(v1) )
    _InterlockedExchange(v1, GetPreferenceFromRegistry(-2147483647LL));
  if ( (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load(v1) == 2 )
    return 1;
  if ( !(unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((char *)this + 28) )
    _InterlockedExchange((volatile __int32 *)this + 7, GetPreferenceFromRegistry(-2147483646LL));
  if ( (unsigned int)std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load((char *)this + 28) == 2
    || KeyboardHosting::InputAppPreloader::IsPreloadEnabledByIme(this) )
  {
    return 1;
  }
  return v3;
}
