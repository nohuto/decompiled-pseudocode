/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLExecuteCommandBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1804585E8
 * Callers:
 *     ??$MakeAndInitialize@VVirtualTouchpadUriHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1804583EC (--$MakeAndInitialize@VVirtualTouchpadUriHandler@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEA.c)
 * Callees:
 *     ??0?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIExecuteCommand@@UIObjectWithAssociationElement@@UIObjectWithSelection@@VCWRLObjectWithSite@@@WRL@Microsoft@@QEAA@XZ @ 0x1804585CC (--0-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIExecuteCommand@@UIObjectWithAssociatio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IExecuteCommand,IObjectWithAssociationElement,IObjectWithSelection,CWRLObjectWithSite>::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IExecuteCommand,IObjectWithAssociationElement,IObjectWithSelection,CWRLObjectWithSite>(
    a1,
    a2,
    a3);
  *(_QWORD *)(a1 + 8) = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithAssociationElement,IObjectWithSelection,CWRLObjectWithSite>'};
  *(_QWORD *)a1 = &CWRLExecuteCommandBase::`vftable'{for `IExecuteCommand'};
  *(_QWORD *)(a1 + 16) = &CWRLExecuteCommandBase::`vftable'{for `IObjectWithSelection'};
  *(_QWORD *)(a1 + 24) = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>::`vftable'{for `IExecuteCommand'};
  *(_QWORD *)(a1 + 8) = &VirtualTouchpadUriHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithAssociationElement,IObjectWithSelection,CWRLObjectWithSite>'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>::`vftable'{for `IObjectWithSelection'};
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLExecuteCommandBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  *(_DWORD *)(a1 + 132) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
