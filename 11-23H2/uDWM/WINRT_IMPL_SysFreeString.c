/*
 * XREFs of WINRT_IMPL_SysFreeString @ 0x18005E835
 * Callers:
 *     ?close@?$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009DD18 (-close@-$handle_type@Ubstr_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall WINRT_IMPL_SysFreeString(BSTR bstrString)
{
  SysFreeString(bstrString);
}
