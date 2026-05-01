/*
 * XREFs of ??$process@AEAU_tip_SearchHomeRenderTest@@@output_archive@tson@@AEAAXAEAU_tip_SearchHomeRenderTest@@@Z @ 0x1803B0C08
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1803C43C0 (-serialize@-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@t.c)
 * Callees:
 *     ??$process@V?$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAI@1@@Z @ 0x1800DD450 (--$process@V-$nvp@AEAI@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAI@1@@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DE2FC (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tson::output_archive::process<_tip_SearchHomeRenderTest &>(tson::output_archive *this, __int64 a2)
{
  __int64 v4; // r8
  const char *v5; // [rsp+20h] [rbp-50h] BYREF
  char v6; // [rsp+28h] [rbp-48h]
  __int64 v7; // [rsp+30h] [rbp-40h]
  const char *v8; // [rsp+38h] [rbp-38h] BYREF
  char v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  const char *v11; // [rsp+50h] [rbp-20h] BYREF
  char v12; // [rsp+58h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp-10h]

  tson::output_archive::startNode(this);
  v12 = 15;
  v11 = "transition_type";
  v9 = 6;
  v13 = a2 + 20;
  v6 = 29;
  v8 = "hidden";
  v10 = a2 + 17;
  v5 = "activated_again_before_render";
  v7 = a2 + 16;
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, (__int64)&v5);
  tson::output_archive::process<tson::nvp<bool &>>((__int64)this, (__int64)&v8);
  tson::output_archive::process<tson::nvp<unsigned int &>>((__int64)this, (__int64 *)&v11, v4);
  tson::output_archive::finishNode(this);
}
