/*
 * XREFs of ??$MakeAndInitialize@VCFallbackWindow@@UIFallbackWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIFallbackWindow@@@Z @ 0x1800A253C
 * Callers:
 *     ?s_CreateInstance@CFallbackWindow@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1802BC5A4 (-s_CreateInstance@CFallbackWindow@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ @ 0x1800A1E6C (-RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ.c)
 *     ??0CFallbackWindow@@QEAA@XZ @ 0x1800A2604 (--0CFallbackWindow@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CFallbackWindow,IFallbackWindow,>(_QWORD *a1)
{
  void *v2; // rax
  int v3; // ebx
  CFallbackWindow *v4; // rdi
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  CFallbackWindow *v7; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (CFallbackWindow *)v2;
  if ( v2 )
  {
    v4 = CFallbackWindow::CFallbackWindow((CFallbackWindow *)v2);
    v7 = v4;
    v6 = 0LL;
    v3 = CFallbackWindow::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      v3 = (**(__int64 (__fastcall ***)(CFallbackWindow *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee,
             a1);
      (*(void (__fastcall **)(CFallbackWindow *))(*(_QWORD *)v4 + 16LL))(v4);
      return (unsigned int)v3;
    }
    if ( v4 )
      (*(void (__fastcall **)(CFallbackWindow *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  return (unsigned int)v3;
}
