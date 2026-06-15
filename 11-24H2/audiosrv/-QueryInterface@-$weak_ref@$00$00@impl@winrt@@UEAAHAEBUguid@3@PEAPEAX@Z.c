/*
 * XREFs of ?QueryInterface@?$weak_ref@$00$00@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800E6BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::weak_ref<1,1>::QueryInterface(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  if ( *a2 == winrt::impl::guid_v<winrt::impl::IWeakReference> && a2[1] == 0x46000000000000C0LL
    || *a2 == *(_QWORD *)&winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>.Data1
    && a2[1] == *(_QWORD *)winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>.Data4
    || *a2 == winrt::impl::guid_v<winrt::impl::IAgileObject> && a2[1] == 0x905B8FCA64EEFFC0uLL )
  {
    *a3 = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 28));
    return 0LL;
  }
  else if ( *a2 == winrt::impl::guid_v<winrt::impl::IMarshal> && a2[1] == 0x46000000000000C0LL )
  {
    return winrt::impl::make_marshaler(a1, a3);
  }
  else
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
}
