/*
 * XREFs of Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_2c2119f3dd10f8dbad56a05ca320bbc2_____lambda_2c2119f3dd10f8dbad56a05ca320bbc2__&_void___&_ @ 0x1805723C8
 * Callers:
 *     ObservableProperty_Microsoft::WRL::ComPtr_IWICBitmap___::AddListener__lambda_2c2119f3dd10f8dbad56a05ca320bbc2___ @ 0x180572104 (ObservableProperty_Microsoft--WRL--ComPtr_IWICBitmap___--AddListener__lambda_2c2119f3dd10f8dbad5.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180566F70 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIObservablePropertyCallback@@@WRL@Mic.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_2c2119f3dd10f8dbad56a05ca320bbc2_____lambda_2c2119f3dd10f8dbad56a05ca320bbc2____void_____(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  _QWORD *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = *a3;
    v8 = *a2;
    v10 = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservablePropertyCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservablePropertyCallback>((__int64)v6);
    *v6 = off_1807E5A18;
    v6[2] = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6 + 2);
    v6[3] = v7;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v6;
  }
  return a1;
}
