/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@00000@Z @ 0x1803B314C
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@00000@Z @ 0x1803B3758 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$a_ea_1803B3758.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAI@2@V?$nvp@AEAJ@2@V12@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAJ@1@00000@Z @ 0x1803B3510 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAI@2@V-$nvp@AEAJ@2@V12@V12@V12@V12@V12@@input_archive@tso.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        __int64 *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  char v10; // r10
  bool *v14; // rdi
  __int64 v15; // rdx
  char *v16; // rax
  char v17; // cl
  bool v18; // al

  v10 = *(_BYTE *)(a2 + 8);
  a1[2] = *(_QWORD *)a2;
  *((_BYTE *)a1 + 24) = v10;
  v14 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    v18 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(a1, 10, -2147023267);
  v15 = *a1;
  v16 = *(char **)(*a1 + 8);
  if ( (unsigned __int64)v16 < *(_QWORD *)(*a1 + 16) )
  {
    v17 = *v16;
    *(_QWORD *)(v15 + 8) = v16 + 1;
    v18 = v17 != 0;
LABEL_6:
    *v14 = v18;
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
             (_DWORD)a1,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10);
  }
  *(_BYTE *)(v15 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<long &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           (_DWORD)a1,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10);
}
