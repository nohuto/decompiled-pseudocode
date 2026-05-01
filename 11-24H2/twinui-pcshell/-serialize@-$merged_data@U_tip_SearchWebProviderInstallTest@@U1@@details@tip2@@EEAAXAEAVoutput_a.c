/*
 * XREFs of ?serialize@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1803C4450
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DE2FC (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DED7C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$?RV?$nvp@AEAU?$test_data_metrics@U_tip_SearchWebProviderInstallTest@@@details@tip2@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU?$test_data_metrics@U_tip_SearchWebProviderInstallTest@@@details@tip2@@@1@@Z @ 0x1803AE7AC (--$-RV-$nvp@AEAU-$test_data_metrics@U_tip_SearchWebProviderInstallTest@@@details@tip2@@@tson@@@o.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1803B43CC (--$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@t.c)
 */

void __fastcall tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  const char *v7; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+38h] [rbp-20h]
  _QWORD *v9; // [rsp+40h] [rbp-18h]

  if ( (a3 & 2) != 0 )
  {
    if ( a1 )
      v6[0] = a1 + 256;
    else
      v6[0] = 0LL;
    v8 = 7;
    v6[1] = a1 + 184;
    v7 = "metrics";
    v9 = v6;
    tson::output_archive::operator()<tson::nvp<tip2::details::test_data_metrics<_tip_SearchWebProviderInstallTest> &>>(
      a2,
      (__int64)&v7);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    _tip_SearchWebProviderInstallTest::serialize<tson::output_archive>((a1 + 256) & -(__int64)(a1 != 0), a2);
    tson::output_archive::finishNode(a2);
  }
}
