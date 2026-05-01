/*
 * XREFs of std::_Push_heap_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x1806457F8
 * Callers:
 *     std::_Pop_heap_hole_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645618 (std--_Pop_heap_hole_by_index_RemoteSystemData--RemoteSystem___RemoteSystemData--RemoteSystem__la.c)
 * Callees:
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18005346C (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 */

__int64 __fastcall std::_Push_heap_by_index_RemoteSystemData::RemoteSystem___RemoteSystemData::RemoteSystem__lambda_e3fde369f46668a79a17c803abc8f6e1___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 result; // rax

  v6 = a2;
  if ( a3 < a2 )
  {
    do
    {
      v8 = (v6 - 1) >> 1;
      v9 = a1 + 32 * v8;
      if ( *(_QWORD *)(v9 + 16) >= *(_QWORD *)(a4 + 16) )
        break;
      v10 = a1 + 32 * v6;
      if ( v10 != v9 )
      {
        v11 = *(_QWORD *)v9;
        *(_QWORD *)v9 = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)v10, v11);
      }
      *(_DWORD *)(v10 + 8) = *(_DWORD *)(v9 + 8);
      *(_QWORD *)(v10 + 16) = *(_QWORD *)(v9 + 16);
      *(_WORD *)(v10 + 24) = *(_WORD *)(v9 + 24);
      v6 = v8;
    }
    while ( a3 < v8 );
  }
  v12 = a1 + 32 * v6;
  if ( v12 != a4 )
  {
    v13 = *(_QWORD *)a4;
    *(_QWORD *)a4 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)v12, v13);
  }
  *(_DWORD *)(v12 + 8) = *(_DWORD *)(a4 + 8);
  *(_QWORD *)(v12 + 16) = *(_QWORD *)(a4 + 16);
  result = *(unsigned __int16 *)(a4 + 24);
  *(_WORD *)(v12 + 24) = result;
  return result;
}
