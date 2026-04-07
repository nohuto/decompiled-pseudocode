/*
 * XREFs of ?Append@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1800E8B20
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_back_with_unused_capacity@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAAEAUUserResizeVisual@Transitions@Udwm@winrt@@AEBU2345@@Z @ 0x1800E7C54 (--$_Emplace_back_with_unused_capacity@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUs.c)
 *     ??$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@AEAAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU2345@AEBU2345@@Z @ 0x1800E7DC8 (--$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@.c)
 *     ?increment_version@collection_version@impl@winrt@@QEAAXXZ @ 0x1800EAF2C (-increment_version@collection_version@impl@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>::Append(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 *v5; // rcx
  winrt::Udwm::Transitions::AnimationCompletedHandler *v6; // rdx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  winrt::impl::collection_version::increment_version((winrt::impl::collection_version *)(((a1 - 16) & -(__int64)(a1 != 0))
                                                                                       + 40));
  v4 = v3 & -(__int64)(v2 != 0);
  v5 = (__int64 *)(v4 + 48);
  v6 = *(winrt::Udwm::Transitions::AnimationCompletedHandler **)(v4 + 0x38);
  if ( v6 == *(winrt::Udwm::Transitions::AnimationCompletedHandler **)(v4 + 64) )
  {
    try
    {
      std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Emplace_reallocate<winrt::Udwm::Transitions::UserResizeVisual const &>(
        v5,
        v6,
        (__int64)&v9);
    }
    catch ( ... )
    {
      return (unsigned int)*winrt::to_hresult(&v8);
    }
  }
  else
  {
    std::vector<winrt::Udwm::Transitions::UserResizeVisual>::_Emplace_back_with_unused_capacity<winrt::Udwm::Transitions::UserResizeVisual const &>(
      (__int64)v5,
      &v9);
  }
  return 0LL;
}
