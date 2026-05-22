/*
 * XREFs of ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1800A63CC
 * Callers:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1800A5FB8 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A43EC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?evaluate@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x1800A62C4 (-evaluate@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x1800A6630 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     ?last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ @ 0x1800A6918 (-last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1800A7324 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     TestReport @ 0x1800A7AEC (TestReport.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip2::details::shared_data<0,0,0>::evaluate_and_report(__int64 a1, __int64 a2)
{
  char v4; // cl
  unsigned __int8 v5; // al
  char v6; // dl
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rsi
  int v10; // ecx
  const struct wil::FailureInfo *error; // rax
  __int64 v12; // rcx
  const struct tip2::test_requirement *v13; // [rsp+20h] [rbp-E0h]
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h]
  int v16; // [rsp+40h] [rbp-C0h]
  __int128 v17; // [rsp+44h] [rbp-BCh]
  int v18; // [rsp+54h] [rbp-ACh]
  char v19; // [rsp+58h] [rbp-A8h]
  __int16 v20; // [rsp+5Ah] [rbp-A6h]
  __int64 v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  __int16 v26; // [rsp+90h] [rbp-70h]
  int v27; // [rsp+9Ch] [rbp-64h]
  int v28; // [rsp+A0h] [rbp-60h]
  void *v29; // [rsp+B0h] [rbp-50h] BYREF
  char v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+B9h] [rbp-47h] BYREF
  char v32; // [rsp+BDh] [rbp-43h]
  char v33; // [rsp+BEh] [rbp-42h] BYREF
  char v34; // [rsp+8B9h] [rbp+7B9h] BYREF
  int *v35; // [rsp+8C0h] [rbp+7C0h]
  char *v36; // [rsp+8C8h] [rbp+7C8h]
  char *v37; // [rsp+8D0h] [rbp+7D0h]

  if ( !*(_BYTE *)(a1 + 160)
    && tip2::details::evaluate_flags(
         (tip2::details *)(a1 + 8),
         *(const struct tip2::test_state **)(a1 + 40),
         *(const struct tip2::test_requirement **)(a1 + 56),
         *(const struct tip2::test_requirement **)(a1 + 48),
         v13) )
  {
    tip2::details::shared_data<0,0,0>::evaluate(a1);
  }
  v4 = *(_BYTE *)(a1 + 160);
  if ( v4 )
  {
    if ( (unsigned __int8)(v4 - 2) > 1u && ((*(_DWORD *)(a1 + 20) & 0x1000) == 0 || v4 == 4) )
      goto LABEL_11;
  }
  else
  {
    *(_BYTE *)(a1 + 160) = 3;
    *(_WORD *)(a1 + 162) = 16394;
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 64) & 0x800) != 0 )
  {
    v5 = 1;
    goto LABEL_12;
  }
LABEL_11:
  v5 = 0;
LABEL_12:
  v6 = v5;
  v7 = v5 | 2;
  if ( (*(_DWORD *)(a1 + 20) & 0x200) == 0 )
    v7 = v5;
  v29 = 0LL;
  v30 = 0;
  v35 = &v31;
  v37 = &v34;
  v31 = -2143256512;
  v32 = 0;
  v36 = &v33;
  if ( (*(_DWORD *)(a1 + 20) & 0x200) != 0 )
    v6 = 1;
  v8 = v7 | 4;
  if ( !v6 )
    v8 = v7;
  v9 = tip2::details::shared_data<0,0,0>::serialize_data(a1, &v29, v8);
  memset_0(&v14, 0, 0x78uLL);
  v10 = *(_DWORD *)(a1 + 180);
  if ( v10 )
    v14 = *(_DWORD *)(a1 + 180);
  else
    v14 = *(_DWORD *)(a1 + 16);
  v15 = *(_QWORD *)(a1 + 24);
  v16 = *(_DWORD *)(a1 + 20);
  v17 = *(_OWORD *)(a1 + 144);
  v18 = *(_DWORD *)(a1 + 64) | 0x200000;
  v19 = *(_BYTE *)(a1 + 160);
  v20 = *(_WORD *)(a1 + 162);
  v21 = *(_QWORD *)(a1 + 168);
  v22 = a2;
  v23 = v9;
  v27 = *(_DWORD *)(a1 + 176);
  if ( v10 )
    v28 = *(_DWORD *)(a1 + 16);
  else
    v28 = 0;
  error = tip2::test_state::last_error((tip2::test_state *)(a1 + 8));
  if ( error )
  {
    v24 = *((_DWORD *)error + 2);
    v25 = *((_QWORD *)error + 7);
    v26 = *((_WORD *)error + 32);
  }
  TestReport(&v14);
  v12 = *(_QWORD *)a1;
  if ( tip2::details::g_test_interface_exception_guard )
  {
    if ( !(unsigned __int8)tip2::details::g_test_interface_exception_guard(v12, 0LL, 0LL, 0LL, &v14) )
    {
      v20 = 16398;
      v19 = 3;
      TestReport(&v14);
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 24LL))(v12, &v14);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v29);
}
