/*
 * XREFs of std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645618
 * Callers:
 *     std::_Make_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645370 (std--_Make_heap_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f.c)
 *     std::_Pop_heap_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645740 (std--_Pop_heap_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6.c)
 * Callees:
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18005346C (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 */

__int64 __fastcall std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r12
  __int64 v6; // r14
  __int64 v8; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rdx

  v4 = a3 - 1;
  v6 = (a3 - 1) >> 1;
  v8 = a2;
  v10 = a2;
  v11 = a2;
  if ( a2 < v6 )
  {
    do
    {
      v12 = a1 + 32 * v8;
      v11 = 2 * v11 + 2LL - (*(_QWORD *)((v11 << 6) + a1 + 80) < *(_QWORD *)((v11 << 6) + a1 + 48));
      v13 = a1 + 32 * v11;
      if ( v12 != v13 )
      {
        v14 = *(_QWORD *)v13;
        *(_QWORD *)v13 = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)v12, v14);
      }
      *(_DWORD *)(v12 + 8) = *(_DWORD *)(v13 + 8);
      *(_QWORD *)(v12 + 16) = *(_QWORD *)(v13 + 16);
      *(_WORD *)(v12 + 24) = *(_WORD *)(v13 + 24);
      v8 = v11;
    }
    while ( v11 < v6 );
    v10 = a2;
  }
  if ( v11 == v6 && (a3 & 1) == 0 )
  {
    v15 = 32 * a3 + a1 - 32;
    v16 = a1 + 32 * v8;
    if ( v16 != v15 )
    {
      v17 = *(_QWORD *)v15;
      *(_QWORD *)v15 = 0LL;
      winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)v16, v17);
    }
    *(_DWORD *)(v16 + 8) = *(_DWORD *)(v15 + 8);
    *(_QWORD *)(v16 + 16) = *(_QWORD *)(v15 + 16);
    *(_WORD *)(v16 + 24) = *(_WORD *)(v15 + 24);
    v8 = v4;
  }
  return std::_Push_heap_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___(
           a1,
           v8,
           v10,
           a4);
}
