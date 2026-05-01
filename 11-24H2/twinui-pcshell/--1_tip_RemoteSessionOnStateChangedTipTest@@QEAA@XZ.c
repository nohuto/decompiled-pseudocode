/*
 * XREFs of ??1_tip_RemoteSessionOnStateChangedTipTest@@QEAA@XZ @ 0x180658D30
 * Callers:
 *     ??1?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180658A2C (--1-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_RemoteSessionOnStateChangedTipTest::~_tip_RemoteSessionOnStateChangedTipTest(void **this)
{
  std::wstring::_Tidy_deallocate(this + 12);
  std::wstring::_Tidy_deallocate(this + 6);
  std::wstring::_Tidy_deallocate(this + 2);
}
