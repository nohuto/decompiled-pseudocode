/*
 * XREFs of ?get_Key@?$produce@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800FFA60
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18005C050 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x18009DE18 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>::get_Key(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  __int64 v3; // rax
  struct winrt::impl::hstring_header *hstring_on_heap; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v3 = a1 + 8;
  if ( !a1 )
    v3 = 24LL;
  hstring_on_heap = *(struct winrt::impl::hstring_header **)v3;
  if ( hstring_on_heap )
  {
    if ( (*(_BYTE *)hstring_on_heap & 1) != 0 )
    {
      try
      {
        hstring_on_heap = winrt::impl::create_hstring_on_heap(
                            *((winrt::impl **)hstring_on_heap + 2),
                            (winrt::impl *)*((unsigned int *)hstring_on_heap + 1));
      }
      catch ( ... )
      {
        return (unsigned int)*winrt::to_hresult(&v6);
      }
    }
    else
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)hstring_on_heap + 6, 1u);
    }
  }
  v7 = 0LL;
  *a2 = hstring_on_heap;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
  return 0LL;
}
