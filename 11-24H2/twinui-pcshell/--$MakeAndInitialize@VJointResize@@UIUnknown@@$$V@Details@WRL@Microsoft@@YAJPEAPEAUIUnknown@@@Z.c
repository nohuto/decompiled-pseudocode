/*
 * XREFs of ??$MakeAndInitialize@VJointResize@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801C0D48
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VJointResize@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801C0CA0 (-CreateInstance@-$SimpleClassFactory@VJointResize@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_G.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@JointResize@@QEAAJXZ @ 0x1801C0E00 (-RuntimeClassInitialize@JointResize@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0JointResize@@QEAA@XZ @ 0x180538E28 (--0JointResize@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<JointResize,IUnknown,>(_QWORD *a1)
{
  JointResize *v2; // rax
  JointResize *v4; // rdi
  int v5; // ebx
  JointResize *v6; // [rsp+30h] [rbp+8h] BYREF
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = (JointResize *)operator new(0x340uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
    return 2147942414LL;
  v4 = JointResize::JointResize(v2);
  v6 = v4;
  v7 = 0LL;
  v5 = JointResize::RuntimeClassInitialize(v4);
  if ( v5 >= 0 )
  {
    v5 = (**(__int64 (__fastcall ***)(JointResize *, GUID *, _QWORD *))v4)(
           v4,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    (*(void (__fastcall **)(JointResize *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  }
  return (unsigned int)v5;
}
