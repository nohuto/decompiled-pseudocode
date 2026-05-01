/*
 * XREFs of VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopNameChanged @ 0x1804AE430
 * Callers:
 *     <none>
 * Callees:
 *     ??_9type@?$abi@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BEA@AA @ 0x1802C9340 (--_9type@-$abi@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@X@impl@winrt@@$BEA@AA.c)
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::VirtualDesktopNameChanged(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
     winrt::impl::abi<winrt::Windows::Internal::Shell::INetworkConnectionUtils,void>::type::`vcall'{64,{flat}}(v1);
  return 0LL;
}
