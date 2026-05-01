/*
 * XREFs of ??$?RAEAU_tip_SearchHomeRenderTest@@@input_archive@tson@@QEAAAEAV01@AEAU_tip_SearchHomeRenderTest@@@Z @ 0x1803AE710
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1803C2560 (-deserialize@-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@.c)
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180183220 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x180183750 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAI@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAI@1@@Z @ 0x1803B3060 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAI@2@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@0$.c)
 */

tson::input_archive *__fastcall tson::input_archive::operator()<_tip_SearchHomeRenderTest &>(tson::input_archive *this)
{
  tson::input_archive::startNode(this);
  tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<unsigned int &>>(this);
  tson::input_archive::finishNode(this);
  return this;
}
