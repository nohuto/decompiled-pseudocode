/*
 * XREFs of ??1_tip_RemoteSessionActivationTipTest@@QEAA@XZ @ 0x180658CF8
 * Callers:
 *     ??1?$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x1806589E4 (--1-$merged_data@U_tip_RemoteSessionActivationTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_RemoteSessionActivationTipTest::~_tip_RemoteSessionActivationTipTest(void **this)
{
  std::wstring::_Tidy_deallocate(this + 15);
  std::wstring::_Tidy_deallocate(this + 11);
  std::wstring::_Tidy_deallocate(this + 7);
  std::wstring::_Tidy_deallocate(this + 3);
}
