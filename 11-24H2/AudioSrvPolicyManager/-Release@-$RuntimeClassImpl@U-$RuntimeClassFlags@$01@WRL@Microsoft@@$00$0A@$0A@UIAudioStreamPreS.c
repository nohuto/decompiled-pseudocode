/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029FB0
 * Callers:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180003C10 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ??$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationManager@@@Z @ 0x18002794C (--$MakeAndInitialize@VCApplicationManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCApplicationM.c)
 *     ??1?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002849C (--1-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x18002AB70 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 *     ??$Make@VCSharedNotificationData@CDuckingNotification@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCSharedNotificationData@CDuckingNotification@@@12@XZ @ 0x18002B5C8 (--$Make@VCSharedNotificationData@CDuckingNotification@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@.c)
 *     ??4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z @ 0x18002C3FC (--4CDuckingNotification@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x18002D5AC (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ??4?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCApplication@@@Z @ 0x180030DF8 (--4-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCApplication@@@Z.c)
 *     ??$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplication@@AEAPEBGAEA_KAEAK@Z @ 0x180035C74 (--$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplic.c)
 *     ??1?$ComPtr@VCApplication@@@WRL@Microsoft@@QEAA@XZ @ 0x1800363D4 (--1-$ComPtr@VCApplication@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180036448 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x1800390F0 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000EB80 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
