/*
 * XREFs of ??1UndockedSearchAppExperienceManager_SetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x18018AA24
 * Callers:
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@AEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x180246938 (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@A.c)
 *     _lambda_532c2163530137281656f24e6f38e4a1_::__lambda_532c2163530137281656f24e6f38e4a1_ @ 0x1803B524C (_lambda_532c2163530137281656f24e6f38e4a1_--__lambda_532c2163530137281656f24e6f38e4a1_.c)
 *     _lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_::__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_ @ 0x1803B52CC (_lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_--__lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_532c2163530137281656f24e6f38e4a1___::_CTaskWrapper__lambda_532c2163530137281656f24e6f38e4a1___ @ 0x1803B53E4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_532c2163530137281656f24e6f38e4a1___--_CTask.c)
 *     _lambda_532c2163530137281656f24e6f38e4a1_::operator() @ 0x1803B61C8 (_lambda_532c2163530137281656f24e6f38e4a1_--operator().c)
 *     _lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_::operator() @ 0x1803B6738 (_lambda_ba07cbb8b2fdb4a464ebef50e81f9a3f_--operator().c)
 *     ?SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x1803BFDFC (-SetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@AEBAXPEAUHWND__@@AEBUtagRECT@@1.c)
 *     _CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync_::_1_::dtor$0 @ 0x1806E69D0 (_CUndockedSearchAppExperienceManagerConfig--SetWindowRegionAsync_--_1_--dtor$0.c)
 *     _CUndockedSearchAppExperienceManagerConfig::SetWindowRegionAsync_::_1_::dtor$0_0 @ 0x1806E69F4 (_CUndockedSearchAppExperienceManagerConfig--SetWindowRegionAsync_--_1_--dtor$0_0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018AA50 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::~UndockedSearchAppExperienceManager_SetWindowRgn(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn *this)
{
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
