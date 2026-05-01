/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAJ@2@V?$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAI@1@0020000@Z @ 0x18045B814
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V?$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAJ@1@1110001$$QEAV?$nvp@AEAI@1@0020000@Z @ 0x18045BF1C (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAJ@2@V32@V32@V32@V12@V12@V12@V32@V-$nvp@AEAI@2@V12@V12@V4.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V?$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAI@1@0020000@Z @ 0x18045BC68 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAJ@2@V-$nvp@AEAI@2@V12@V12@V42@V12@V12@V12@V12@@input.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  char v13; // r10
  bool *v17; // rdi
  __int64 v18; // rdx
  char *v19; // rax
  char v20; // cl
  bool v21; // al

  v13 = *(_BYTE *)(a2 + 8);
  a1[2] = *(_QWORD *)a2;
  *((_BYTE *)a1 + 24) = v13;
  v17 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    v21 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(a1, 10, -2147023267);
  v18 = *a1;
  v19 = *(char **)(*a1 + 8);
  if ( (unsigned __int64)v19 < *(_QWORD *)(*a1 + 16) )
  {
    v20 = *v19;
    *(_QWORD *)(v18 + 8) = v19 + 1;
    v21 = v20 != 0;
LABEL_6:
    *v17 = v21;
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
             (_DWORD)a1,
             a3,
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
  *(_BYTE *)(v18 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           (_DWORD)a1,
           a3,
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
