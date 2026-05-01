/*
 * XREFs of ??$?RAEAK@input_archive@tson@@QEAAAEAV01@AEAK@Z @ 0x180329858
 * Callers:
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180336F94 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?deserialize@?$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180450010 (-deserialize@-$merged_data@U_tip_OnLaunchedTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V?$nvp@AEAK@2@V?$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAK@1@$$QEAV?$nvp@AEAJ@1@@Z @ 0x1805E27D0 (--$process@V-$nvp@AEA_N@tson@@V-$nvp@AEAK@2@V-$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV-$nvp@.c)
 *     ??$load_nothrow@KV?$allocator@K@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@KV?$allocator@K@std@@@std@@@Z @ 0x1805FED8C (--$load_nothrow@KV-$allocator@K@std@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector@KV-$allocator@K@.c)
 * Callees:
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x180183250 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x180183364 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x180335E8C (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

tson::input_archive *__fastcall tson::input_archive::operator()<unsigned long &>(tson::input_archive *a1, _DWORD *a2)
{
  if ( tson::input_archive::search(a1) )
  {
    tson::input_archive::consume_expected_marker(a1, 18, -2147023267);
    tson::read_buffer::consume_n(*(tson::read_buffer **)a1, a2, 4uLL);
  }
  else
  {
    *a2 = 0;
  }
  return a1;
}
