/*
 * XREFs of ??4?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180093D08
 * Callers:
 *     ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x18009372C (--0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@.c)
 *     ??R_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@QEBA@PEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z @ 0x180093F34 (--R_lambda_6bc2a757313ab37e766f9d0f904bfdba_@@QEBA@PEB_WPEAUITargetedContentIdAliasValue@Interna.c)
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf373b___ @ 0x1800B4A34 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf37.c)
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7f2___ @ 0x1800B4C98 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7.c)
 *     _lambda_633962cfafa552d6328dcc010e2c57bd_::operator() @ 0x1800B50E8 (_lambda_633962cfafa552d6328dcc010e2c57bd_--operator().c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800B5588 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 *     ?RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDateTime@Foundation@Windows@@IIW4TaskConditionFlags@12@W4TaskOptionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800B5B3C (-RegisterBackgroundTaskWithAlarmTrigger@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0UDat.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>,wil::err_exception_policy>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
