/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAH@2@V32@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@10$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18064790C
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAH@2@V32@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAH@1@10$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18064776C (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAH@2@V32@V12@V-$nvp@AEAV-$basic_string@GU-$char_trait.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x180467D48 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 */

_WORD *__fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<std::wstring &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 *a6)
{
  char v6; // r10
  bool *v10; // rdi
  __int64 v11; // rdx
  char *v12; // rax
  char v13; // cl
  bool v14; // al
  __int64 v15; // rax
  __int64 v16; // rax

  v6 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v6;
  v10 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v14 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v11 = *(_QWORD *)this;
  v12 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v12 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v13 = *v12;
    *(_QWORD *)(v11 + 8) = v12 + 1;
    v14 = v13 != 0;
LABEL_6:
    *v10 = v14;
    goto LABEL_7;
  }
  *(_BYTE *)(v11 + 24) = 1;
LABEL_7:
  v15 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v15;
  tson::input_archive::operator()<int &>(this, (_DWORD *)a3[2]);
  v16 = *a4;
  *((_BYTE *)this + 24) = *((_BYTE *)a4 + 8);
  *((_QWORD *)this + 2) = v16;
  tson::input_archive::operator()<int &>(this, (_DWORD *)a4[2]);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>>(this, a5, a6);
}
