/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$nvp@AEAW4SwitchType@@@2@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4SwitchType@@@1@0000@Z @ 0x18055183C
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$nvp@AEAW4SwitchType@@@2@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4SwitchType@@@1@0000@Z @ 0x180551758 (--$process@V-$nvp@AEA_N@tson@@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@s_ea_180551758.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$nvp@AEAW4SwitchType@@@2@V12@V12@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4SwitchType@@@1@0000@Z @ 0x18055190C (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$a_ea_18055190C.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<enum SwitchType &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  char v9; // r10
  bool *v11; // rdi
  __int64 v12; // rdx
  char *v13; // rax
  char v14; // cl
  bool v15; // al

  v9 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v9;
  v11 = *(bool **)(a2 + 16);
  if ( !tson::input_archive::search(this) )
  {
    v15 = 0;
    goto LABEL_6;
  }
  tson::input_archive::consume_expected_marker(this, 10, -2147023267);
  v12 = *(_QWORD *)this;
  v13 = *(char **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v13 < *(_QWORD *)(*(_QWORD *)this + 16LL) )
  {
    v14 = *v13;
    *(_QWORD *)(v12 + 8) = v13 + 1;
    v15 = v14 != 0;
LABEL_6:
    *v11 = v15;
    return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<enum SwitchType &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
             this,
             a6,
             a7,
             a8,
             a9);
  }
  *(_BYTE *)(v12 + 24) = 1;
  return tson::input_archive::process<tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<enum SwitchType &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           this,
           a6,
           a7,
           a8,
           a9);
}
