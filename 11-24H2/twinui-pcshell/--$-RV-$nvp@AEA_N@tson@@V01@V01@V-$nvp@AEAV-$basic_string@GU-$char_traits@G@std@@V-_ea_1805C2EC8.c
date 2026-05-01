/*
 * XREFs of ??$?RV?$nvp@AEA_N@tson@@V01@V01@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@V?$nvp@AEAJ@1@V21@V21@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@00$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAJ@1@11@Z @ 0x1805C2EC8
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800DEB2C (--$serialize@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAXAEAVoutput_archive@tson.c)
 * Callees:
 *     ??$process@V?$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAJ@1@@Z @ 0x1800DD4E8 (--$process@V-$nvp@AEAJ@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DD540 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1800DDE98 (--$process@V-$nvp@AEA_N@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0@Z @ 0x1805C5944 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@tson@@V12@@o.c)
 */

__int64 __fastcall tson::output_archive::operator()<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // r8
  __int64 v12; // r8

  tson::output_archive::process<tson::nvp<bool &>>(a1, a2);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a3);
  tson::output_archive::process<tson::nvp<bool &>>(a1, a4);
  LOBYTE(v11) = *(_BYTE *)(a5 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a5;
  *(_BYTE *)(a1 + 8) = v11;
  tson::save_nothrow(a1, *(const void ***)(a5 + 16), v11);
  tson::output_archive::process<tson::nvp<long &>>(a1, a6, v12);
  tson::output_archive::process<tson::nvp<std::wstring &>,tson::nvp<std::wstring &>>(a1, a7, a8);
  return a1;
}
