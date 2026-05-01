/*
 * XREFs of ?evaluate_and_report@?$shared_data@$00$00$00@details@tip2@@AEAAX_J@Z @ 0x1803C3528
 * Callers:
 *     ?complete_helper@?$shared_data@$00$00$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1803C233C (-complete_helper@-$shared_data@$00$00$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     TestReport @ 0x180193D0C (TestReport.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D33F8 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ @ 0x180294F00 (-last_error@test_state@tip2@@QEBAPEBUFailureInfo@wil@@XZ.c)
 *     ?evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z @ 0x180295840 (-evaluate_flags@details@tip2@@YA_NAEBVtest_state@2@PEBUtest_requirement@2@11@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?serialize_data@?$shared_data@$00$00$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x1803C45D0 (-serialize_data@-$shared_data@$00$00$00@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip2::details::shared_data<1,1,1>::evaluate_and_report(_DWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  char v5; // cl
  unsigned __int8 v6; // al
  char v7; // dl
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rsi
  int v11; // ecx
  const struct wil::FailureInfo *error; // rax
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h]
  int v15; // [rsp+30h] [rbp-D0h]
  __int128 v16; // [rsp+34h] [rbp-CCh]
  int v17; // [rsp+44h] [rbp-BCh]
  char v18; // [rsp+48h] [rbp-B8h]
  __int16 v19; // [rsp+4Ah] [rbp-B6h]
  __int64 v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  __int16 v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+8Ch] [rbp-74h]
  int v27; // [rsp+90h] [rbp-70h]
  void *v28; // [rsp+A0h] [rbp-60h] BYREF
  char v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+A9h] [rbp-57h] BYREF
  char v31; // [rsp+ADh] [rbp-53h]
  char v32; // [rsp+AEh] [rbp-52h] BYREF
  char v33; // [rsp+8A9h] [rbp+7A9h] BYREF
  int *v34; // [rsp+8B0h] [rbp+7B0h]
  char *v35; // [rsp+8B8h] [rbp+7B8h]
  char *v36; // [rsp+8C0h] [rbp+7C0h]

  if ( !*((_QWORD *)a1 + 3) )
  {
    v4 = a1 + 42;
    if ( *((_BYTE *)a1 + 160) != 3 || *v4 )
    {
      *((_BYTE *)a1 + 160) = 3;
      *((_WORD *)a1 + 81) = 16420;
      *v4 = 0LL;
    }
  }
  if ( !*((_BYTE *)a1 + 160)
    && tip2::details::evaluate_flags(
         (tip2::details *)(a1 + 2),
         *((const struct tip2::test_state **)a1 + 5),
         *((const struct tip2::test_requirement **)a1 + 7),
         *((const struct tip2::test_requirement **)a1 + 6)) )
  {
    (***(void (__fastcall ****)(_QWORD))a1)(*(_QWORD *)a1);
  }
  v5 = *((_BYTE *)a1 + 160);
  if ( v5 != 5 )
  {
    if ( v5 )
    {
      if ( (unsigned __int8)(v5 - 2) > 1u && ((a1[5] & 0x1000) == 0 || v5 == 4) )
        goto LABEL_16;
    }
    else
    {
      *((_BYTE *)a1 + 160) = 3;
      *((_WORD *)a1 + 81) = 16394;
      *((_QWORD *)a1 + 21) = 0LL;
    }
    if ( (a1[16] & 0x800) != 0 )
    {
      v6 = 1;
LABEL_17:
      v7 = v6;
      v8 = v6 | 2;
      if ( (a1[5] & 0x200) == 0 )
        v8 = v6;
      v28 = 0LL;
      v29 = 0;
      v34 = &v30;
      v36 = &v33;
      v30 = -2143256512;
      v31 = 0;
      v35 = &v32;
      if ( (a1[5] & 0x200) != 0 )
        v7 = 1;
      v9 = v8 | 4;
      if ( !v7 )
        v9 = v8;
      v10 = tip2::details::shared_data<1,1,1>::serialize_data(a1, &v28, v9);
      memset_0(&v13, 0, 0x78uLL);
      v11 = a1[45];
      if ( v11 )
        v13 = a1[45];
      else
        v13 = a1[4];
      v14 = *((_QWORD *)a1 + 3);
      v15 = a1[5];
      v16 = *((_OWORD *)a1 + 9);
      v17 = a1[16] | 0x200000;
      v18 = *((_BYTE *)a1 + 160);
      v19 = *((_WORD *)a1 + 81);
      v20 = *((_QWORD *)a1 + 21);
      v21 = a2;
      v22 = v10;
      v26 = a1[44];
      if ( v11 )
        v27 = a1[4];
      else
        v27 = 0;
      error = tip2::test_state::last_error((tip2::test_state *)(a1 + 2));
      if ( error )
      {
        v23 = *((_DWORD *)error + 2);
        v24 = *((_QWORD *)error + 7);
        v25 = *((_WORD *)error + 32);
      }
      TestReport((__int64)&v13);
      (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)a1 + 24LL))(*(_QWORD *)a1, &v13);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v28);
      return;
    }
LABEL_16:
    v6 = 0;
    goto LABEL_17;
  }
}
