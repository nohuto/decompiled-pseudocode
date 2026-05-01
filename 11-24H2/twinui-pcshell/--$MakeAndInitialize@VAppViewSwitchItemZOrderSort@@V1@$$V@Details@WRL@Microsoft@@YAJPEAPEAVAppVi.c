/*
 * XREFs of ??$MakeAndInitialize@VAppViewSwitchItemZOrderSort@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVAppViewSwitchItemZOrderSort@@@Z @ 0x18029AF8C
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA?AV?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@XZ @ 0x18029AF30 (--$MakeAndInitializeOrThrow@VAppViewSwitchItemZOrderSort@@$$V@wil@@YA-AV-$ComPtr@VAppViewSwitchI.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006E7C0 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase.c)
 *     ?InternalRelease@?$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@IEAAKXZ @ 0x18029B0A4 (-InternalRelease@-$ComPtr@VAppViewSwitchItemZOrderSort@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppViewSwitchItemZOrderSort,AppViewSwitchItemZOrderSort,>(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  _QWORD *v5; // rsi
  volatile int *v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  void *v9; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v9 = v2;
  if ( !v2 )
    return 2147942414LL;
  v5 = v2 + 1;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>((__int64)(v2 + 1));
  v3[7] = 1LL;
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::`vftable';
  *v5 = &AppViewSwitchItemZOrderSort::`vftable'{for `IWeakReferenceSource'};
  v3[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v3 = &AppViewSwitchItemZOrderSort::`vftable';
  *v5 = &AppViewSwitchItemZOrderSort::`vftable'{for `IWeakReferenceSource'};
  v3[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v10 = v3;
  v9 = 0LL;
  v7 = v3[7];
  while ( v7 >= 0 )
  {
    if ( (_DWORD)v7 != 0x7FFFFFFF )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(v3 + 7, v7 + 1, v7);
      if ( v8 != v7 )
        continue;
    }
    goto LABEL_11;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v7 + 16), v6);
LABEL_11:
  *a1 = v3;
  Microsoft::WRL::ComPtr<AppViewSwitchItemZOrderSort>::InternalRelease(&v10);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v9);
  return 0LL;
}
