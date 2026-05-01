/*
 * XREFs of std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070AE10
 * Callers:
 *     std::_Make_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070AB68 (std--_Make_heap_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f.c)
 *     std::_Sort_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x18070B03C (std--_Sort_heap_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v8; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rbx

  v4 = a3 - 1;
  v5 = a4;
  v6 = (a3 - 1) >> 1;
  v8 = a2;
  v10 = a2;
  if ( a2 < v6 )
  {
    do
    {
      v11 = a1 + 32 * v8;
      v10 = 2 * v10 + 2LL - (*(_QWORD *)((v10 << 6) + a1 + 80) < *(_QWORD *)((v10 << 6) + a1 + 48));
      v12 = (__int64 *)(a1 + 32 * v10);
      if ( (__int64 *)v11 != v12 )
      {
        v13 = *v12;
        *v12 = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v11);
        winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v11);
        *(_QWORD *)v11 = v13;
      }
      *(_DWORD *)(v11 + 8) = *((_DWORD *)v12 + 2);
      *(_QWORD *)(v11 + 16) = v12[2];
      *(_WORD *)(v11 + 24) = *((_WORD *)v12 + 12);
      v8 = v10;
    }
    while ( v10 < v6 );
    v5 = a4;
  }
  if ( v10 == v6 && (a3 & 1) == 0 )
  {
    v14 = 32 * a3 + a1 - 32;
    v15 = a1 + 32 * v8;
    if ( v15 != v14 )
    {
      v16 = *(_QWORD *)v14;
      *(_QWORD *)v14 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v15);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v15);
      *(_QWORD *)v15 = v16;
    }
    *(_DWORD *)(v15 + 8) = *(_DWORD *)(v14 + 8);
    *(_QWORD *)(v15 + 16) = *(_QWORD *)(v14 + 16);
    *(_WORD *)(v15 + 24) = *(_WORD *)(v14 + 24);
    v8 = v4;
  }
  return std::_Push_heap_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___(
           a1,
           v8,
           a2,
           v5);
}
