/*
 * XREFs of ??1UndockedSearchAppExperienceManager_ResetWindowRgn@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x18018A9F8
 * Callers:
 *     ?ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z @ 0x180246680 (-ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z.c)
 *     _lambda_28dd33157ff92f349d65c7c884e47fdb_::__lambda_28dd33157ff92f349d65c7c884e47fdb_ @ 0x1803B523C (_lambda_28dd33157ff92f349d65c7c884e47fdb_--__lambda_28dd33157ff92f349d65c7c884e47fdb_.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28dd33157ff92f349d65c7c884e47fdb___::_CTaskWrapper__lambda_28dd33157ff92f349d65c7c884e47fdb___ @ 0x1803B53BC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28dd33157ff92f349d65c7c884e47fdb___--_CTask.c)
 *     _lambda_28dd33157ff92f349d65c7c884e47fdb_::operator() @ 0x1803B60E4 (_lambda_28dd33157ff92f349d65c7c884e47fdb_--operator().c)
 *     _CUndockedSearchAppExperienceManagerConfig::ResetWindowRegionAsync_::_1_::dtor$0 @ 0x1806E6940 (_CUndockedSearchAppExperienceManagerConfig--ResetWindowRegionAsync_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018AA50 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::~UndockedSearchAppExperienceManager_ResetWindowRgn(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn *this)
{
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(this);
}
