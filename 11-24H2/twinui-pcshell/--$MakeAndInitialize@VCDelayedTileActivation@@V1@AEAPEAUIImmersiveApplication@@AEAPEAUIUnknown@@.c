/*
 * XREFs of ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEAUIImmersiveApplication@@AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1804E938C
 * Callers:
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x1804E9B28 (-CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOP.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1800990B0 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CDelayedTileActivation@@QEAA@XZ @ 0x180121670 (--0CDelayedTileActivation@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAAXPEAVCDelayedTileActivation@@@Z @ 0x1802C8434 (-Attach@-$ComPtr@VCDelayedTileActivation@@@WRL@Microsoft@@QEAAXPEAVCDelayedTileActivation@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1804EA344 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CDelayedTileActivation,CDelayedTileActivation,IImmersiveApplication * &,IUnknown * &,enum ACTIVATEOPTIONSINTERNAL &>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  void *v8; // rax
  int v9; // edi
  volatile int *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbx
  volatile int *v13; // rdx
  void *v15; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v8;
  v16 = (__int64)v8;
  if ( v8 )
  {
    v10 = (volatile int *)CDelayedTileActivation::CDelayedTileActivation((CDelayedTileActivation *)v8);
    v16 = 0LL;
    Microsoft::WRL::ComPtr<CDelayedTileActivation>::Attach(&v16, v10);
    v15 = 0LL;
    v11 = *a4;
    v12 = v16;
    v9 = CDelayedTileActivation::RuntimeClassInitialize(v16, *a2, *a3, v11, 0LL);
    if ( v9 >= 0 )
    {
      if ( v12 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v12 + 44), v13);
      *a1 = v12;
      Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v16);
      v9 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v16);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v15);
  return (unsigned int)v9;
}
