/*
 * XREFs of ??$?RV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x1805C27C8
 * Callers:
 *     ??$serialize_metrics@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAIAEAVoutput_archive@tson@@@Z @ 0x1805C992C (--$serialize_metrics@Voutput_archive@tson@@@_tip_CallDashboardExtensionTIP@@QEAAIAEAVoutput_arch.c)
 * Callees:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800DD540 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 */

__int64 __fastcall tson::output_archive::operator()<tson::nvp<std::wstring &>>(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = *(_BYTE *)(a2 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 8) = a3;
  tson::save_nothrow(a1, *(const void ***)(a2 + 16), a3);
  return a1;
}
