/*
 * XREFs of ??$MakeAndInitialize@V?$SimpleClassFactory@VScreenClippingExperienceManagerFactory@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VScreenClippingExperienceManagerFactory@@$0A@@12@@Z @ 0x180239BA0
 * Callers:
 *     ??$CreateClassFactory@V?$SimpleClassFactory@VScreenClippingExperienceManagerFactory@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1803A1230 (--$CreateClassFactory@V-$SimpleClassFactory@VScreenClippingExperienceManagerFactory@@$0A@@WRL@Mi.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$SimpleClassFactory@VScreenClippingExperienceManagerFactory@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x1803A1C3C (--0-$SimpleClassFactory@VScreenClippingExperienceManagerFactory@@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<ScreenClippingExperienceManagerFactory,0>,Microsoft::WRL::SimpleClassFactory<ScreenClippingExperienceManagerFactory,0>,>(
        __int64 *a1)
{
  void *v2; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
    return 2147942414LL;
  v4 = Microsoft::WRL::SimpleClassFactory<ScreenClippingExperienceManagerFactory,0>::SimpleClassFactory<ScreenClippingExperienceManagerFactory,0>(v2);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  return 0LL;
}
