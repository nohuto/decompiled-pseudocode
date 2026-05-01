/*
 * XREFs of ??$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_buffer_tag@1@@Z @ 0x18032BD58
 * Callers:
 *     ??$process@V?$nvp@AEAUansistring_buffer_tag@tson@@@tson@@V?$nvp@AEAG@2@V12@V?$nvp@AEAI@2@V?$nvp@AEAUstring_buffer_tag@tson@@@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAUansistring_buffer_tag@tson@@@1@$$QEAV?$nvp@AEAG@1@0$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAUstring_buffer_tag@tson@@@1@0@Z @ 0x18032B014 (--$process@V-$nvp@AEAUansistring_buffer_tag@tson@@@tson@@V-$nvp@AEAG@2@V12@V-$nvp@AEAI@2@V-$nvp@.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180336F94 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$consume@E@read_buffer@tson@@QEAA_NAEAE@Z @ 0x1802C9BEC (--$consume@E@read_buffer@tson@@QEAA_NAEAE@Z.c)
 *     ?upgrade_string_size@input_archive@tson@@AEAAGE@Z @ 0x1802D0A50 (-upgrade_string_size@input_archive@tson@@AEAAGE@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180335E8C (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

char __fastcall tson::input_archive::read_string_buffer<tson::ansistring_buffer_tag>(
        tson::input_archive *this,
        unsigned __int8 a2,
        __int64 a3)
{
  _BYTE *v5; // rax
  __int64 v6; // rcx
  unsigned __int16 v7; // ax
  unsigned __int64 v8; // rbx
  unsigned __int16 v9; // ax
  tson::read_buffer *v10; // rcx
  _BYTE *v11; // rdx
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int8 v17; // [rsp+38h] [rbp+10h] BYREF

  v17 = a2;
  LOBYTE(v5) = tson::input_archive::search(this);
  if ( (_BYTE)v5 )
  {
    tson::input_archive::consume_expected_marker(this, 23, -2147023267);
    v6 = *(_QWORD *)this;
    v17 = 0;
    tson::read_buffer::consume<unsigned char>(v6, &v17);
    if ( v17 > 1u )
    {
      v7 = tson::input_archive::upgrade_string_size(this, v17);
      v8 = *(_QWORD *)(a3 + 8);
      v9 = v7 - 1;
      v10 = *(tson::read_buffer **)this;
      v11 = *(_BYTE **)a3;
      v12 = v9;
      if ( v9 >= v8 )
      {
        v13 = v8 - 1;
        tson::read_buffer::consume_n(v10, v11, v13);
        v5 = *(_BYTE **)a3;
        *(_BYTE *)(v13 + *(_QWORD *)a3) = 0;
        v14 = *(_QWORD *)this;
        v15 = v12 + *(_QWORD *)(*(_QWORD *)this + 8LL) - v13;
        if ( v15 > *(_QWORD *)(*(_QWORD *)this + 16LL) )
          *(_BYTE *)(v14 + 24) = 1;
        else
          *(_QWORD *)(v14 + 8) = v15;
      }
      else
      {
        tson::read_buffer::consume_n(v10, v11, v9);
        v5 = *(_BYTE **)a3;
        *(_BYTE *)(v12 + *(_QWORD *)a3) = 0;
      }
    }
    else
    {
      v5 = *(_BYTE **)a3;
      **(_BYTE **)a3 = 0;
    }
  }
  return (char)v5;
}
