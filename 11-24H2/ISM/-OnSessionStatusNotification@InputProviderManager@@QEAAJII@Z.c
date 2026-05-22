/*
 * XREFs of ?OnSessionStatusNotification@InputProviderManager@@QEAAJII@Z @ 0x1800611C8
 * Callers:
 *     ?OnSessionStatusNotification@OneCoreUAPInputHost@@UEAAJII@Z @ 0x1800A3400 (-OnSessionStatusNotification@OneCoreUAPInputHost@@UEAAJII@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputProviderManager::OnSessionStatusNotification(
        InputProviderManager *this,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)this;
  v6 = *((_QWORD *)this + 1);
  while ( v5 != v6 )
  {
    v11 = 0LL;
    v7 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v5 + 16);
    v8 = **v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    if ( v8(v7, &GUID_a78e6167_d56f_4297_8f03_6a5ea7fe3025, &v11) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, a2, a3);
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v5 += 24LL;
  }
  return 0LL;
}
