/*
 * XREFs of ?deserialize_data@?$shared_data@$00$00$00@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x1803C2648
 * Callers:
 *     ?begin_update@?$shared_data@$00$00$00@details@tip2@@AEAA_NXZ @ 0x1803C2208 (-begin_update@-$shared_data@$00$00$00@details@tip2@@AEAA_NXZ.c)
 *     ?complete_helper@?$shared_data@$00$00$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1803C233C (-complete_helper@-$shared_data@$00$00$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ?end_update@?$shared_data@$00$00$00@details@tip2@@AEAAXXZ @ 0x1803C27DC (-end_update@-$shared_data@$00$00$00@details@tip2@@AEAAXXZ.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??0input_archive@tson@@QEAA@AEAVread_buffer@1@E@Z @ 0x1801833A4 (--0input_archive@tson@@QEAA@AEAVread_buffer@1@E@Z.c)
 *     ??0read_buffer@tson@@QEAA@PEBD@Z @ 0x1801D928C (--0read_buffer@tson@@QEAA@PEBD@Z.c)
 *     ?finish@input_archive@tson@@QEAAJXZ @ 0x18021AFC8 (-finish@input_archive@tson@@QEAAJXZ.c)
 *     ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x18028E69C (--$-RV-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_poli_ea_18028E69C.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$?RV?$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAUansistring_skip_tag@tson@@@1@@Z @ 0x180329B80 (--$-RV-$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA.c)
 *     ??$?RV?$nvp@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@1@@Z @ 0x180329C04 (--$-RV-$nvp@AEAV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPEAX@Z$1-CoTaskMemFr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall tip2::details::shared_data<1,1,1>::deserialize_data(_QWORD *a1, __int64 a2)
{
  _BYTE *v4; // rcx
  char v5; // [rsp+20h] [rbp-E0h] BYREF
  const char *v6; // [rsp+28h] [rbp-D8h] BYREF
  char v7; // [rsp+30h] [rbp-D0h]
  char *v8; // [rsp+38h] [rbp-C8h]
  const char *v9; // [rsp+40h] [rbp-C0h] BYREF
  char v10; // [rsp+48h] [rbp-B8h]
  _QWORD *v11; // [rsp+50h] [rbp-B0h]
  const char *v12; // [rsp+58h] [rbp-A8h] BYREF
  char v13; // [rsp+60h] [rbp-A0h]
  _QWORD *v14; // [rsp+68h] [rbp-98h]
  _BYTE v15[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v16[18]; // [rsp+90h] [rbp-70h] BYREF

  if ( (*(_DWORD *)(a2 + 20) & 0x1000) == 0 )
    goto LABEL_13;
  tson::read_buffer::read_buffer((tson::read_buffer *)v15, *(const char **)(a2 + 24));
  tson::input_archive::input_archive((tson::input_archive *)v16, (struct tson::read_buffer *)v15, *((_BYTE *)a1 + 33));
  if ( (*((_DWORD *)a1 + 5) & 0x40000) != 0 )
  {
    v7 = 4;
    v6 = "name";
    if ( a1[3] )
    {
      v5 = 0;
      v8 = &v5;
      tson::input_archive::operator()<tson::nvp<tson::ansistring_skip_tag &>>((tson::input_archive *)v16, (__int64)&v6);
    }
    else
    {
      v8 = (char *)(a1 + 1);
      tson::input_archive::operator()<tson::nvp<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>> &>>(
        (__int64)v16,
        (__int64)&v6);
      if ( a1[1] )
        a1[3] = a1[1];
    }
  }
  v6 = "flags";
  v7 = 5;
  v8 = (char *)(a1 + 15);
  v9 = "errors";
  v10 = 6;
  v11 = a1 + 9;
  v12 = "log";
  v13 = 3;
  v14 = a1 + 12;
  tson::input_archive::operator()<tson::nvp<tip2::vector_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>> &>,tson::nvp<tip2::vector_nothrow<wil::StoredFailureInfo> &>,tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(
    (tson *)v16,
    (__int64)&v12,
    (__int64 *)&v9);
  v4 = *(_BYTE **)(v16[0] + 8LL);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(v16[0] + 16LL) )
    goto LABEL_10;
  if ( *v4 == 8 )
    tson::input_archive::consume_expected_marker(v16, 8, -2147023267);
  else
LABEL_10:
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*a1 + 16LL))(*a1, v16);
  if ( (int)tson::input_archive::finish((tson::input_archive *)v16) >= 0 )
    *((_DWORD *)a1 + 46) = *(_DWORD *)(a2 + 16);
  else
LABEL_13:
    *((_DWORD *)a1 + 16) |= 0x80000u;
}
