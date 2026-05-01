/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAI@2@V32@V?$nvp@AEAJ@2@V42@V42@V42@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAI@1@1$$QEAV?$nvp@AEAJ@1@222@Z @ 0x1805936DC
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAI@2@V32@V?$nvp@AEAJ@2@V42@V42@V42@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAI@1@1$$QEAV?$nvp@AEAJ@1@222@Z @ 0x18059360C (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAI@2@V32@V-$nvp@AEAJ@2@V42@V42@V42@@input_archive@tso.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18032AEA0 (--$process@V-$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 */

bool __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v8; // r10
  bool *v12; // rdi
  __int64 v13; // rdx
  char *v14; // rax
  char v15; // cl
  bool v16; // al

  v8 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v8;
  v12 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    v16 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker((_DWORD *)a1, 10, -2147023267);
  v13 = *(_QWORD *)a1;
  v14 = *(char **)(*(_QWORD *)a1 + 8LL);
  if ( (unsigned __int64)v14 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v15 = *v14;
    *(_QWORD *)(v13 + 8) = v14 + 1;
    v16 = v15 != 0;
LABEL_6:
    *v12 = v16;
    goto LABEL_7;
  }
  *(_BYTE *)(v13 + 24) = 1;
LABEL_7:
  tson::input_archive::process<tson::nvp<unsigned int &>>(a1, a3);
  return tson::input_archive::process<tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>,tson::nvp<long &>>(
           a1,
           a4,
           a5,
           a6,
           a7,
           a8);
}
