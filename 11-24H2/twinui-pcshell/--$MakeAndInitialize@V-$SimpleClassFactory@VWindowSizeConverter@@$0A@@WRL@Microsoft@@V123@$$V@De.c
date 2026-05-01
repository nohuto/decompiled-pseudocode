/*
 * XREFs of ??$MakeAndInitialize@V?$SimpleClassFactory@VWindowSizeConverter@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VWindowSizeConverter@@$0A@@12@@Z @ 0x1802C36C4
 * Callers:
 *     ??$CreateClassFactory@V?$SimpleClassFactory@VWindowSizeConverter@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180222570 (--$CreateClassFactory@V-$SimpleClassFactory@VWindowSizeConverter@@$0A@@WRL@Microsoft@@@Details@W.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??0?$SimpleClassFactory@VWindowSizeConverter@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180176B20 (--0-$SimpleClassFactory@VWindowSizeConverter@@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<WindowSizeConverter,0>,Microsoft::WRL::SimpleClassFactory<WindowSizeConverter,0>,>(
        _QWORD *a1)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v3 = Microsoft::WRL::SimpleClassFactory<WindowSizeConverter,0>::SimpleClassFactory<WindowSizeConverter,0>();
    v4 = v3;
    v6 = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
    *a1 = v4;
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  return v2;
}
