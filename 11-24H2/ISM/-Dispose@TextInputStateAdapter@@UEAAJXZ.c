/*
 * XREFs of ?Dispose@TextInputStateAdapter@@UEAAJXZ @ 0x1801CD6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x18010BDDC (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 *     ?Release@?$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ @ 0x1801CEE00 (-Release@-$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ.c)
 */

__int64 __fastcall TextInputStateAdapter::Dispose(TextInputStateAdapter *this)
{
  MessageProxyReconnectAdapter *v2; // rcx
  HMODULE v3; // rcx

  *((_BYTE *)this + 48) = 0;
  RefPtr<IRemoteTextInputState>::Release((char *)this + 32);
  v2 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 5);
  if ( v2 )
    MessageProxyReconnectAdapter::Dispose(v2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  RefPtr<IRemoteTextInputState>::Release((char *)this + 24);
  v3 = (HMODULE)*((_QWORD *)this + 12);
  if ( v3 )
  {
    FreeLibrary(v3);
    *((_QWORD *)this + 12) = 0LL;
  }
  return 0LL;
}
