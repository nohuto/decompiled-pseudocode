/*
 * XREFs of ?OnDisconnected@HotkeyRegistrationForwarder@@UEAAJPEAUIMessageProxy@@@Z @ 0x180053DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotkeyRegistrationForwarder::OnDisconnected(
        HotkeyRegistrationForwarder *this,
        struct IMessageProxy *a2)
{
  __int64 *v3; // rdi
  void (__fastcall ***v4)(_QWORD, GUID *, struct IMessageProxy **); // rsi
  void (__fastcall *v5)(_QWORD, GUID *, struct IMessageProxy **); // rbx
  struct IMessageProxy *v6; // rcx
  struct IMessageProxy *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 48);
  v4 = (void (__fastcall ***)(_QWORD, GUID *, struct IMessageProxy **))*((_QWORD *)this + 6);
  if ( v4 )
  {
    v8 = 0LL;
    v5 = **v4;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    v5(v4, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v8);
    v6 = v8;
    if ( v8 == a2 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v3);
      v6 = v8;
    }
    if ( v6 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(struct IMessageProxy *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return 0LL;
}
