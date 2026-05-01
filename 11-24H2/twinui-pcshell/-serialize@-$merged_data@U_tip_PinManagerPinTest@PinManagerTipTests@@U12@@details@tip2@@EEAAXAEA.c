/*
 * XREFs of ?serialize@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1805ECE70
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DE2FC (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DED7C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1805E2A40 (--$serialize@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVoutput_a.c)
 *     ??$serialize_metrics@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAIAEAVoutput_archive@tson@@@Z @ 0x1805E2BB4 (--$serialize_metrics@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAIAEAV.c)
 */

void __fastcall tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // r8

  if ( (a3 & 2) != 0 )
  {
    *((_BYTE *)a2 + 8) = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *(_DWORD *)(a1 + 184) = PinManagerTipTests::_tip_PinManagerPinTest::serialize_metrics<tson::output_archive>(
                              (a1 + 256) & -(__int64)(a1 != 0),
                              a2,
                              v6);
    tson::output_archive::finishNode(a2);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    PinManagerTipTests::_tip_PinManagerPinTest::serialize<tson::output_archive>((a1 + 256) & -(__int64)(a1 != 0), a2);
    tson::output_archive::finishNode(a2);
  }
}
