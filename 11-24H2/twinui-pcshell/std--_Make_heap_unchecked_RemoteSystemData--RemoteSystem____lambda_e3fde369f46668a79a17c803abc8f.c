/*
 * XREFs of std::_Make_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645370
 * Callers:
 *     std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x1806458C8 (std--_Sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645618 (std--_Pop_heap_hole_by_index_RemoteSystemData--RemoteSystem___RemoteSystemData--RemoteSystem__la.c)
 */

void __fastcall std::_Make_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r14
  volatile signed __int32 *v8; // rax
  int v9; // [rsp+20h] [rbp-38h]
  volatile signed __int32 *v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]
  __int16 v13; // [rsp+48h] [rbp-10h]

  v5 = (a2 - a1) >> 5;
  v6 = (a2 - a1) >> 6;
  if ( v6 > 0 )
  {
    v7 = a1 + 32 * v6 - 32;
    do
    {
      v8 = *(volatile signed __int32 **)v7;
      *(_QWORD *)v7 = 0LL;
      v10 = v8;
      --v6;
      v11 = *(_DWORD *)(v7 + 8);
      v12 = *(_QWORD *)(v7 + 16);
      v13 = *(_WORD *)(v7 + 24);
      LOBYTE(v9) = a3;
      std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___(
        a1,
        v6,
        v5,
        &v10,
        v9);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
      v7 -= 32LL;
    }
    while ( v6 > 0 );
  }
}
