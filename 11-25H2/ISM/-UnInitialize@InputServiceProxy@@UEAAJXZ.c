/*
 * XREFs of ?UnInitialize@InputServiceProxy@@UEAAJXZ @ 0x18015E110
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x180109ECC (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 */

__int64 __fastcall InputServiceProxy::UnInitialize(InputServiceProxy *this)
{
  MessageProxyReconnectAdapter *v2; // rcx
  void *v3; // rcx

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  v2 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 5);
  if ( v2 )
    MessageProxyReconnectAdapter::Dispose(v2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  v3 = (void *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    operator delete(v3, (const struct std::nothrow_t *)0x30);
    *((_QWORD *)this + 7) = 0LL;
  }
  return 0LL;
}
