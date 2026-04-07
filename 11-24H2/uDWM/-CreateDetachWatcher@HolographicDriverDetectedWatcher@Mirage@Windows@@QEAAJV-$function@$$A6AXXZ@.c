/*
 * XREFs of ?CreateDetachWatcher@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJV?$function@$$A6AXXZ@wistd@@@Z @ 0x1800968A4
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180085384 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x18002CF20 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ??1?$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ @ 0x180071454 (--1-$function@$$A6AXAEBH@Z@wistd@@QEAA@XZ.c)
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180078F48 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A44DC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Mirage::HolographicDriverDetectedWatcher::CreateDetachWatcher(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  int v5; // eax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = a2;
  if ( Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>((_QWORD *)(a1 + 24)) )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x37,
      (unsigned int)"onecoreuap\\internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
      (const char *)0x8000000ELL,
      v7);
  v5 = wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
         v4,
         *(void **)(v3 + 8),
         a2);
  if ( v5 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x3B,
      (unsigned int)"onecoreuap\\internal\\sdk\\inc\\HolographicDriverDetectedWatcher.h",
      (const char *)(unsigned int)v5,
      v7);
  wistd::function<void (int const &)>::~function<void (int const &)>(a2);
  return 0LL;
}
