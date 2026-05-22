/*
 * XREFs of ?deserialize@?$merged_data@U_tip_ISMSessionMonitorCreationTipTest@@U1@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800A60E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tip2::details::merged_data<_tip_ISMSessionMonitorCreationTipTest,_tip_ISMSessionMonitorCreationTipTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::process<_tip_ISMSessionMonitorCreationTipTest &>(
    (tson::input_archive *)a2,
    (a1 + 248) & -(__int64)(a1 != 0));
}
