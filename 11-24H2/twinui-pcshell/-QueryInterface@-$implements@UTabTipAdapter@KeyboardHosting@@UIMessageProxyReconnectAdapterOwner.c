/*
 * XREFs of ?QueryInterface@?$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180229E10
 * Callers:
 *     ?QueryInterface@?$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@winrt@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180473840 (-QueryInterface@-$implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnec_ea_180473840.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::QueryInterface(
        __int64 a1)
{
  return winrt::impl::root_implements<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,IRemoteTabTipAdapter>::query_interface(a1 + 16);
}
