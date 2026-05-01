/*
 * XREFs of ??$MakeAndInitialize@VSwitchItemFilteredCollection@@V1@AEAPEAUIObservableObjectArray@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemFilteredCollection@@AEAPEAUIObservableObjectArray@@@Z @ 0x1804B4F04
 * Callers:
 *     ?SwitchItemFilteredCollection_CreateInstance@@YAJPEAUIObservableObjectArray@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B65C4 (-SwitchItemFilteredCollection_CreateInstance@@YAJPEAUIObservableObjectArray@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SwitchItemFilteredCollection@@QEAA@XZ @ 0x1804B51C8 (--0SwitchItemFilteredCollection@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEBAXXZ @ 0x1804B56FC (-InternalAddRef@-$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1804B5720 (-InternalRelease@-$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@SwitchItemFilteredCollection@@QEAAJPEAUIObservableObjectArray@@@Z @ 0x1804B60AC (-RuntimeClassInitialize@SwitchItemFilteredCollection@@QEAAJPEAUIObservableObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SwitchItemFilteredCollection,SwitchItemFilteredCollection,IObservableObjectArray * &>(
        SwitchItemFilteredCollection **a1,
        struct IObservableObjectArray **a2)
{
  void *v4; // rax
  int v5; // ebx
  SwitchItemFilteredCollection *v6; // rdi
  SwitchItemFilteredCollection *v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v4;
  v8 = (SwitchItemFilteredCollection *)v4;
  if ( v4 )
  {
    v6 = SwitchItemFilteredCollection::SwitchItemFilteredCollection((SwitchItemFilteredCollection *)v4);
    v8 = v6;
    v9 = 0LL;
    v5 = SwitchItemFilteredCollection::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      Microsoft::WRL::ComPtr<SwitchItemFilteredCollection>::InternalAddRef(&v8);
      *a1 = v6;
      Microsoft::WRL::ComPtr<SwitchItemFilteredCollection>::InternalRelease(&v8);
      v5 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<SwitchItemFilteredCollection>::InternalRelease(&v8);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v9);
  return (unsigned int)v5;
}
