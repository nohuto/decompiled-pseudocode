/*
 * XREFs of _GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806E38E5
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall GamingOverlayExperienceManager::SendGamepadCommand__ResumeCoro_1_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 144) = *(_QWORD *)(a2 + 56) + 208LL;
  std::wstring::_Tidy_deallocate(*(void ***)(a2 + 144));
}
