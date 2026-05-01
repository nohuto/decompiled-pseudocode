/*
 * XREFs of ??$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_tag@1@@Z @ 0x180183088
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180182FE4 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 *     ??$read_cotaskmem_string@Ustring_tag@tson@@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@input_archive@tson@@AEAAXAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18032BCB4 (--$read_cotaskmem_string@Ustring_tag@tson@@V-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1806AF494 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAV-$basic_string@_WU-$char_traits@_W@std@@V-$alloca.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028C6A4 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?upgrade_string_size@input_archive@tson@@AEAAGE@Z @ 0x1802D0A50 (-upgrade_string_size@input_archive@tson@@AEAAGE@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180335E8C (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall tson::input_archive::read_string_two_phase<tson::string_tag>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3)
{
  unsigned __int8 v3; // di
  void *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 *v9; // rax
  __int64 v10; // r8

  v3 = 0;
  if ( *(_BYTE *)(a3 + 16) )
  {
    if ( !*(_QWORD *)a3 || (v10 = *(_QWORD *)(a3 + 8)) == 0 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(this);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, *(void **)a3, 2 * v10 - 2);
    v6 = *(void **)a3;
    *(_WORD *)(*(_QWORD *)a3 + 2LL * *(_QWORD *)(a3 + 8) - 2) = 0;
  }
  else
  {
    *(_BYTE *)(a3 + 16) = 1;
    LOBYTE(v6) = tson::input_archive::search(this);
    if ( (_BYTE)v6 )
    {
      LOBYTE(v7) = 24;
      tson::input_archive::consume_expected_marker(this, v7, 2147944029LL);
      v8 = *(_QWORD *)this;
      v9 = *(unsigned __int8 **)(*(_QWORD *)this + 8LL);
      if ( (unsigned __int64)v9 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
      {
        *(_BYTE *)(v8 + 24) = 1;
      }
      else
      {
        v3 = *v9;
        *(_QWORD *)(v8 + 8) = v9 + 1;
      }
      LOWORD(v6) = tson::input_archive::upgrade_string_size(this, v3);
      *(_QWORD *)(a3 + 8) = (unsigned __int16)v6;
    }
  }
  return (char)v6;
}
