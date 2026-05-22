/*
 * XREFs of ?end_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x1801066C4
 * Callers:
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x180106250 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@V.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A43EC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     TestUnlockData @ 0x1800A7B40 (TestUnlockData.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1801072B0 (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 */

void __fastcall tip2::details::shared_data<0,0,1>::end_update(__int64 a1, __int64 a2)
{
  int v3; // eax
  bool v4; // zf
  __int64 v5; // rax
  __int128 v6; // [rsp+20h] [rbp-E0h] BYREF
  LPVOID pv[2]; // [rsp+30h] [rbp-D0h]
  __int128 v8; // [rsp+40h] [rbp-C0h]
  void *v9; // [rsp+50h] [rbp-B0h] BYREF
  char v10; // [rsp+58h] [rbp-A8h]
  int v11; // [rsp+59h] [rbp-A7h] BYREF
  char v12; // [rsp+5Dh] [rbp-A3h]
  char v13; // [rsp+5Eh] [rbp-A2h] BYREF
  char v14; // [rsp+859h] [rbp+759h] BYREF
  int *v15; // [rsp+860h] [rbp+760h]
  char *v16; // [rsp+868h] [rbp+768h]
  char *v17; // [rsp+870h] [rbp+770h]

  v3 = *(_DWORD *)(a1 + 64) | 0x800;
  *(_DWORD *)(a1 + 64) = v3;
  if ( *(_QWORD *)(a1 + 232) && (v3 & 0x100) == 0 )
  {
    v9 = 0LL;
    v4 = (*(_DWORD *)(a1 + 20) & 0x8000) == 0;
    v15 = &v11;
    v17 = &v14;
    v16 = &v13;
    v6 = 0LL;
    v10 = 0;
    *(_OWORD *)pv = 0LL;
    v11 = -2143256512;
    v8 = 0LL;
    v12 = 0;
    if ( v4 )
      v5 = tip2::details::shared_data<0,0,1>::serialize_data(a1, &v9, 1LL);
    else
      v5 = 0LL;
    TestUnlockData(*(_QWORD *)(a1 + 232), a2, v5, &v6);
    *(_DWORD *)(a1 + 64) |= HIDWORD(pv[0]);
    if ( !pv[1] )
      *(_DWORD *)(a1 + 184) = pv[0];
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v9);
    CoTaskMemFree(pv[1]);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
}
