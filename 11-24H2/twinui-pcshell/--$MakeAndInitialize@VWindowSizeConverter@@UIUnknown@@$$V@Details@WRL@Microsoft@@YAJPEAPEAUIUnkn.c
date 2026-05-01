/*
 * XREFs of ??$MakeAndInitialize@VWindowSizeConverter@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180079838
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VWindowSizeConverter@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180079780 (-CreateInstance@-$SimpleClassFactory@VWindowSizeConverter@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0WindowSizeConverter@@QEAA@XZ @ 0x180078A98 (--0WindowSizeConverter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@WindowSizeConverter@@QEAAJXZ @ 0x1800799F8 (-RuntimeClassInitialize@WindowSizeConverter@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WindowSizeConverter,IUnknown,>(_QWORD *a1)
{
  void *v2; // rax
  int v3; // edi
  WindowSizeConverter *v4; // rbx
  void *v6; // [rsp+40h] [rbp+8h] BYREF
  WindowSizeConverter *v7; // [rsp+48h] [rbp+10h]
  void *v8; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  v7 = (WindowSizeConverter *)v2;
  if ( !v2 )
  {
    v3 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
    return (unsigned int)v3;
  }
  v8 = v2;
  v4 = WindowSizeConverter::WindowSizeConverter((WindowSizeConverter *)v2);
  v7 = v4;
  v6 = 0LL;
  v3 = WindowSizeConverter::RuntimeClassInitialize(v4);
  if ( v3 >= 0 )
  {
    v3 = (**(__int64 (__fastcall ***)(WindowSizeConverter *, GUID *, _QWORD *))v4)(
           v4,
           &GUID_00000000_0000_0000_c000_000000000046,
           a1);
    (*(void (__fastcall **)(WindowSizeConverter *))(*(_QWORD *)v4 + 16LL))(v4);
    goto LABEL_8;
  }
  if ( v4 )
    (*(void (__fastcall **)(WindowSizeConverter *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v3;
}
