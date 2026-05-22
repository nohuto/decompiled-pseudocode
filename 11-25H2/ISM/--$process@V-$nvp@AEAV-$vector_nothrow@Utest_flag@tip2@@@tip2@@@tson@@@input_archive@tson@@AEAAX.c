/*
 * XREFs of ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x180105454
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180105814 (--$serialize@Vinput_archive@tson@@@stored_flag_requirements@details@tip2@@QEAAXAEAVinput_archive.c)
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1800A7614 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180105298 (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 */

void __fastcall tson::input_archive::process<tson::nvp<tip2::vector_nothrow<tip2::test_flag> &>>(
        tson *this,
        __int64 a2)
{
  char v2; // r8
  _QWORD *v4; // rbx

  v2 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v2;
  v4 = *(_QWORD **)(a2 + 16);
  tson::input_archive::startNode(this);
  tson::load_nothrow<tip2::test_flag>(this, v4);
  tson::input_archive::finishNode(this);
}
