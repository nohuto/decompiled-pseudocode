/*
 * XREFs of _lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_::operator() @ 0x18064A584
 * Callers:
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x1806506A4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800537E8 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x1806458C8 (std--_Sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 *     ?IsValidState@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEBA_NAEBW4CloudPCState@3456@@Z @ 0x18064E244 (-IsValidState@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEBA_NA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_dd20a21c1036dd3f8b0b2bbf83f8cf17_::operator()(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v5; // r8
  struct winrt::impl::hstring_header *v6; // rcx
  __int16 v7; // ax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  bool IsValidState; // al
  int v11; // ecx
  int v12; // edx
  struct winrt::impl::hstring_header *v14; // [rsp+28h] [rbp-28h] BYREF
  __int128 v15; // [rsp+30h] [rbp-20h]
  __int16 v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+42h] [rbp-Eh]
  __int16 v18; // [rsp+46h] [rbp-Ah]
  __int64 v19; // [rsp+68h] [rbp+18h] BYREF

  v19 = a2;
  std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
    *a3,
    a3[1],
    (__int64)(a3[1] - *a3) >> 5,
    a2);
  v6 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v7 = -1;
  v16 = -1;
  v17 = 0;
  v18 = 0;
  v8 = a3[1];
  v9 = *a3;
  if ( v9 == v8 )
  {
    v5 = *((_QWORD *)&v15 + 1);
    v12 = v15;
  }
  else
  {
    do
    {
      winrt::hstring::operator=(&v14, (__int64 *)v9, v5);
      *((_QWORD *)&v15 + 1) = *(_QWORD *)(v9 + 16);
      LODWORD(v19) = *(_DWORD *)(v9 + 8);
      IsValidState = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::IsValidState(
                       (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)(unsigned int)v19,
                       (const enum winrt::Windows::Internal::Shell::CloudPCState *)&v19);
      v12 = v15;
      if ( IsValidState )
        v12 = v11;
      LODWORD(v15) = v12;
      v9 += 32LL;
    }
    while ( v9 != v8 );
    v7 = v16;
    v6 = v14;
  }
  v14 = 0LL;
  *(_QWORD *)a2 = v6;
  *(_DWORD *)(a2 + 8) = v12;
  *(_QWORD *)(a2 + 16) = v5;
  *(_WORD *)(a2 + 24) = v7;
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v14);
  return a2;
}
