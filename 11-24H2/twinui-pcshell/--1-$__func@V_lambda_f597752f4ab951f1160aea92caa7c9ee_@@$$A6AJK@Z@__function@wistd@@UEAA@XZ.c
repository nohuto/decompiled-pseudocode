/*
 * XREFs of ??1?$__func@V_lambda_f597752f4ab951f1160aea92caa7c9ee_@@$$A6AJK@Z@__function@wistd@@UEAA@XZ @ 0x1802E06CC
 * Callers:
 *     ??_E?$__func@V_lambda_e9d38f29c40ce80b2d241da620dfbf30_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1802E0AA0 (--_E-$__func@V_lambda_e9d38f29c40ce80b2d241da620dfbf30_@@$$A6AJK@Z@__function@wistd@@UEAAPEAXI@Z.c)
 *     ??_G?$__func@V_lambda_c45c73327a5ad8f0fa2ab1970be778d0_@@$$A6AJI_K_J@Z@__function@wistd@@UEAAPEAXI@Z @ 0x18037A2C0 (--_G-$__func@V_lambda_c45c73327a5ad8f0fa2ab1970be778d0_@@$$A6AJI_K_J@Z@__function@wistd@@UEAAPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void **__fastcall wistd::__function::__func<_lambda_f597752f4ab951f1160aea92caa7c9ee_,long (unsigned long)>::~__func<_lambda_f597752f4ab951f1160aea92caa7c9ee_,long (unsigned long)>(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 1);
  result = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  return result;
}
