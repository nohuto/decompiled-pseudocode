/*
 * XREFs of ?GetMany@iterator@?$iterable_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@3@@Z @ 0x18049E388
 * Callers:
 *     ?GetMany@?$produce@Uiterator@?$iterable_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x18049E220 (-GetMany@-$produce@Uiterator@-$iterable_base@U-$vector_impl@URegistrationData@Shell@Internal@Win.c)
 *     ?GetMany@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x1805D2840 (-GetMany@-$produce@Uiterator@-$iterable_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$ve.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18004FA8C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x18033FCBC (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 */

__int64 __fastcall winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,winrt::impl::collection_version>::iterator::GetMany(
        __int64 a1,
        __m128i *a2)
{
  __m128i v4; // xmm1
  __int64 *v5; // rsi
  unsigned int v6; // edi
  __int64 *v7; // rbx
  unsigned int v8; // ebp
  __int64 result; // rax

  winrt::impl::collection_version::iterator_type::check_version(
    (winrt::impl::collection_version::iterator_type *)(a1 + 24),
    (const struct winrt::impl::collection_version *)(*(_QWORD *)(a1 + 32) + 40LL));
  v4 = *a2;
  v5 = *(__int64 **)(a1 + 40);
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
  if ( v6 >= (unsigned int)((__int64)(*(_QWORD *)(a1 + 48) - (_QWORD)v5) >> 3) )
    v6 = (__int64)(*(_QWORD *)(a1 + 48) - (_QWORD)v5) >> 3;
  if ( v6 )
  {
    winrt::Windows::Foundation::IUnknown::operator=((__int64 *)v4.m128i_i64[0], *(__int64 **)(a1 + 40));
    v7 = (__int64 *)(v4.m128i_i64[0] + 8);
    v8 = v6 - 1;
    if ( v6 != 1 )
    {
      do
      {
        winrt::Windows::Foundation::IUnknown::operator=(v7++, ++v5);
        --v8;
      }
      while ( v8 );
    }
  }
  result = v6;
  *(_QWORD *)(a1 + 40) += 8LL * v6;
  return result;
}
