/*
 * XREFs of ??1TextInputStateAdapter@@EEAA@XZ @ 0x1801CD60C
 * Callers:
 *     ??_GTextInputStateAdapter@@EEAAPEAXI@Z @ 0x1801CD6A0 (--_GTextInputStateAdapter@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Release@?$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ @ 0x1801CEE00 (-Release@-$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TextInputStateAdapter::~TextInputStateAdapter(TextInputStateAdapter *this)
{
  HMODULE v2; // rcx

  *(_QWORD *)this = &TextInputStateAdapter::`vftable'{for `IMessageProxyReconnectAdapterOwner'};
  *((_QWORD *)this + 1) = &TextInputStateAdapter::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITextInputStateAdapter>'};
  *((_BYTE *)this + 56) = 0;
  RefPtr<IRemoteTextInputState>::Release((char *)this + 40);
  RefPtr<IRemoteTextInputState>::Release((char *)this + 32);
  v2 = (HMODULE)*((_QWORD *)this + 13);
  if ( v2 )
  {
    FreeLibrary(v2);
    *((_QWORD *)this + 13) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  RefPtr<IRemoteTextInputState>::Release((char *)this + 40);
  RefPtr<IRemoteTextInputState>::Release((char *)this + 32);
  *((_DWORD *)this + 5) = -1073741823;
}
