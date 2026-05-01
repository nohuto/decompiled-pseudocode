/*
 * XREFs of ?serialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180287FFC
 * Callers:
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028BA2C (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180291E38 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?evaluate_and_report@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1803366B0 (-evaluate_and_report@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800DCD78 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1800DD010 (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uansistring_tag@1@@Z @ 0x1800DD2F4 (--$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uans.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DE2FC (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DED7C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?top@?$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3@XZ @ 0x18014EC64 (-top@-$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3.c)
 *     ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x180182DEC (--0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z.c)
 *     ?finish@write_buffer@tson@@QEAAJXZ @ 0x180194394 (-finish@write_buffer@tson@@QEAAJXZ.c)
 *     ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x1802887D0 (--$save_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180338184 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip2::details::shared_data<1,0,0>::serialize_data(
        __int64 *a1,
        struct tson::write_buffer *a2,
        unsigned int a3)
{
  _BYTE *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  int v11; // eax
  struct tson::output_archive *v12; // rbx
  struct tson::output_archive *v13; // rsi
  struct wil::StoredFailureInfo *v14; // r8
  unsigned __int64 v15; // rdx
  int v16; // eax
  struct tson::output_archive *v17; // rbx
  struct tson::output_archive *v18; // rsi
  struct tip2::test_flag *v19; // r8
  __int64 v20; // rcx
  __int128 v22; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v23; // [rsp+40h] [rbp-C0h]
  __int128 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h]
  const char *v26; // [rsp+70h] [rbp-90h] BYREF
  char v27; // [rsp+78h] [rbp-88h]
  __int16 v28; // [rsp+7Ah] [rbp-86h]
  _BYTE v29[112]; // [rsp+88h] [rbp-78h] BYREF
  int v30; // [rsp+F8h] [rbp-8h]
  tson::write_buffer *v31; // [rsp+100h] [rbp+0h]

  if ( !a3 )
    return 0LL;
  v6 = (char *)a1 + 33;
  tson::output_archive::output_archive((tson::output_archive *)&v26, a2, *((_BYTE *)a1 + 33));
  if ( (a3 & 4) != 0 && *v6 )
  {
    *(_QWORD *)&v22 = "version";
    BYTE8(v22) = 7;
    v23 = v6;
    tson::output_archive::operator()<tson::nvp<unsigned char &>>((tson::output_archive *)&v26, (__int64)&v22);
  }
  if ( (a3 & 1) != 0 )
  {
    if ( (*((_DWORD *)a1 + 5) & 0x40000) == 0 )
    {
LABEL_15:
      v26 = "log";
      v27 = 3;
      tson::output_archive::startNode((tson::output_archive *)&v26);
      tson::save_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>>(
        &v26,
        a1 + 12);
      tson::output_archive::finishNode((tson::output_archive *)&v26);
      v26 = "errors";
      v27 = 6;
      tson::output_archive::startNode((tson::output_archive *)&v26);
      *(_DWORD *)tson::details::stack<enum tson::output_archive::node_type>::top((__int64)v29) = 2;
      if ( v10 > 0xFFFF )
      {
        v11 = v30;
        if ( v30 >= 0 )
          v11 = -2147483637;
        v30 = v11;
      }
      v28 = v10;
      v12 = (struct tson::output_archive *)a1[9];
      v13 = (struct tson::output_archive *)((char *)v12 + 168 * a1[11]);
      while ( v12 != v13 )
      {
        tson::output_archive::startNode((tson::output_archive *)&v26);
        tson::save_nothrow((tson *)&v26, v12, v14);
        tson::output_archive::finishNode((tson::output_archive *)&v26);
        v12 = (struct tson::output_archive *)((char *)v12 + 168);
      }
      tson::output_archive::finishNode((tson::output_archive *)&v26);
      v26 = "flags";
      v27 = 5;
      tson::output_archive::startNode((tson::output_archive *)&v26);
      *(_DWORD *)tson::details::stack<enum tson::output_archive::node_type>::top((__int64)v29) = 2;
      if ( v15 > 0xFFFF )
      {
        v16 = v30;
        if ( v30 >= 0 )
          v16 = -2147483637;
        v30 = v16;
      }
      v28 = v15;
      v17 = (struct tson::output_archive *)a1[15];
      v18 = (struct tson::output_archive *)((char *)v17 + 104 * a1[17]);
      while ( v17 != v18 )
      {
        tson::output_archive::startNode((tson::output_archive *)&v26);
        tson::save_nothrow((tson *)&v26, v17, v19);
        tson::output_archive::finishNode((tson::output_archive *)&v26);
        v17 = (struct tson::output_archive *)((char *)v17 + 104);
      }
      tson::output_archive::finishNode((tson::output_archive *)&v26);
      goto LABEL_30;
    }
    v8 = a1[1];
    if ( v8 )
    {
      *(_QWORD *)&v22 = a1[1];
    }
    else
    {
      v8 = a1[3];
      *(_QWORD *)&v22 = v8;
      if ( !v8 )
      {
        v22 = 0uLL;
LABEL_14:
        v23 = 0LL;
        v26 = "name";
        v27 = 4;
        v24 = v22;
        v25 = 0LL;
        tson::output_archive::write_string<tson::ansistring_tag>((__int64)&v26, v7, (const void **)&v24);
        goto LABEL_15;
      }
    }
    v9 = -1LL;
    do
      ++v9;
    while ( *(_BYTE *)(v8 + v9) );
    *((_QWORD *)&v22 + 1) = v9;
    goto LABEL_14;
  }
LABEL_30:
  v20 = *a1;
  if ( tip2::details::g_test_interface_exception_guard )
  {
    if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, const char **, _QWORD, _QWORD, _QWORD))tip2::details::g_test_interface_exception_guard)(
                             v20,
                             &v26,
                             a3,
                             0LL,
                             0LL) )
    {
      *((_BYTE *)a1 + 160) = 3;
      *((_WORD *)a1 + 81) = 16396;
      a1[21] = 0LL;
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, const char **, _QWORD))(*(_QWORD *)v20 + 8LL))(v20, &v26, a3);
  }
  if ( v30 >= 0 && !v29[0] && (int)tson::write_buffer::finish(v31) >= 0 )
    return *((_QWORD *)a2 + 258);
  *((_DWORD *)a1 + 16) |= 0x100000u;
  return 0LL;
}
