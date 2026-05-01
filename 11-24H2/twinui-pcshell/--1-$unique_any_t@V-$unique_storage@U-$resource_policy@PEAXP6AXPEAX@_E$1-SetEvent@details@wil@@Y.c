/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?SetEvent@details@wil@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180200B6C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806F4888 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconF_ea_1806F4888.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806F49A8 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsyn_ea_1806F49A8.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1_::_1_::dtor$2 @ 0x1806F4D50 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePrev_ea_1806F4D50.c)
 * Callees:
 *     <none>
 */

void __fastcall __1__unique_any_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_SetEvent_details_wil__YAX0_ZU__integral_constant__K_00_wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__QEAA_XZ(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::SetEvent(v2, a2);
}
