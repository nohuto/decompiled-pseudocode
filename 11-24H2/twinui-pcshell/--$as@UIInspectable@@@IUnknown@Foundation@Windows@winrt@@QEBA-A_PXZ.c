/*
 * XREFs of ??$as@UIInspectable@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x18022C760
 * Callers:
 *     _lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::operator() @ 0x1803B6348 (_lambda_89f63c8738b1ad17b99f8ae3b3dcb473_--operator().c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1806A51D0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     _lambda_e3e19fb8e3910b5b1b332ab74641bcf6_::operator() @ 0x1806BA3B8 (_lambda_e3e19fb8e3910b5b1b332ab74641bcf6_--operator().c)
 * Callees:
 *     ??$as@UIInspectable@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIInspectable@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x18022C784 (--$as@UIInspectable@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@win.c)
 */

__int64 __fastcall winrt::Windows::Foundation::IUnknown::as<IInspectable>(_QWORD *a1, __int64 a2)
{
  winrt::impl::as<IInspectable,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(a2, *a1);
  return a2;
}
