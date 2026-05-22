/*
 * XREFs of ?startNode@input_archive@tson@@QEAAXXZ @ 0x1800A7614
 * Callers:
 *     ??$process@AEAU_tip_ISMSessionMonitorCreationTipTest@@@input_archive@tson@@AEAAXAEAU_tip_ISMSessionMonitorCreationTipTest@@@Z @ 0x1800A3B18 (--$process@AEAU_tip_ISMSessionMonitorCreationTipTest@@@input_archive@tson@@AEAAXAEAU_tip_ISMSess.c)
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180105298 (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x180105454 (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX.c)
 *     ?deserialize@?$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180106660 (-deserialize@-$merged_data@U_tip_GamepadInterceptionUsageTipTest_attributes@@Vtest_data_basic@ti.c)
 * Callees:
 *     ?push_node@input_archive@tson@@AEAAXXZ @ 0x1800A6A44 (-push_node@input_archive@tson@@AEAAXXZ.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800A7138 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

void __fastcall tson::input_archive::startNode(tson::input_archive *this)
{
  tson::input_archive::search(this);
  if ( !*((_BYTE *)this + 25) )
    tson::input_archive::push_node((tson::read_buffer **)this);
}
