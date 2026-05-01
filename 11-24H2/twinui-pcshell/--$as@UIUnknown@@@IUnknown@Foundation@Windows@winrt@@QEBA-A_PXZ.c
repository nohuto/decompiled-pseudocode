/*
 * XREFs of ??$as@UIUnknown@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802CB24C
 * Callers:
 *     ?RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ @ 0x18020E764 (-RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ.c)
 *     ??0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180284A28 (--0CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x1805EF81C (_anonymous_namespace_--GetWicBitmapFromStreamReference.c)
 * Callees:
 *     ??$as@UIUnknown@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UIUnknown@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180149450 (--$as@UIUnknown@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::as<IUnknown>(
        __int64 (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2)
{
  winrt::impl::as<IUnknown,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(a2, *a1);
  return a2;
}
