/*
 * XREFs of ?evaluate_and_report@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAX_J@Z @ 0x1801087A4
 * Callers:
 *     ?complete_helper@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1801083E4 (-complete_helper@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800A47C4 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x1800A52D4 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     ?last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ @ 0x1800A55BC (-last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ.c)
 *     TestReport @ 0x1800A67FC (TestReport.c)
 *     ?serialize_data@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1801091BC (-serialize_data@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4seriali.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip2::details::shared_data<0,0,1>::evaluate_and_report(_DWORD *a1, __int64 a2)
{
  char v4; // cl
  unsigned __int8 v5; // al
  char v6; // dl
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rsi
  int v10; // ecx
  const struct wil::FailureInfo *error; // rax
  int v12; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+28h] [rbp-D8h]
  int v14; // [rsp+30h] [rbp-D0h]
  __int128 v15; // [rsp+34h] [rbp-CCh]
  int v16; // [rsp+44h] [rbp-BCh]
  char v17; // [rsp+48h] [rbp-B8h]
  __int16 v18; // [rsp+4Ah] [rbp-B6h]
  __int64 v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+58h] [rbp-A8h]
  __int64 v21; // [rsp+68h] [rbp-98h]
  int v22; // [rsp+70h] [rbp-90h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  __int16 v24; // [rsp+80h] [rbp-80h]
  int v25; // [rsp+8Ch] [rbp-74h]
  int v26; // [rsp+90h] [rbp-70h]
  void *v27; // [rsp+A0h] [rbp-60h] BYREF
  char v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+A9h] [rbp-57h] BYREF
  char v30; // [rsp+ADh] [rbp-53h]
  char v31; // [rsp+AEh] [rbp-52h] BYREF
  char v32; // [rsp+8A9h] [rbp+7A9h] BYREF
  int *v33; // [rsp+8B0h] [rbp+7B0h]
  char *v34; // [rsp+8B8h] [rbp+7B8h]
  char *v35; // [rsp+8C0h] [rbp+7C0h]

  if ( !*((_BYTE *)a1 + 160)
    && tip2::details::evaluate_flags(
         (tip2::details *)(a1 + 2),
         *((const struct tip2::test_state **)a1 + 5),
         *((const struct tip2::test_requirement **)a1 + 7),
         *((const struct tip2::test_requirement **)a1 + 6)) )
  {
    (***(void (__fastcall ****)(_QWORD))a1)(*(_QWORD *)a1);
  }
  v4 = *((_BYTE *)a1 + 160);
  if ( v4 != 5 )
  {
    if ( v4 )
    {
      if ( (unsigned __int8)(v4 - 2) > 1u && ((a1[5] & 0x1000) == 0 || v4 == 4) )
        goto LABEL_12;
    }
    else
    {
      *((_BYTE *)a1 + 160) = 3;
      *((_WORD *)a1 + 81) = 16394;
      *((_QWORD *)a1 + 21) = 0LL;
    }
    if ( (a1[16] & 0x800) != 0 )
    {
      v5 = 1;
LABEL_13:
      v6 = v5;
      v7 = v5 | 2;
      if ( (a1[5] & 0x200) == 0 )
        v7 = v5;
      v27 = 0LL;
      v28 = 0;
      v33 = &v29;
      v35 = &v32;
      v29 = -2143256512;
      v30 = 0;
      v34 = &v31;
      if ( (a1[5] & 0x200) != 0 )
        v6 = 1;
      v8 = v7 | 4;
      if ( !v6 )
        v8 = v7;
      v9 = tip2::details::shared_data<0,0,1>::serialize_data(a1, &v27, v8);
      memset_0(&v12, 0, 0x78uLL);
      v10 = a1[45];
      if ( v10 )
        v12 = a1[45];
      else
        v12 = a1[4];
      v13 = *((_QWORD *)a1 + 3);
      v14 = a1[5];
      v15 = *((_OWORD *)a1 + 9);
      v16 = a1[16] | 0x200000;
      v17 = *((_BYTE *)a1 + 160);
      v18 = *((_WORD *)a1 + 81);
      v19 = *((_QWORD *)a1 + 21);
      v20 = a2;
      v21 = v9;
      v25 = a1[44];
      if ( v10 )
        v26 = a1[4];
      else
        v26 = 0;
      error = tip2::test_state::last_error((tip2::test_state *)(a1 + 2));
      if ( error )
      {
        v22 = *((_DWORD *)error + 2);
        v23 = *((_QWORD *)error + 7);
        v24 = *((_WORD *)error + 32);
      }
      TestReport((__int64)&v12);
      (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)a1 + 24LL))(*(_QWORD *)a1, &v12);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v27);
      return;
    }
LABEL_12:
    v5 = 0;
    goto LABEL_13;
  }
}
