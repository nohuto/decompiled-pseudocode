/*
 * XREFs of ??$capture_to@UIContextCallback@impl@winrt@@P6AHAEBUguid@3@PEAPEAX@_E$$V@impl@winrt@@YAHPEAPEAXP6AHAEBUguid@1@0@_E@Z @ 0x1801B496C
 * Callers:
 *     ??$try_capture@UIContextCallback@impl@winrt@@A6AHAEBUguid@3@PEAPEAX@_E@winrt@@YA?AU?$com_ptr@UIContextCallback@impl@winrt@@@0@A6AHAEBUguid@0@PEAPEAX@_E@Z @ 0x1801B4930 (--$try_capture@UIContextCallback@impl@winrt@@A6AHAEBUguid@3@PEAPEAX@_E@winrt@@YA-AU-$com_ptr@UIC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ___capture_to_UIContextCallback_impl_winrt__P6AHAEBUguid_3_PEAPEAX__E__V_impl_winrt__YAHPEAPEAXP6AHAEBUguid_1_0__E_Z(
        __int64 a1,
        __int64 (__fastcall *a2)(void *, __int64))
{
  return a2(&winrt::impl::guid_v<winrt::impl::IContextCallback>, a1);
}
