/*
 * XREFs of ?serialize_properties@test_data_dynamic@tip2@@AEAAXAEAVoutput_archive@tson@@@Z @ 0x1803C4824
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@test_data_dynamic@tip2@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1803B4608 (--$serialize@Voutput_archive@tson@@@test_data_dynamic@tip2@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 * Callees:
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800DE5DC (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?top@?$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3@XZ @ 0x18014EC64 (-top@-$stack@W4node_type@output_archive@tson@@@details@tson@@QEAAAEAW4node_type@output_archive@3.c)
 *     ??$push_back@W4archive_marker@details@tson@@@write_buffer@tson@@QEAA_NAEBW4archive_marker@details@1@@Z @ 0x180169574 (--$push_back@W4archive_marker@details@tson@@@write_buffer@tson@@QEAA_NAEBW4archive_marker@detail.c)
 */

void __fastcall tip2::test_data_dynamic::serialize_properties(
        tip2::test_data_dynamic *this,
        struct tson::output_archive *a2)
{
  void **v2; // rdi
  _DWORD *v4; // rax
  __int64 v5; // r8
  char *v6; // rdx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void **)*((_QWORD *)a2 + 18);
  if ( *((_QWORD *)this + 13) )
  {
    v4 = (_DWORD *)tson::details::stack<enum tson::output_archive::node_type>::top((__int64)a2 + 24);
    v7 = 1;
    *v4 = 1;
    tson::write_buffer::push_back<enum tson::details::archive_marker>(*(tson::write_buffer **)(v5 + 144), &v7);
    v6 = (char *)*((_QWORD *)this + 14);
    if ( !v6 )
      v6 = (char *)this + 120;
    tson::write_buffer::push_back(v2, v6, *((_QWORD *)this + 13));
  }
}
