/*
 * XREFs of ??1_tip_CallDashboardExtensionTIP@@QEAA@XZ @ 0x1805CB5E8
 * Callers:
 *     ??1?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@QEAA@XZ @ 0x18028C134 (--1-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_CallDashboardExtensionTIP::~_tip_CallDashboardExtensionTIP(void **this)
{
  std::wstring::_Tidy_deallocate(this + 11);
  std::wstring::_Tidy_deallocate(this + 7);
  std::wstring::_Tidy_deallocate(this + 3);
}
