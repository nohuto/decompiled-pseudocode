/*
 * XREFs of ?GetMany@iterator@?$iterable_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@Uhstring@winrt@@@3@@Z @ 0x18061A138
 * Callers:
 *     ?GetMany@?$produce@Uiterator@?$iterable_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@U?$IIterator@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x180619FD0 (-GetMany@-$produce@Uiterator@-$iterable_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@w.c)
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800537E8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x18033FCBC (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 */

__int64 __fastcall winrt::iterable_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::impl::collection_version>::iterator::GetMany(
        __int64 a1,
        __m128i *a2)
{
  unsigned int v4; // r8d
  __m128i v5; // xmm1
  __int64 *v6; // rsi
  unsigned int v7; // edi
  unsigned int v8; // r8d
  struct winrt::impl::hstring_header **v9; // rbx
  unsigned int v10; // ebp
  __int64 result; // rax

  winrt::impl::collection_version::iterator_type::check_version(
    (winrt::impl::collection_version::iterator_type *)(a1 + 24),
    (const struct winrt::impl::collection_version *)(*(_QWORD *)(a1 + 32) + 40LL));
  v5 = *a2;
  v6 = *(__int64 **)(a1 + 40);
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
  if ( v7 >= (unsigned int)((__int64)(*(_QWORD *)(a1 + 48) - (_QWORD)v6) >> 3) )
    v7 = (__int64)(*(_QWORD *)(a1 + 48) - (_QWORD)v6) >> 3;
  if ( v7 )
  {
    winrt::hstring::operator=((struct winrt::impl::hstring_header **)v5.m128i_i64[0], *(__int64 **)(a1 + 40), v4);
    v9 = (struct winrt::impl::hstring_header **)(v5.m128i_i64[0] + 8);
    v10 = v7 - 1;
    if ( v7 != 1 )
    {
      do
      {
        winrt::hstring::operator=(v9++, ++v6, v8);
        --v10;
      }
      while ( v10 );
    }
  }
  result = v7;
  *(_QWORD *)(a1 + 40) += 8LL * v7;
  return result;
}
