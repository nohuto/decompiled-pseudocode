/*
 * XREFs of ??1UndockedSearchAppExperienceManager_ActivateSearch@SearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1801ECC6C
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x180242D8C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     _lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::__lambda_89f63c8738b1ad17b99f8ae3b3dcb473_ @ 0x1803B528C (_lambda_89f63c8738b1ad17b99f8ae3b3dcb473_--__lambda_89f63c8738b1ad17b99f8ae3b3dcb473_.c)
 *     _lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::operator() @ 0x1803B6348 (_lambda_89f63c8738b1ad17b99f8ae3b3dcb473_--operator().c)
 *     __lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::_lambda_89f63c8738b1ad17b99f8ae3b3dcb473__::_1_::dtor$0 @ 0x1806E6250 (__lambda_89f63c8738b1ad17b99f8ae3b3dcb473_--_lambda_89f63c8738b1ad17b99f8ae3b3dcb473__--_1_--dto.c)
 *     __lambda_89f63c8738b1ad17b99f8ae3b3dcb473_::operator()_::_1_::dtor$0 @ 0x1806E62C9 (__lambda_89f63c8738b1ad17b99f8ae3b3dcb473_--operator()_--_1_--dtor$0.c)
 *     _UndockedSearchAppExperienceManager::Activate_::_1_::dtor$4 @ 0x1806E6413 (_UndockedSearchAppExperienceManager--Activate_--_1_--dtor$4.c)
 *     _UndockedSearchAppExperienceManager::Activate_::_1_::dtor$15 @ 0x1806E6437 (_UndockedSearchAppExperienceManager--Activate_--_1_--dtor$15.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801ECC98 (-Destroy@-$ActivityBase@VSearchAppLauncherLogging@@$00$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::~UndockedSearchAppExperienceManager_ActivateSearch(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *this)
{
  *(_QWORD *)this = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::`vftable';
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SearchAppLauncherLogging,1,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>(this);
}
