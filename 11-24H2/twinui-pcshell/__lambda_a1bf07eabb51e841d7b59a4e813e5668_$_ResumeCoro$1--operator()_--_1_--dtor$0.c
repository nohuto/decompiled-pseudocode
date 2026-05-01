/*
 * XREFs of __lambda_a1bf07eabb51e841d7b59a4e813e5668_$_ResumeCoro$1::operator()_::_1_::dtor$0 @ 0x1807019CE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$test_watcher@V?$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18063EFD8 (--1-$test_watcher@V-$merged_data@U_tip_SetPhysicalDeviceAccessRegKeyTipTest@@U1@@details@tip2@@@.c)
 */

void __fastcall _lambda_a1bf07eabb51e841d7b59a4e813e5668___ResumeCoro_1::operator()_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(a2 + 256) + 16LL;
  tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::~test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>(*(_QWORD *)(a2 + 160));
}
