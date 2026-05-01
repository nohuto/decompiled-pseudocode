/*
 * XREFs of ??1_lambda_843bb4f9d601a8a476333f903392fa1f_@@QEAA@XZ @ 0x1805E3280
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x1805DF1B0 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_ResumeCo.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::dtor$2 @ 0x1806FC6BC (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_1806FC6BC.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ @ 0x1805E3944 (--1PinManagerRequestPinItem@PinManagerTelemetry@@QEAA@XZ.c)
 */

void __fastcall _lambda_843bb4f9d601a8a476333f903392fa1f_::~_lambda_843bb4f9d601a8a476333f903392fa1f_(void **this)
{
  std::_Ref_count_base *v2; // rcx

  PinManagerTelemetry::PinManagerRequestPinItem::~PinManagerRequestPinItem((PinManagerTelemetry::PinManagerRequestPinItem *)(this + 6));
  std::wstring::_Tidy_deallocate(this + 2);
  v2 = (std::_Ref_count_base *)this[1];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
