/*
 * XREFs of ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1800E25F0
 * Callers:
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1800E22E0 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18008876C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180097D50 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 *     TestReport @ 0x18009A6D0 (TestReport.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 *     ?evaluate@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x1800E2474 (-evaluate@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x1800E2848 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     ?on_result@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEAUTipReportingInfo@@@Z @ 0x1800E2CB0 (-on_result@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEAUTipReportingInfo@@@Z.c)
 */

void __fastcall tip2::details::shared_data<0,0,0>::evaluate_and_report(__int64 a1, __int64 a2)
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
  __int64 v14; // rdx
  int v15; // r9d
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // eax
  const struct tip2::test_requirement *v19[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v20; // [rsp+30h] [rbp-D0h]
  __int128 v21; // [rsp+34h] [rbp-CCh]
  int v22; // [rsp+44h] [rbp-BCh]
  char v23; // [rsp+48h] [rbp-B8h]
  __int16 v24; // [rsp+4Ah] [rbp-B6h]
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  int v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  __int16 v30; // [rsp+80h] [rbp-80h]
  int v31; // [rsp+8Ch] [rbp-74h]
  int v32; // [rsp+90h] [rbp-70h]
  void *v33; // [rsp+A0h] [rbp-60h] BYREF
  char v34; // [rsp+A8h] [rbp-58h]
  int v35; // [rsp+A9h] [rbp-57h] BYREF
  char v36; // [rsp+ADh] [rbp-53h]
  char v37; // [rsp+AEh] [rbp-52h] BYREF
  char v38; // [rsp+8A9h] [rbp+7A9h] BYREF
  int *v39; // [rsp+8B0h] [rbp+7B0h]
  char *v40; // [rsp+8B8h] [rbp+7B8h]
  char *v41; // [rsp+8C0h] [rbp+7C0h]

  if ( !*(_BYTE *)(a1 + 160)
    && tip2::details::evaluate_flags(
         (tip2::details *)(a1 + 8),
         *(const struct tip2::test_state **)(a1 + 40),
         *(const struct tip2::test_requirement **)(a1 + 56),
         *(const struct tip2::test_requirement **)(a1 + 48),
         v19[0]) )
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
      v39 = &v35;
      v7 = v5 | 2;
      v34 = 0;
      v8 = (*(_DWORD *)(a1 + 20) & 0x200) == 0;
      v41 = &v38;
      if ( v8 )
        v7 = v5;
      v40 = &v37;
      v33 = 0LL;
      v8 = (*(_DWORD *)(a1 + 20) & 0x200) == 0;
      v35 = -2143256512;
      if ( !v8 )
        v6 = 1;
      v36 = 0;
      v9 = v7 | 4;
      if ( !v6 )
        v9 = v7;
      v10 = tip2::details::shared_data<0,0,0>::serialize_data(a1, (struct tson::write_buffer *)&v33, v9);
      memset_0(v19, 0, 0x78uLL);
      v11 = *(_DWORD *)(a1 + 180);
      if ( v11 )
        LODWORD(v19[0]) = *(_DWORD *)(a1 + 180);
      else
        LODWORD(v19[0]) = *(_DWORD *)(a1 + 16);
      v12 = *(_OWORD *)(a1 + 144);
      v19[1] = *(const struct tip2::test_requirement **)(a1 + 24);
      v20 = *(_DWORD *)(a1 + 20);
      v13 = *(_DWORD *)(a1 + 64) | 0x200000;
      v26 = a2;
      v22 = v13;
      v23 = *(_BYTE *)(a1 + 160);
      v24 = *(_WORD *)(a1 + 162);
      v25 = *(_QWORD *)(a1 + 168);
      v31 = *(_DWORD *)(a1 + 176);
      v27 = v10;
      v21 = v12;
      if ( v11 )
        v32 = *(_DWORD *)(a1 + 16);
      else
        v32 = 0;
      v14 = *(_QWORD *)(a1 + 72);
      v15 = 0;
      v16 = v14 + 168LL * *(_QWORD *)(a1 + 88);
      v17 = 0LL;
      if ( v14 != v16 )
      {
        do
        {
          v18 = *(_DWORD *)(v14 + 8);
          if ( v15 != v18 )
            v17 = v14;
          v14 += 168LL;
          if ( v15 == v18 )
            v18 = v15;
          v15 = v18;
        }
        while ( v14 != v16 );
        if ( v17 )
        {
          v28 = *(_DWORD *)(v17 + 8);
          v29 = *(_QWORD *)(v17 + 56);
          v30 = *(_WORD *)(v17 + 64);
        }
      }
      TestReport((__int64)v19);
      tip2::details::shared_data<0,0,0>::on_result(a1, v19);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v33);
      return;
    }
LABEL_12:
    v5 = 0;
    goto LABEL_13;
  }
}
