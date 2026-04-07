/*
 * XREFs of ?GetMany@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVectorView@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAPEAXPEAI@Z @ 0x1801017F0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     ?GetMany@?$vector_view_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEBAIIU?$array_view@UUserResizeVisual@Transitions@Udwm@winrt@@@2@@Z @ 0x180101964 (-GetMany@-$vector_view_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V-$vector@U.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Udwm::Transitions::UserResizeVisual>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        _DWORD *a5)
{
  __int64 v9; // rcx
  void *v11; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-10h]

  memset_0(a4, 0, 8LL * a3);
  v9 = a1 + 16;
  if ( !a1 )
    v9 = 40LL;
  v11 = a4;
  v12 = a3;
  *a5 = winrt::vector_view_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::GetMany(
          v9,
          a2,
          &v11);
  return 0LL;
}
