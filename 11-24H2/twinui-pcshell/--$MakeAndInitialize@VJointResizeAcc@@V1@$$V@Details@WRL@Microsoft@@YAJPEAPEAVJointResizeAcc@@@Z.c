/*
 * XREFs of ??$MakeAndInitialize@VJointResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVJointResizeAcc@@@Z @ 0x1802A7F4C
 * Callers:
 *     ?JointResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A7E84 (-JointResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@JointResizeAcc@@QEAAJXZ @ 0x1800157EC (-RuntimeClassInitialize@JointResizeAcc@@QEAAJXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0JointResizeAcc@@QEAA@XZ @ 0x18053CA08 (--0JointResizeAcc@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<JointResizeAcc,JointResizeAcc,>(JointResizeAcc **a1)
{
  JointResizeAcc *v2; // rax
  JointResizeAcc *v4; // rdi
  int v5; // ebx
  JointResizeAcc *v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = (JointResizeAcc *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
    return 2147942414LL;
  v4 = JointResizeAcc::JointResizeAcc(v2);
  v6 = v4;
  v7 = 0LL;
  v5 = JointResizeAcc::RuntimeClassInitialize(v4);
  if ( v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
    *a1 = v4;
    v5 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return (unsigned int)v5;
}
