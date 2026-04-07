/*
 * XREFs of ?Append@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x180100E40
 * Callers:
 *     <none>
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180020494 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU2345@AEBU2345@@Z @ 0x180100190 (--$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>::Append(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 *v3; // rbx
  winrt::Windows::Foundation::IUnknown *v4; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (a1 - 16) & -(__int64)(a1 != 0);
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 40));
  v3 = (__int64 *)(v2 & -(__int64)(v2 != -40));
  v4 = (winrt::Windows::Foundation::IUnknown *)v3[7];
  if ( v4 == (winrt::Windows::Foundation::IUnknown *)v3[8] )
  {
    try
    {
      std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Emplace_reallocate<winrt::Udwm::Transitions::UserResizeVisual const &>(
        v3 + 6,
        (__int64)v4,
        &v7);
    }
    catch ( ... )
    {
      return (unsigned int)*winrt::to_hresult(&v6);
    }
  }
  else
  {
    *(_QWORD *)v4 = v7;
    winrt::Windows::Foundation::IUnknown::add_ref(v4);
    v3[7] += 8LL;
  }
  return 0LL;
}
