/*
 * XREFs of ?evaluate_and_report@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1803366B0
 * Callers:
 *     ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x180295C34 (-complete_helper@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     TestReport @ 0x180193D0C (TestReport.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D33F8 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180287FFC (-serialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     ?evaluate@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x1802949A0 (-evaluate@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ @ 0x180294F00 (-last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ.c)
 *     ?on_result@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEAUTipReportingInfo@@@Z @ 0x1802950D8 (-on_result@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEAUTipReportingInfo@@@Z.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x180295840 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

void __fastcall tip2::details::shared_data<1,0,0>::evaluate_and_report(__int64 a1, __int64 a2)
{
  char v4; // cl
  unsigned __int8 v5; // al
  char v6; // dl
  int v7; // ecx
  bool v8; // zf
  unsigned int v9; // r8d
  __int64 v10; // rsi
  int v11; // ecx
  __int128 v12; // xmm0
  int v13; // eax
  const struct wil::FailureInfo *error; // rax
  int v15; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-D8h]
  int v17; // [rsp+30h] [rbp-D0h]
  __int128 v18; // [rsp+34h] [rbp-CCh]
  int v19; // [rsp+44h] [rbp-BCh]
  char v20; // [rsp+48h] [rbp-B8h]
  __int16 v21; // [rsp+4Ah] [rbp-B6h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  int v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  __int16 v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+8Ch] [rbp-74h]
  int v29; // [rsp+90h] [rbp-70h]
  void *v30; // [rsp+A0h] [rbp-60h] BYREF
  char v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+A9h] [rbp-57h] BYREF
  char v33; // [rsp+ADh] [rbp-53h]
  char v34; // [rsp+AEh] [rbp-52h] BYREF
  char v35; // [rsp+8A9h] [rbp+7A9h] BYREF
  int *v36; // [rsp+8B0h] [rbp+7B0h]
  char *v37; // [rsp+8B8h] [rbp+7B8h]
  char *v38; // [rsp+8C0h] [rbp+7C0h]

  if ( !*(_BYTE *)(a1 + 160)
    && tip2::details::evaluate_flags(
         (tip2::details *)(a1 + 8),
         *(const struct tip2::test_state **)(a1 + 40),
         *(const struct tip2::test_requirement **)(a1 + 56),
         *(const struct tip2::test_requirement **)(a1 + 48)) )
  {
    tip2::details::shared_data<0,0,0>::evaluate(a1);
  }
  v4 = *(_BYTE *)(a1 + 160);
  if ( v4 != 5 )
  {
    if ( v4 )
    {
      if ( (unsigned __int8)(v4 - 2) > 1u && ((*(_DWORD *)(a1 + 20) & 0x1000) == 0 || v4 == 4) )
        goto LABEL_12;
    }
    else
    {
      *(_QWORD *)(a1 + 168) = 0LL;
      *(_BYTE *)(a1 + 160) = 3;
      *(_WORD *)(a1 + 162) = 16394;
    }
    if ( (*(_DWORD *)(a1 + 64) & 0x800) != 0 )
    {
      v5 = 1;
LABEL_13:
      v6 = v5;
      v36 = &v32;
      v7 = v5 | 2;
      v31 = 0;
      v8 = (*(_DWORD *)(a1 + 20) & 0x200) == 0;
      v38 = &v35;
      if ( v8 )
        v7 = v5;
      v37 = &v34;
      v30 = 0LL;
      v8 = (*(_DWORD *)(a1 + 20) & 0x200) == 0;
      v32 = -2143256512;
      if ( !v8 )
        v6 = 1;
      v33 = 0;
      v9 = v7 | 4;
      if ( !v6 )
        v9 = v7;
      v10 = tip2::details::shared_data<1,0,0>::serialize_data((__int64 *)a1, (struct tson::write_buffer *)&v30, v9);
      memset_0(&v15, 0, 0x78uLL);
      v11 = *(_DWORD *)(a1 + 180);
      if ( v11 )
        v15 = *(_DWORD *)(a1 + 180);
      else
        v15 = *(_DWORD *)(a1 + 16);
      v12 = *(_OWORD *)(a1 + 144);
      v16 = *(_QWORD *)(a1 + 24);
      v17 = *(_DWORD *)(a1 + 20);
      v13 = *(_DWORD *)(a1 + 64) | 0x200000;
      v23 = a2;
      v19 = v13;
      v20 = *(_BYTE *)(a1 + 160);
      v21 = *(_WORD *)(a1 + 162);
      v22 = *(_QWORD *)(a1 + 168);
      v28 = *(_DWORD *)(a1 + 176);
      v24 = v10;
      v18 = v12;
      if ( v11 )
        v29 = *(_DWORD *)(a1 + 16);
      else
        v29 = 0;
      error = tip2::test_state::last_error((tip2::test_state *)(a1 + 8));
      if ( error )
      {
        v25 = *((_DWORD *)error + 2);
        v26 = *((_QWORD *)error + 7);
        v27 = *((_WORD *)error + 32);
      }
      TestReport((__int64)&v15);
      tip2::details::shared_data<0,0,0>::on_result((__int64 *)a1, (__int64)&v15);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v30);
      return;
    }
LABEL_12:
    v5 = 0;
    goto LABEL_13;
  }
}
