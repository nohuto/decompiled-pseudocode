/*
 * XREFs of ??$process@V?$nvp@AEAJ@tson@@V?$nvp@AEA_N@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEA_N@1@@Z @ 0x18032AF68
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@0@Z @ 0x18032BB24 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@2@V?$nvp@AEAJ@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$vector@KV?$allocator@K@std@@@std@@@1@$$QEAV?$nvp@AEAJ@1@0@Z @ 0x1805FEFDC (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$vector@KV-$allocator@K@std@@@std@@@2@V-$nvp@AEAJ@2@V1.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x18032AF04 (--$process@V-$nvp@AEAJ@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<long &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3)
{
  char v5; // dl
  _BYTE *v6; // rbx
  __int64 v7; // rdx
  char *v8; // rax
  char v9; // cl

  tson::input_archive::process<tson::nvp<long &>>((__int64)this, a2);
  v5 = *(_BYTE *)(a3 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a3;
  *((_BYTE *)this + 24) = v5;
  v6 = *(_BYTE **)(a3 + 16);
  if ( !tson::input_archive::search(this) )
  {
    LOBYTE(v8) = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v7 = *(_QWORD *)this;
  v8 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v8 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v9 = *v8;
    *(_QWORD *)(v7 + 8) = v8 + 1;
    LOBYTE(v8) = v9 != 0;
LABEL_6:
    *v6 = (_BYTE)v8;
    return (char)v8;
  }
  *(_BYTE *)(v7 + 24) = 1;
  return (char)v8;
}
