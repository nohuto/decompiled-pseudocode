/*
 * XREFs of ?GetMany@iterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@UUserResizeVisual@Transitions@Udwm@winrt@@@3@@Z @ 0x1800E92A8
 * Callers:
 *     ?GetMany@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x1800E9140 (-GetMany@-$produce@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@Udwm@w.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x18004BD48 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x1800EABAC (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 */

__int64 __fastcall winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator::GetMany(
        __int64 a1,
        __m128i *a2)
{
  __m128i v4; // xmm1
  winrt::Windows::Foundation::IUnknown *v5; // rsi
  unsigned int v6; // edi
  winrt::Windows::Foundation::IUnknown *v7; // rbx
  unsigned int v8; // ebp
  __int64 result; // rax

  winrt::impl::collection_version::iterator_type::check_version(
    (winrt::impl::collection_version::iterator_type *)(a1 + 24),
    (const struct winrt::impl::collection_version *)(*(_QWORD *)(a1 + 32) + 40LL));
  v4 = *a2;
  v5 = *(winrt::Windows::Foundation::IUnknown **)(a1 + 40);
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
  if ( v6 >= (unsigned int)((__int64)(*(_QWORD *)(a1 + 48) - (_QWORD)v5) >> 3) )
    v6 = (__int64)(*(_QWORD *)(a1 + 48) - (_QWORD)v5) >> 3;
  if ( v6 )
  {
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)v4.m128i_i64[0],
      *(winrt::Windows::Foundation::IUnknown **)(a1 + 40));
    v7 = (winrt::Windows::Foundation::IUnknown *)(v4.m128i_i64[0] + 8);
    v8 = v6 - 1;
    if ( v6 != 1 )
    {
      do
      {
        v5 = (winrt::Windows::Foundation::IUnknown *)((char *)v5 + 8);
        winrt::Windows::Foundation::IUnknown::operator=(v7, v5);
        v7 = (winrt::Windows::Foundation::IUnknown *)((char *)v7 + 8);
        --v8;
      }
      while ( v8 );
    }
  }
  result = v6;
  *(_QWORD *)(a1 + 40) += 8LL * v6;
  return result;
}
