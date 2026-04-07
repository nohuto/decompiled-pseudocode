/*
 * XREFs of ??$save_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tson@@YAXAEAVoutput_archive@0@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@Z @ 0x1800DFF28
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@2@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x1800DFBE8 (--$process@V-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAD.c)
 * Callees:
 *     ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z @ 0x18006EEF8 (-write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z.c)
 *     ??$?RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z @ 0x1800DF4E0 (--$-RUsize_tag@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAUsize_tag@1@@Z.c)
 *     ?make_string_tag@tson@@YA?AUansistring_tag@1@PEBD@Z @ 0x1800E2C38 (-make_string_tag@tson@@YA-AUansistring_tag@1@PEBD@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800E3D18 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

void __fastcall tson::save_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<char *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,char *,char *,0,std::nullptr_t>>>>(
        tson::output_archive *this,
        __int64 a2)
{
  _QWORD *v3; // r10
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __m128i *string_tag; // rax
  __int64 v7; // r8
  void *v8; // rbp
  __int64 v9; // rdx
  unsigned __int64 v10; // xmm0_8
  __m128i v11; // [rsp+20h] [rbp-58h]
  _BYTE v12[64]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+88h] [rbp+10h] BYREF

  v13 = *(_QWORD *)(a2 + 16);
  tson::output_archive::operator()<tson::size_tag>((__int64)this, &v13);
  v4 = (_QWORD *)*v3;
  v5 = *v3 + 8LL * v3[2];
  while ( v4 != (_QWORD *)v5 )
  {
    string_tag = (__m128i *)tson::make_string_tag(v12, *v4);
    LOBYTE(v7) = 23;
    v11 = *string_tag;
    v8 = (void *)string_tag->m128i_i64[0];
    LOBYTE(v9) = string_tag->m128i_i64[0] == 0;
    if ( (unsigned __int8)tson::output_archive::write_type(this, v9, v7) )
    {
      v10 = _mm_srli_si128(v11, 8).m128i_u64[0];
      tson::output_archive::write_string_bytes(this, v10, v8, v10);
    }
    ++v4;
  }
}
