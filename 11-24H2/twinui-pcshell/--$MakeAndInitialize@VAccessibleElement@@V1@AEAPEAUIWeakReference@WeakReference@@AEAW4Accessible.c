/*
 * XREFs of ??$MakeAndInitialize@VAccessibleElement@@V1@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAVAccessibleElement@@AEAPEAUIWeakReference@WeakReference@@AEAW4AccessibleElementFlags@@AEAJ@Z @ 0x1804D21D4
 * Callers:
 *     ?AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags@@JAEBU_GUID@@PEAPEAX@Z @ 0x1804D24CC (-AccessibleElement_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@W4AccessibleElementFlags.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ @ 0x1804B1B78 (-InternalRelease@-$ComPtr@VAccessibleElement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VAccessibleElementBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1804D2348 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VAccessibleElementBase@@@WRL@Microsoft.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AccessibleElement,AccessibleElement,WeakReference::IWeakReference * &,enum AccessibleElementFlags &,long &>(
        __int64 *a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  unsigned int v6; // ebp
  void *v9; // rax
  __int64 v10; // rsi
  int v11; // edi
  int v12; // ebx
  volatile int *v13; // rdx
  __int64 v15[5]; // [rsp+20h] [rbp-28h] BYREF
  void *v16; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  *a1 = 0LL;
  v9 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v9;
  v10 = (__int64)v9;
  if ( v9 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,AccessibleElementBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,AccessibleElementBase>(v9);
    v15[0] = v10;
    *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,AccessibleElementBase>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IRawElementProviderSimple2,IRawElementProviderSimple,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    v16 = 0LL;
    *(_QWORD *)(v10 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,AccessibleElementBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IInvokeProvider,ISelectionProvider,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>'};
    *(_QWORD *)(v10 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,AccessibleElementBase>::`vftable'{for `IRawElementProviderFragmentRoot'};
    *(_QWORD *)(v10 + 24) = &AccessibleElement::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInvokeProvider,ISelectionProvider,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>'};
    *(_QWORD *)(v10 + 32) = &AccessibleElement::`vftable'{for `ISelectionProvider'};
    *(_QWORD *)(v10 + 40) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,AccessibleElementBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISelectionItemProvider,IScrollProvider,IScrollItemProvider>'};
    *(_QWORD *)(v10 + 48) = &AccessibleElement::`vftable'{for `IScrollProvider'};
    *(_QWORD *)(v10 + 56) = &AccessibleElement::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IScrollItemProvider>'};
    *(_QWORD *)(v10 + 72) = &AccessibleElement::`vftable'{for `IGridProvider'};
    *(_QWORD *)(v10 + 80) = &AccessibleElement::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IGridItemProvider>'};
    v11 = *a4;
    v12 = *a3;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v10 + 112), *a2);
    *(_DWORD *)(v10 + 120) = v12;
    *(_DWORD *)(v10 + 124) = v11;
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v10 + 132), v13);
    *a1 = v10;
    Microsoft::WRL::ComPtr<AccessibleElement>::InternalRelease(v15);
  }
  else
  {
    v6 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v16);
  return v6;
}
