/*
 * XREFs of ?RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1800464C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0AgileApplicationViewChangeListenerConverter@@QEAA@XZ @ 0x180046314 (--0AgileApplicationViewChangeListenerConverter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x180046370 (-RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewCh.c)
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180046644 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationViewManager::RegisterForApplicationViewChanges(
        CApplicationViewManager *this,
        struct IApplicationViewChangeListener *a2,
        unsigned int *a3)
{
  void *v6; // rax
  AgileApplicationViewChangeListenerConverter *v7; // rbx
  int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  struct IUnknown *v11; // rcx
  struct IUnknown *v13; // rcx
  void *v14; // [rsp+20h] [rbp-10h] BYREF
  AgileApplicationViewChangeListenerConverter *v15; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IUnknown *v17; // [rsp+68h] [rbp+38h] BYREF

  v17 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v17);
  v17 = 0LL;
  v6 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v6;
  v15 = (AgileApplicationViewChangeListenerConverter *)v6;
  if ( v6 )
  {
    v7 = AgileApplicationViewChangeListenerConverter::AgileApplicationViewChangeListenerConverter((AgileApplicationViewChangeListenerConverter *)v6);
    v15 = v7;
    v14 = 0LL;
    v8 = AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize(v7, a2);
    if ( v8 < 0 )
    {
      if ( v7 )
        (*(void (__fastcall **)(AgileApplicationViewChangeListenerConverter *))(*(_QWORD *)v7 + 16LL))(v7);
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
    }
    else
    {
      v8 = (**(__int64 (__fastcall ***)(AgileApplicationViewChangeListenerConverter *, GUID *, struct IUnknown **))v7)(
             v7,
             &GUID_727f9e97_76ee_497b_a942_b6371328485c,
             &v17);
      (*(void (__fastcall **)(AgileApplicationViewChangeListenerConverter *))(*(_QWORD *)v7 + 16LL))(v7);
      if ( v8 >= 0 )
      {
        v9 = AgileRegistrationList::Register((CApplicationViewManager *)((char *)this + 88), v17, a3);
        v10 = v9;
        if ( v9 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v9);
        v11 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->Release)(v11);
        }
        return v10;
      }
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
    v8 = -2147024882;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F4,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v8);
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
  }
  return (unsigned int)v8;
}
