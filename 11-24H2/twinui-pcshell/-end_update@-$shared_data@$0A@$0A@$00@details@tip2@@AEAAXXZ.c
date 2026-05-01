/*
 * XREFs of ?end_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x180698A34
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x18068AE5C (--1-$test_data_control@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@V.c)
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1806934B0 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedLis.c)
 * Callees:
 *     TestUnlockData @ 0x1801B3ADC (TestUnlockData.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D33F8 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1806995F0 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 */

void __fastcall tip2::details::shared_data<0,0,1>::end_update(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int128 v5; // [rsp+20h] [rbp-E0h] BYREF
  LPVOID pv[2]; // [rsp+30h] [rbp-D0h]
  __int128 v7; // [rsp+40h] [rbp-C0h]
  void *v8; // [rsp+50h] [rbp-B0h] BYREF
  char v9; // [rsp+58h] [rbp-A8h]
  int v10; // [rsp+59h] [rbp-A7h] BYREF
  char v11; // [rsp+5Dh] [rbp-A3h]
  _BYTE v12[2043]; // [rsp+5Eh] [rbp-A2h] BYREF
  char v13; // [rsp+859h] [rbp+759h] BYREF
  int *v14; // [rsp+860h] [rbp+760h]
  _BYTE *v15; // [rsp+868h] [rbp+768h]
  char *v16; // [rsp+870h] [rbp+770h]

  v2 = *(_DWORD *)(a1 + 64) | 0x800;
  *(_DWORD *)(a1 + 64) = v2;
  if ( *(_QWORD *)(a1 + 240) && (v2 & 0x100) == 0 && (*(_DWORD *)(a1 + 20) & 0x8000) == 0 )
  {
    v5 = 0LL;
    *(_OWORD *)pv = 0LL;
    v7 = 0LL;
    memset_0(v12, 0, 0x802uLL);
    v8 = 0LL;
    v14 = &v10;
    v9 = 0;
    v16 = &v13;
    v10 = -2143256512;
    v15 = v12;
    v11 = 0;
    v3 = tip2::details::shared_data<0,0,1>::serialize_data(a1, &v8, 1LL);
    TestUnlockData(*(_QWORD *)(a1 + 240), v4, v3, &v5);
    *(_DWORD *)(a1 + 64) |= HIDWORD(pv[0]);
    if ( !pv[1] )
      *(_DWORD *)(a1 + 184) = pv[0];
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v8);
    CoTaskMemFree(pv[1]);
  }
  --*(_DWORD *)(a1 + 232);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
}
