/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAI@2@V?$nvp@AEAH@2@V12@V?$nvp@AEAW4keyPressType@@@2@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4keyPressType@@@1@000@Z @ 0x1806206A4
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAI@2@V?$nvp@AEAH@2@V12@V?$nvp@AEAW4keyPressType@@@2@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4keyPressType@@@1@000@Z @ 0x1806203CC (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAI@2@V-$nvp@AEAH@2@V12@V-$nvp@AEAW4keyPressType@@@2@V.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x18032AEA0 (--$process@V-$nvp@AEAI@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x180467D48 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<enum keyPressType &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  char v9; // r10
  bool *v13; // rdi
  __int64 v14; // rdx
  char *v15; // rax
  char v16; // cl
  bool v17; // al
  __int64 v18; // rax

  v9 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v9;
  v13 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v17 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v14 = *(_QWORD *)this;
  v15 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v15 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v16 = *v15;
    *(_QWORD *)(v14 + 8) = v15 + 1;
    v17 = v16 != 0;
LABEL_6:
    *v13 = v17;
    goto LABEL_7;
  }
  *(_BYTE *)(v14 + 24) = 1;
LABEL_7:
  tson::input_archive::process<tson::nvp<unsigned int &>>((__int64)this, a3);
  v18 = *a4;
  *((_BYTE *)this + 24) = *((_BYTE *)a4 + 8);
  *((_QWORD *)this + 2) = v18;
  tson::input_archive::operator()<int &>(this, (_DWORD *)a4[2]);
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<enum keyPressType &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           this,
           a8,
           a9);
}
