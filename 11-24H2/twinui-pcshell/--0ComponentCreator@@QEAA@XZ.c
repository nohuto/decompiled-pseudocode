/*
 * XREFs of ??0ComponentCreator@@QEAA@XZ @ 0x1801901C8
 * Callers:
 *     ??$Make@VCImmersiveShellCreationBehavior@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCImmersiveShellCreationBehavior@@@12@XZ @ 0x1802A3B88 (--$Make@VCImmersiveShellCreationBehavior@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCImmersiveSh.c)
 *     ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x1803DFDA4 (--0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180150E08 (--4-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$CoCreateInstance@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x1801902E0 (--$CoCreateInstance@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_ptr.c)
 *     ?attach@?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180190350 (-attach@-$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Ue.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F32B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801F32B0.c)
 *     ??$MakeOrThrow@VCoCreateInstanceImmersiveShellComponentCreator@@$$V@wil@@YA?AV?$ComPtr@VCoCreateInstanceImmersiveShellComponentCreator@@@WRL@Microsoft@@XZ @ 0x1802C3E0C (--$MakeOrThrow@VCoCreateInstanceImmersiveShellComponentCreator@@$$V@wil@@YA-AV-$ComPtr@VCoCreate.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
ComponentCreator *__fastcall ComponentCreator::ComponentCreator(ComponentCreator *this)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v5; // [rsp+48h] [rbp+28h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  wil::CoCreateInstance<IImmersiveComponentCreator,wil::err_exception_policy>(
    (int)&v5,
    &GUID_65a04334_9dd4_4fa2_94db_a62922b8ba24);
  wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=((__int64 *)this, &v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  wil::CoCreateInstance<IImmersiveComponentCreator,wil::err_exception_policy>(
    (int)&v5,
    &GUID_1e35b0d0_49f2_4acb_a9a5_4d2da8331b02);
  wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=((__int64 *)this + 2, &v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  wil::CoCreateInstance<IImmersiveComponentCreator,wil::err_exception_policy>(
    (int)&v5,
    &GUID_d2d94e72_dcdd_420a_b779_197ef796cc85);
  wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=((__int64 *)this + 1, &v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v2 = (__int64 *)wil::MakeOrThrow<CoCreateInstanceImmersiveShellComponentCreator,>(&v5);
  v3 = *v2;
  *v2 = 0LL;
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings,wil::err_exception_policy>::attach(
    (char *)this + 24,
    v3);
  if ( v5 )
  {
    v5 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release();
  }
  return this;
}
