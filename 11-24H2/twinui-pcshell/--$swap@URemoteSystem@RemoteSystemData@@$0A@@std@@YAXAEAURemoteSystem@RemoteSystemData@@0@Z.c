/*
 * XREFs of ??$swap@URemoteSystem@RemoteSystemData@@$0A@@std@@YAXAEAURemoteSystem@RemoteSystemData@@0@Z @ 0x180648340
 * Callers:
 *     std::_Med3_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645428 (std--_Med3_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 *     std::_Partition_by_median_guess_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645498 (std--_Partition_by_median_guess_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f4666.c)
 * Callees:
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18005346C (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall std::swap<RemoteSystemData::RemoteSystem,0>(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // r15
  __int64 v5; // rbp
  __int16 v6; // r14
  int v7; // esi
  __int64 v8; // rdx
  volatile signed __int32 *v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int16 v12; // [rsp+38h] [rbp-20h]

  v2 = *(volatile signed __int32 **)a1;
  *(_QWORD *)a1 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_WORD *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 8);
  v11 = v5;
  v12 = v6;
  v9 = v2;
  v10 = v7;
  if ( a1 != a2 )
  {
    v8 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)a1, v8);
  }
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_WORD *)(a1 + 24) = *(_WORD *)(a2 + 24);
  if ( (volatile signed __int32 **)a2 != &v9 )
  {
    v9 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::attach((_QWORD *)a2, (__int64)v2);
  }
  *(_DWORD *)(a2 + 8) = v7;
  *(_QWORD *)(a2 + 16) = v5;
  *(_WORD *)(a2 + 24) = v6;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
}
