/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18037967C
 * Callers:
 *     ??$Make@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@V_lambda_41b5fd1e85b5fa293ba99f420d7ce4cb_@@$0?0PEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewEventArg@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@EAAJPEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewEventArg@5673@@Z@Details@WRL@Microsoft@@V_lambda_41b5fd1e85b5fa293ba99f420d7ce4cb_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@U?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@V_lambda_41b5fd1e85b5fa293ba99f420d7ce4cb_@@$0?0PEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewEventArg@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@EAAJPEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewEventArg@5673@@Z@Details@WRL@Microsoft@@@12@$$QEAV_lambda_41b5fd1e85b5fa293ba99f420d7ce4cb_@@@Z @ 0x1803787B4 (--$Make@U-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIShellExperienceView@Expe_ea_1803787B4.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>(
        __int64 a1)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
