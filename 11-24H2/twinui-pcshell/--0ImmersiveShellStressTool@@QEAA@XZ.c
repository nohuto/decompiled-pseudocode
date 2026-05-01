/*
 * XREFs of ??0ImmersiveShellStressTool@@QEAA@XZ @ 0x1803ECF04
 * Callers:
 *     ??$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803ECBE8 (--$MakeAndInitialize@VImmersiveShellStressTool@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ??0CImmersiveShellComponentWithSite@@QEAA@XZ @ 0x1800794A0 (--0CImmersiveShellComponentWithSite@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
ImmersiveShellStressTool *__fastcall ImmersiveShellStressTool::ImmersiveShellStressTool(ImmersiveShellStressTool *this)
{
  __int64 v2; // rcx

  CImmersiveShellComponentWithSite::CImmersiveShellComponentWithSite(this);
  *(_DWORD *)(v2 + 100) = 1;
  *(_QWORD *)v2 = &ImmersiveShellStressTool::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<10>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IImmersiveShellStressTool>>'};
  *(_QWORD *)(v2 + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<10>,CImmersiveShellComponentWithSite,IImmersiveShellStressTool>::`vftable'{for `IImmersiveShellComponent'};
  *(_QWORD *)(v2 + 32) = &ImmersiveShellStressTool::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *(_QWORD *)(v2 + 88) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<10>,CImmersiveShellComponentWithSite,IImmersiveShellStressTool>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<10>,1,IImmersiveShellStressTool>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<10>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IImmersiveShellStressTool>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ImmersiveShellStressTool::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<10>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IImmersiveShellStressTool>>'};
  *((_QWORD *)this + 3) = &ImmersiveShellStressTool::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 4) = &ImmersiveShellStressTool::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 11) = &ImmersiveShellStressTool::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<10>,1,IImmersiveShellStressTool>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<10>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,IImmersiveShellStressTool>>'};
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = SHTaskPoolGetUniqueContext();
  return this;
}
