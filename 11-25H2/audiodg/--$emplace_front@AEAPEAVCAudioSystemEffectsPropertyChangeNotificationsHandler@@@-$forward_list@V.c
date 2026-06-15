/*
 * XREFs of ??$emplace_front@AEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@?$forward_list@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSystemEffectsPropertyChangeNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x1400566D0
 * Callers:
 *     ?GetAudioSystemEffectPropertyChangeNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@U_GUID@@PEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x140017490 (-GetAudioSystemEffectPropertyChangeNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@U.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400193B8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::forward_list<wil::com_ptr_t<CAudioSystemEffectsPropertyChangeNotificationsHandler,wil::err_returncode_policy>>::emplace_front<CAudioSystemEffectsPropertyChangeNotificationsHandler * &>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rcx

  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v5 = *a2;
  v4[1] = *a2;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *v4 = *a1;
  *a1 = v4;
  return v4 + 1;
}
