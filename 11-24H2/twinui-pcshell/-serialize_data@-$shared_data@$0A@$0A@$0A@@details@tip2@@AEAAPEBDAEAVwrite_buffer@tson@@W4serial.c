/*
 * XREFs of ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180288404
 * Callers:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028A6E4 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028B034 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1803C3790 (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x1800DCD78 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 *     ??$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uansistring_tag@1@@Z @ 0x1800DD2F4 (--$write_string@Uansistring_tag@tson@@@output_archive@tson@@AEAAXW4archive_marker@details@1@Uans.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DD78C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800DE248 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DE2FC (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800DEA48 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DED7C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?top@?$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3@XZ @ 0x18014EC64 (-top@-$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3.c)
 *     ?finish@write_buffer@tson@@QEAAJXZ @ 0x180194394 (-finish@write_buffer@tson@@QEAAJXZ.c)
 *     ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x1802887D0 (--$save_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemF.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180338184 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall tip2::details::shared_data<0,0,0>::serialize_data(
        __int64 *a1,
        tson::write_buffer *a2,
        unsigned int a3)
{
  char v6; // r14
  __int64 v7; // rdx
  tson::write_buffer *v8; // rbx
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  int v13; // eax
  struct tson::output_archive *v14; // rbx
  struct tson::output_archive *v15; // r14
  struct wil::StoredFailureInfo *v16; // r8
  unsigned __int64 v17; // rdx
  int v18; // eax
  struct tson::output_archive *v19; // rbx
  struct tson::output_archive *v20; // r14
  struct tip2::test_flag *v21; // r8
  __int64 v22; // rcx
  char v24[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+38h] [rbp-C8h]
  char v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+49h] [rbp-B7h]
  __int16 v28; // [rsp+4Dh] [rbp-B3h]
  char v29; // [rsp+4Fh] [rbp-B1h]
  __int128 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h]
  const char *v32; // [rsp+70h] [rbp-90h] BYREF
  char v33; // [rsp+78h] [rbp-88h]
  __int16 v34; // [rsp+7Ah] [rbp-86h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  _BYTE v36[4]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v37[25]; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned __int64 v38; // [rsp+F0h] [rbp-10h]
  int v39; // [rsp+F8h] [rbp-8h]
  tson::write_buffer *v40; // [rsp+100h] [rbp+0h]

  if ( !a3 )
    return 0LL;
  v6 = *((_BYTE *)a1 + 33);
  v32 = 0LL;
  v33 = 0;
  v34 = 0;
  v35 = 0LL;
  v36[0] = 0;
  memset_0(v37, 0, sizeof(v37));
  v38 = 0LL;
  v39 = 0;
  v40 = a2;
  if ( *((_QWORD *)a2 + 259) < *((_QWORD *)a2 + 260) || tson::write_buffer::reserve(a2, 1uLL) )
    *(_BYTE *)(*((_QWORD *)a2 + 259))++ = 0x80;
  v8 = v40;
  if ( *((_QWORD *)v40 + 259) < *((_QWORD *)v40 + 260) || tson::write_buffer::reserve(v40, 1uLL) )
    *(_BYTE *)(*((_QWORD *)v8 + 259))++ = v6;
  if ( v38 >= 0x19 )
    v36[0] = 1;
  else
    v37[v38++] = 1;
  if ( (a3 & 4) != 0 )
  {
    v9 = *((_BYTE *)a1 + 33);
    if ( v9 )
    {
      v32 = "version";
      v33 = 7;
      v24[0] = v9;
      if ( tson::output_archive::write_type((__int64)&v32, 0, 12) )
        tson::write_buffer::push_back<unsigned char>((__int64)v40, v24);
    }
  }
  if ( (a3 & 1) != 0 )
  {
    if ( (*((_DWORD *)a1 + 5) & 0x40000) == 0 )
    {
LABEL_25:
      v32 = "log";
      v33 = 3;
      tson::output_archive::startNode((tson::output_archive *)&v32);
      tson::save_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>>(
        &v32,
        a1 + 12);
      tson::output_archive::finishNode((tson::output_archive *)&v32);
      v32 = "errors";
      v33 = 6;
      tson::output_archive::startNode((tson::output_archive *)&v32);
      *(_DWORD *)tson::details::stack<enum tson::output_archive::node_type>::top((__int64)v36) = 2;
      if ( v12 > 0xFFFF )
      {
        v13 = v39;
        if ( v39 >= 0 )
          v13 = -2147483637;
        v39 = v13;
      }
      v34 = v12;
      v14 = (struct tson::output_archive *)a1[9];
      v15 = (struct tson::output_archive *)((char *)v14 + 168 * a1[11]);
      while ( v14 != v15 )
      {
        tson::output_archive::startNode((tson::output_archive *)&v32);
        tson::save_nothrow((tson *)&v32, v14, v16);
        tson::output_archive::finishNode((tson::output_archive *)&v32);
        v14 = (struct tson::output_archive *)((char *)v14 + 168);
      }
      tson::output_archive::finishNode((tson::output_archive *)&v32);
      v32 = "flags";
      v33 = 5;
      tson::output_archive::startNode((tson::output_archive *)&v32);
      *(_DWORD *)tson::details::stack<enum tson::output_archive::node_type>::top((__int64)v36) = 2;
      if ( v17 > 0xFFFF )
      {
        v18 = v39;
        if ( v39 >= 0 )
          v18 = -2147483637;
        v39 = v18;
      }
      v34 = v17;
      v19 = (struct tson::output_archive *)a1[15];
      v20 = (struct tson::output_archive *)((char *)v19 + 104 * a1[17]);
      while ( v19 != v20 )
      {
        tson::output_archive::startNode((tson::output_archive *)&v32);
        tson::save_nothrow((tson *)&v32, v19, v21);
        tson::output_archive::finishNode((tson::output_archive *)&v32);
        v19 = (struct tson::output_archive *)((char *)v19 + 104);
      }
      tson::output_archive::finishNode((tson::output_archive *)&v32);
      goto LABEL_40;
    }
    v10 = a1[1];
    if ( v10 )
    {
      *(_QWORD *)&v25 = a1[1];
    }
    else
    {
      v10 = a1[3];
      *(_QWORD *)&v25 = v10;
      if ( !v10 )
      {
        v25 = 0uLL;
LABEL_24:
        v26 = 0;
        v27 = 0;
        v28 = 0;
        v29 = 0;
        v32 = "name";
        v33 = 4;
        v30 = v25;
        v31 = 0LL;
        tson::output_archive::write_string<tson::ansistring_tag>((__int64)&v32, v7, (const void **)&v30);
        goto LABEL_25;
      }
    }
    v11 = -1LL;
    do
      ++v11;
    while ( *(_BYTE *)(v10 + v11) );
    *((_QWORD *)&v25 + 1) = v11;
    goto LABEL_24;
  }
LABEL_40:
  v22 = *a1;
  if ( tip2::details::g_test_interface_exception_guard )
  {
    if ( !(unsigned __int8)((__int64 (__fastcall *)(__int64, const char **, _QWORD, _QWORD, _QWORD))tip2::details::g_test_interface_exception_guard)(
                             v22,
                             &v32,
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
    (*(void (__fastcall **)(__int64, const char **, _QWORD))(*(_QWORD *)v22 + 8LL))(v22, &v32, a3);
  }
  if ( v39 >= 0 && !v36[0] && (int)tson::write_buffer::finish(v40) >= 0 )
    return *((_QWORD *)a2 + 258);
  *((_DWORD *)a1 + 16) |= 0x100000u;
  return 0LL;
}
