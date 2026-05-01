/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAH@2@V12@V12@V12@V12@V12@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAH@1@0000000000@Z @ 0x18046B018
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18046B3EC (--$serialize@Vinput_archive@tson@@@_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingT.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x180467D48 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000000@Z @ 0x18046A874 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QE.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 *a13)
{
  char v13; // r10
  bool *v17; // rdi
  __int64 v18; // rdx
  char *v19; // rax
  char v20; // cl
  bool v21; // al
  __int64 v22; // rax

  v13 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v13;
  v17 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    v21 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker((_DWORD *)a1, 10, -2147023267);
  v18 = *(_QWORD *)a1;
  v19 = *(char **)(*(_QWORD *)a1 + 8LL);
  if ( (unsigned __int64)v19 < *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
  {
    v20 = *v19;
    *(_QWORD *)(v18 + 8) = v19 + 1;
    v21 = v20 != 0;
LABEL_6:
    *v17 = v21;
    goto LABEL_7;
  }
  *(_BYTE *)(v18 + 24) = 1;
LABEL_7:
  v22 = *a3;
  *(_BYTE *)(a1 + 24) = *((_BYTE *)a3 + 8);
  *(_QWORD *)(a1 + 16) = v22;
  tson::input_archive::operator()<int &>((tson::input_archive *)a1, (_DWORD *)a3[2]);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a1,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13);
}
