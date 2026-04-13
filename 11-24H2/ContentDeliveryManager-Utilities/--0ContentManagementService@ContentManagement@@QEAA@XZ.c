/*
 * XREFs of ??0ContentManagementService@ContentManagement@@QEAA@XZ @ 0x1800422F0
 * Callers:
 *     ??$MakeAndInitialize@VContentManagementService@ContentManagement@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x180041CA0 (--$MakeAndInitialize@VContentManagementService@ContentManagement@@UIInspectable@@$$V@Details@WRL.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@WRL@Microsoft@@QEAA@XZ @ 0x1800420E4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UIProcessCreativeEvent@Con.c)
 */

RTL_SRWLOCK *__fastcall ContentManagement::ContentManagementService::ContentManagementService(RTL_SRWLOCK *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>(this);
  this->Ptr = &ContentManagement::ContentManagementService::`vftable'{for `IInspectable'};
  this[1].Ptr = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>'};
  this[5].Ptr = &ContentManagement::ContentManagementService::`vftable'{for `IWeakReferenceSource'};
  this[6].Ptr = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>'};
  this[7].Ptr = &ContentManagement::ContentManagementService::`vftable'{for `ContentManagement::IProcessLockScreenEvent'};
  this[8].Ptr = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>'};
  this[9].Ptr = &ContentManagement::ContentManagementService::`vftable'{for `ContentManagement::IProcessContextualSuggestionsEvent'};
  this[10].Ptr = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>'};
  this[11].Ptr = &ContentManagement::ContentManagementService::`vftable'{for `ContentManagement::ILockScreenRegistrySettingProvider'};
  this[12].Ptr = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::ITaskBarAppProperties>'};
  InitializeSRWLock(this + 15);
  this[16].Ptr = 0LL;
  this[18].Ptr = 0LL;
  this[19].Ptr = 0LL;
  this[20].Ptr = 0LL;
  return this;
}
