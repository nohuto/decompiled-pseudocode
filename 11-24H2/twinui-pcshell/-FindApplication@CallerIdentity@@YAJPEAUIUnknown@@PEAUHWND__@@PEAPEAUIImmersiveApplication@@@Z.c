/*
 * XREFs of ?FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x180679188
 * Callers:
 *     ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1800744F0 (-SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1801CB650 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CallerIdentity::FindApplication(
        __int64 (__fastcall ***this)(CallerIdentity *, GUID *, __int64 *),
        struct IUnknown *a2,
        _QWORD *a3,
        struct IImmersiveApplication **a4)
{
  __int64 (__fastcall **v5)(CallerIdentity *, GUID *, __int64 *); // rax
  __int64 (__fastcall *v8)(CallerIdentity *, GUID *, __int64 *); // rbx
  int v9; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, SID *, GUID *, __int64 *); // rdi
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  v5 = *this;
  v14 = 0LL;
  v8 = *v5;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  v9 = v8((CallerIdentity *)this, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v14);
  if ( v9 >= 0 )
  {
    v10 = v14;
    v13 = 0LL;
    v11 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v14 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    v9 = v11(v10, &SID_ImmersiveApplicationArrayService, &GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a, &v13);
    if ( v9 >= 0 )
      v9 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, _QWORD *))(*(_QWORD *)v13 + 48LL))(v13, a2, a3);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  return (unsigned int)v9;
}
