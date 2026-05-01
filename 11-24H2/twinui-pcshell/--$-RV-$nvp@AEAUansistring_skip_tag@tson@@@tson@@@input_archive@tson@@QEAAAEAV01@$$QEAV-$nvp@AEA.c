/*
 * XREFs of ??$?RV?$nvp@AEAUansistring_skip_tag@tson@@@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAUansistring_skip_tag@tson@@@1@@Z @ 0x180329B80
 * Callers:
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x18028E47C (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@.c)
 *     ?deserialize_data@?$shared_data@$00$00$00@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x1803C2648 (-deserialize_data@-$shared_data@$00$00$00@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x1802C9BEC (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
 *     ?upgrade_string_size@input_archive@tson@@AEAAGE@Z @ 0x1802D0A50 (-upgrade_string_size@input_archive@tson@@AEAAGE@Z.c)
 */

tson::input_archive *__fastcall tson::input_archive::operator()<tson::nvp<tson::ansistring_skip_tag &>>(
        tson::input_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rcx
  unsigned __int16 v5; // ax
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v2;
  if ( tson::input_archive::search(this) )
  {
    tson::input_archive::consume_expected_marker(this, 23, -2147023267);
    v4 = *(_QWORD *)this;
    v9 = 0;
    tson::read_buffer::consume<unsigned char>(v4, &v9);
    if ( v9 > 1u )
    {
      v5 = tson::input_archive::upgrade_string_size(this, v9);
      v6 = *(_QWORD *)this;
      v7 = *(_QWORD *)(*(_QWORD *)this + 8LL) + (unsigned __int16)(v5 - 1);
      if ( v7 > *(_QWORD *)(*(_QWORD *)this + 16LL) )
        *(_BYTE *)(v6 + 24) = 1;
      else
        *(_QWORD *)(v6 + 8) = v7;
    }
  }
  return this;
}
