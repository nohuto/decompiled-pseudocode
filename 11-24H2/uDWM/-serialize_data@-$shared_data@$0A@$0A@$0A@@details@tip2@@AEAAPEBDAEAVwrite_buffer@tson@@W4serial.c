/*
 * XREFs of ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180097D50
 * Callers:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18004C30C (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1800885A0 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1800E25F0 (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1800DF52C (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$?RV?$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@Uansistring_tag@tson@@@1@@Z @ 0x1800DF580 (--$-RV-$nvp@Uansistring_tag@tson@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@Uansistrin.c)
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@2@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x1800DFBE8 (--$process@V-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAD.c)
 *     ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z @ 0x1800E0554 (--0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z.c)
 *     ?finish@write_buffer@tson@@QEAAJXZ @ 0x1800E2960 (-finish@write_buffer@tson@@QEAAJXZ.c)
 *     ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z @ 0x1800E2C38 (-make_string_tag@tson@@YA-AUansistring_tag@1@PEBD@Z.c)
 *     ?serialize@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800E3864 (-serialize@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEAVoutput_archive@tson@@W4serialize_op.c)
 */

__int64 __fastcall tip2::details::shared_data<0,0,0>::serialize_data(
        __int64 a1,
        struct tson::write_buffer *a2,
        unsigned int a3)
{
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  __int64 string_tag; // rax
  __int64 v9; // xmm1_8
  const char *v11; // [rsp+20h] [rbp-E0h] BYREF
  char v12; // [rsp+28h] [rbp-D8h]
  _BYTE *v13; // [rsp+30h] [rbp-D0h]
  const char *v14; // [rsp+38h] [rbp-C8h] BYREF
  char v15; // [rsp+40h] [rbp-C0h]
  __int128 v16; // [rsp+48h] [rbp-B8h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  const char *v18; // [rsp+60h] [rbp-A0h] BYREF
  char v19; // [rsp+68h] [rbp-98h]
  __int64 v20; // [rsp+70h] [rbp-90h]
  _BYTE v21[136]; // [rsp+80h] [rbp-80h] BYREF
  int v22; // [rsp+108h] [rbp+8h]
  tson::write_buffer *v23; // [rsp+110h] [rbp+10h]

  if ( a3 )
  {
    v6 = (_BYTE *)(a1 + 33);
    tson::output_archive::output_archive((tson::output_archive *)v21, a2, *(_BYTE *)(a1 + 33));
    if ( (a3 & 4) != 0 && *v6 )
    {
      v12 = 7;
      v11 = "version";
      v13 = v6;
      tson::output_archive::operator()<tson::nvp<unsigned char &>>(v21, &v11);
    }
    if ( (a3 & 1) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 20) & 0x40000) != 0 )
      {
        v7 = *(_QWORD *)(a1 + 8);
        if ( !v7 )
          v7 = *(_QWORD *)(a1 + 24);
        string_tag = tson::make_string_tag(&v18, v7);
        v15 = 4;
        v14 = "name";
        v9 = *(_QWORD *)(string_tag + 16);
        v16 = *(_OWORD *)string_tag;
        v17 = v9;
        tson::output_archive::operator()<tson::nvp<tson::ansistring_tag>>(v21, &v14);
      }
      v12 = 5;
      v11 = "flags";
      v15 = 6;
      v13 = (_BYTE *)(a1 + 120);
      v19 = 3;
      v14 = "errors";
      *(_QWORD *)&v16 = a1 + 72;
      v18 = "log";
      v20 = a1 + 96;
      tson::output_archive::process<tson::nvp<tip2::vector_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>> &>,tson::nvp<tip2::vector_nothrow<wil::StoredFailureInfo> &>,tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>((tson::output_archive *)v21);
    }
    tip2::details::shared_data<0,0,0>::serialize(a1, v21, a3);
    if ( v22 >= 0 && !v21[24] && (int)tson::write_buffer::finish(v23) >= 0 )
      return *((_QWORD *)a2 + 258);
    *(_DWORD *)(a1 + 64) |= 0x100000u;
  }
  return 0LL;
}
