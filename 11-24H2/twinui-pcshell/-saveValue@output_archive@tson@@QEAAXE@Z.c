/*
 * XREFs of ?saveValue@output_archive@tson@@QEAAXE@Z @ 0x1800DD118
 * Callers:
 *     ??$?RV?$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x1800DD010 (--$-RV-$nvp@AEAE@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180493A68 (--$serialize@Voutput_archive@tson@@@_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@Co.c)
 *     ?serialize@?$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@U123456@@details@tip2@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180496330 (-serialize@-$merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableSh.c)
 * Callees:
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800DD78C (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 *     ??$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z @ 0x1800DEA48 (--$push_back@E@write_buffer@tson@@QEAA_NAEBE@Z.c)
 */

void __fastcall tson::output_archive::saveValue(tson::output_archive *this, __int64 a2, __int64 a3)
{
  char v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  LOBYTE(a3) = 12;
  LOBYTE(a2) = (_BYTE)a2 == 0;
  if ( (unsigned __int8)tson::output_archive::write_type(this, a2, a3) )
    tson::write_buffer::push_back<unsigned char>(*((_QWORD *)this + 18), &v4);
}
