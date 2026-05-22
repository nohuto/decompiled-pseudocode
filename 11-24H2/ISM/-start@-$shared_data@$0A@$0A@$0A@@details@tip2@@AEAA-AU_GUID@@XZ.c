/*
 * XREFs of ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1800A61F0
 * Callers:
 *     ??$start@V?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@0@XZ @ 0x1800A440C (--$start@V-$tip_test@V-$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@@t.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180073124 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800741C4 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A47C4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1?TestClose@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHTIPTEST__@@@Z @ 0x1800A58E0 (-reset@-$unique_storage@U-$resource_policy@PEAUHTIPTEST__@@P6AXPEAU1@@Z$1-TestClose@@YAX0@ZU-$in.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800A6034 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     TestCreate @ 0x1800A66D0 (TestCreate.c)
 */

_OWORD *__fastcall tip2::details::shared_data<0,0,0>::start(__int64 a1, _OWORD *a2)
{
  int v4; // edx
  int v5; // r8d
  __int64 v6; // rax
  bool v7; // zf
  char v8; // cl
  __int64 v9; // rax
  __int128 v10; // xmm0
  struct _RTL_CRITICAL_SECTION *v12[2]; // [rsp+30h] [rbp-D0h] BYREF
  void *v13; // [rsp+40h] [rbp-C0h] BYREF
  char v14; // [rsp+48h] [rbp-B8h]
  int v15; // [rsp+49h] [rbp-B7h] BYREF
  char v16; // [rsp+4Dh] [rbp-B3h]
  char v17; // [rsp+4Eh] [rbp-B2h] BYREF
  char v18; // [rsp+849h] [rbp+749h] BYREF
  int *v19; // [rsp+850h] [rbp+750h]
  char *v20; // [rsp+858h] [rbp+758h]
  char *v21; // [rsp+860h] [rbp+760h]

  wil::EnterCriticalSection(v12, (struct _RTL_CRITICAL_SECTION *)(a1 + 192));
  v6 = 0LL;
  v15 = -2143256512;
  v7 = (*(_DWORD *)(a1 + 64) & 0x800) == 0;
  v19 = &v15;
  v21 = &v18;
  v20 = &v17;
  v13 = 0LL;
  v14 = 0;
  v16 = 0;
  if ( v7 || (v8 = 1, (*(_DWORD *)(a1 + 20) & 0x8000) != 0) )
    v8 = 0;
  if ( v8 )
    v6 = tip2::details::shared_data<0,0,0>::serialize_data(a1, (struct tson::write_buffer *)&v13, 1u);
  LOBYTE(v5) = *(_BYTE *)(a1 + 32);
  v9 = TestCreate(*(_DWORD *)(a1 + 16), v4, v5, *(_DWORD *)(a1 + 20), v6, a1 + 144);
  wil::details::unique_storage<wil::details::resource_policy<HTIPTEST__ *,void (*)(HTIPTEST__ *),&void TestClose(HTIPTEST__ *),wistd::integral_constant<unsigned __int64,0>,HTIPTEST__ *,HTIPTEST__ *,0,std::nullptr_t>>::reset(
    (__int64 *)(a1 + 240),
    v9);
  v10 = *(_OWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 184) = 1;
  *a2 = v10;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v13);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(v12);
  return a2;
}
