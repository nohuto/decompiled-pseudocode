/*
 * XREFs of ??$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803F7014
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPWSLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F7520 (-CreateInstance@-$SimpleClassFactory@VPWSLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Attach@?$ComPtr@VPWSLayoutPolicyManager@@@WRL@Microsoft@@QEAAXPEAVPWSLayoutPolicyManager@@@Z @ 0x1803C82CC (-Attach@-$ComPtr@VPWSLayoutPolicyManager@@@WRL@Microsoft@@QEAAXPEAVPWSLayoutPolicyManager@@@Z.c)
 *     ??0PWSLayoutPolicyManager@@QEAA@XZ @ 0x1803F7184 (--0PWSLayoutPolicyManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1803F7ECC (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PWSLayoutPolicyManager,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  int v3; // edi
  PWSLayoutPolicyManager *v4; // rax
  PWSLayoutPolicyManager *v5; // rbx
  PWSLayoutPolicyManager *v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  v7 = (PWSLayoutPolicyManager *)v2;
  if ( v2 )
  {
    v4 = PWSLayoutPolicyManager::PWSLayoutPolicyManager((PWSLayoutPolicyManager *)v2);
    v7 = 0LL;
    Microsoft::WRL::ComPtr<PWSLayoutPolicyManager>::Attach((__int64 *)&v7, (__int64)v4);
    v8 = 0LL;
    v5 = v7;
    v3 = PWSLayoutPolicyManager::RuntimeClassInitialize(v7);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(PWSLayoutPolicyManager *, GUID *, _QWORD *))v5)(
             v5,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  return (unsigned int)v3;
}
