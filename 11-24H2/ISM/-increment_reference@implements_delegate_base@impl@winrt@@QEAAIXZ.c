/*
 * XREFs of ?increment_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x1800A7C74
 * Callers:
 *     ?AddRef@?$implements_delegate@U?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@V_lambda_60bc5d93aa36c864d5d47e476cd7d1f3_@@@impl@winrt@@UEAAIXZ @ 0x180063F30 (-AddRef@-$implements_delegate@U-$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationMo.c)
 *     ?query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@23@0@Z @ 0x1800A7F24 (-query_interface@implements_delegate_base@impl@winrt@@QEAAIAEBUguid@3@PEAPEAXPEAUtype@-$abi@UIUn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate_base::increment_reference(
        winrt::impl::implements_delegate_base *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this);
}
