/*
 * XREFs of ?serialize@?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1802951C0
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DE2FC (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800DEB2C (--$serialize@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVoutput_archive@tson.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DED7C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$serialize_metrics@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAIAEAVoutput_archive@tson@@@Z @ 0x1805C992C (--$serialize_metrics@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAIAEAVoutput_arch.c)
 */

void __fastcall tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  if ( (a3 & 2) != 0 )
  {
    *((_BYTE *)a2 + 8) = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *(_DWORD *)(a1 + 184) = _tip_CallDashboardExtensionTIP::serialize_metrics<tson::output_archive>(
                              (a1 + 256) & -(__int64)(a1 != 0),
                              a2);
    tson::output_archive::finishNode(a2);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    _tip_CallDashboardExtensionTIP::serialize<tson::output_archive>((a1 + 256) & -(__int64)(a1 != 0), (int)a2);
    tson::output_archive::finishNode(a2);
  }
}
