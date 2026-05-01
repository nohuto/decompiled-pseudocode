/*
 * XREFs of ?serialize@?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180496330
 * Callers:
 *     <none>
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAXE@Z @ 0x1800DD118 (-saveValue@output_archive@tson@@QEAAXE@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800DE2FC (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800DED7C (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180493A68 (--$serialize@Voutput_archive@tson@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Co.c)
 */

void __fastcall tip2::details::merged_data<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest,WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // r8

  if ( (a3 & 2) != 0 )
  {
    *((_BYTE *)a2 + 8) = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *((_BYTE *)a2 + 8) = 12;
    v8 = a1 + 276;
    if ( !a1 )
      v8 = 20LL;
    *(_QWORD *)a2 = "switcherType";
    LOBYTE(v6) = *(_BYTE *)v8;
    tson::output_archive::saveValue(a2, v6, v7);
    *(_DWORD *)(a1 + 184) = *(unsigned __int8 *)v8;
    tson::output_archive::finishNode(a2);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest::serialize<tson::output_archive>(
      (a1 + 256) & -(__int64)(a1 != 0),
      a2,
      v9);
    tson::output_archive::finishNode(a2);
  }
}
