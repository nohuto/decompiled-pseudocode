/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A5768
 * Callers:
 *     ??0WindowingEnvironmentManager@@QEAA@XZ @ 0x1800A56A4 (--0WindowingEnvironmentManager@@QEAA@XZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800305D0 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CImmersiveShellComponentWithGITSite@@QEAA@XZ @ 0x1800D9414 (--0CImmersiveShellComponentWithGITSite@@QEAA@XZ.c)
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1802A85AC (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIWindowingEnvironm.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>(
        __int64 a1)
{
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)a1);
  CImmersiveShellComponentWithGITSite::CImmersiveShellComponentWithGITSite((CImmersiveShellComponentWithGITSite *)(a1 + 32));
  Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>>(a1 + 136);
  *(_DWORD *)(a1 + 156) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CImmersiveShellComponentWithGITSite,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>>'};
  *(_QWORD *)(a1 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,CImmersiveShellComponentWithGITSite,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>>'};
  *(_QWORD *)(a1 + 72) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>::`vftable'{for `IImmersiveShellComponent'};
  *(_QWORD *)(a1 + 80) = &WindowingEnvironmentManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *(_QWORD *)(a1 + 136) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>::`vftable'{for `IWindowingEnvironmentManager'};
  *(_QWORD *)(a1 + 144) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IWindowingEnvironmentManagerInternal>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
