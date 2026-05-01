/*
 * XREFs of ??$emplace@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x180617CC8
 * Callers:
 *     ?InsertAt@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXIAEBUhstring@2@@Z @ 0x18061AB0C (-InsertAt@-$vector_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uh.c)
 * Callees:
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18005346C (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??$_Emplace_back_with_unused_capacity@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAAEAUhstring@winrt@@AEBU23@@Z @ 0x180617860 (--$_Emplace_back_with_unused_capacity@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@.c)
 *     ??$_Emplace_reallocate@AEBUhstring@winrt@@@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@AEAAPEAUhstring@winrt@@QEAU23@AEBU23@@Z @ 0x18061788C (--$_Emplace_reallocate@AEBUhstring@winrt@@@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@.c)
 */

volatile signed __int32 ***__fastcall std::vector<winrt::hstring>::emplace<winrt::hstring const &>(
        __int64 a1,
        volatile signed __int32 ***a2,
        volatile signed __int32 **a3,
        const struct winrt::hstring *a4)
{
  volatile signed __int32 **v4; // rdi
  volatile signed __int32 **v8; // r14
  volatile signed __int32 *v9; // rax
  __int64 *v10; // rsi
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rdx
  volatile signed __int32 *v14[2]; // [rsp+28h] [rbp-10h] BYREF

  v4 = *(volatile signed __int32 ***)(a1 + 8);
  if ( v4 == *(volatile signed __int32 ***)(a1 + 16) )
  {
    *a2 = std::vector<winrt::hstring>::_Emplace_reallocate<winrt::hstring const &>(
            (volatile signed __int32 ***)a1,
            a3,
            a4);
  }
  else
  {
    if ( a3 == v4 )
    {
      std::vector<winrt::hstring>::_Emplace_back_with_unused_capacity<winrt::hstring const &>(a1, a4);
    }
    else
    {
      winrt::hstring::hstring((winrt::hstring *)v14, a4);
      v8 = v4 - 1;
      v9 = *(v4 - 1);
      *(v4 - 1) = 0LL;
      *v4 = v9;
      *(_QWORD *)(a1 + 8) += 8LL;
      if ( v4 - 1 != a3 )
      {
        v10 = (__int64 *)(v4 - 2);
        do
        {
          if ( --v4 != (volatile signed __int32 **)v10 )
          {
            v11 = *v10;
            *v10 = 0LL;
            winrt::handle_type<winrt::impl::hstring_traits>::attach(v4, v11);
          }
          --v8;
          --v10;
        }
        while ( v8 != a3 );
      }
      if ( a3 != v14 )
      {
        v12 = v14[0];
        v14[0] = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::attach(a3, (__int64)v12);
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close(v14);
    }
    *a2 = a3;
  }
  return a2;
}
