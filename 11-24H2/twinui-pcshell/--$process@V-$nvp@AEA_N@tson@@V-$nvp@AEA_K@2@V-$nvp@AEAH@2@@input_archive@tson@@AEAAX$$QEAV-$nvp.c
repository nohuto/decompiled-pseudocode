/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEA_K@2@V?$nvp@AEAH@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEA_K@1@$$QEAV?$nvp@AEAH@1@@Z @ 0x1806479E0
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_FileMappingTipTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180647C38 (--$serialize@Vinput_archive@tson@@@_tip_FileMappingTipTest@@QEAAXAEAVinput_archive@tson@@@Z.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_K@1@@Z @ 0x18032B188 (--$process@V-$nvp@AEA_K@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_K@1@@Z.c)
 */

tson::input_archive *__fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<unsigned __int64 &>,tson::nvp<int &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  char v4; // r10
  bool *v8; // rsi
  __int64 v9; // rdx
  char *v10; // rax
  char v11; // cl
  bool v12; // al
  __int64 v13; // rax

  v4 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v4;
  v8 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    v12 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker((_DWORD *)a1, 10, -2147023267);
  v9 = *(_QWORD *)a1;
  v10 = *(char **)(*(_QWORD *)a1 + 8LL);
  if ( (unsigned __int64)v10 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v11 = *v10;
    *(_QWORD *)(v9 + 8) = v10 + 1;
    v12 = v11 != 0;
LABEL_6:
    *v8 = v12;
    goto LABEL_7;
  }
  *(_BYTE *)(v9 + 24) = 1;
LABEL_7:
  tson::input_archive::process<tson::nvp<unsigned __int64 &>>(a1, a3);
  v13 = *a4;
  *(_BYTE *)(a1 + 24) = *((_BYTE *)a4 + 8);
  *(_QWORD *)(a1 + 16) = v13;
  return tson::input_archive::operator()<int &>((tson::input_archive *)a1, (_DWORD *)a4[2]);
}
