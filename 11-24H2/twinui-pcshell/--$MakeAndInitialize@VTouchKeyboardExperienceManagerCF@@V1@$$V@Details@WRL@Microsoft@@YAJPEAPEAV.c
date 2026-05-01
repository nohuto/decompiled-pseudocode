/*
 * XREFs of ??$MakeAndInitialize@VTouchKeyboardExperienceManagerCF@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManagerCF@@@Z @ 0x1802C5978
 * Callers:
 *     ??$CreateClassFactory@VTouchKeyboardExperienceManagerCF@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1802228C0 (--$CreateClassFactory@VTouchKeyboardExperienceManagerCF@@@Details@WRL@Microsoft@@YAJPEAIPEBUCrea.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0TouchKeyboardExperienceManagerCF@@QEAA@XZ @ 0x18046C448 (--0TouchKeyboardExperienceManagerCF@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TouchKeyboardExperienceManagerCF,TouchKeyboardExperienceManagerCF,>(
        TouchKeyboardExperienceManagerCF **a1)
{
  void *v2; // rax
  TouchKeyboardExperienceManagerCF *v4; // rax
  TouchKeyboardExperienceManagerCF *v5; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( !v2 )
    return 2147942414LL;
  v4 = TouchKeyboardExperienceManagerCF::TouchKeyboardExperienceManagerCF((TouchKeyboardExperienceManagerCF *)v2);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(TouchKeyboardExperienceManagerCF *))(*(_QWORD *)v4 + 8LL))(v4);
  *a1 = v5;
  if ( v5 )
    (*(void (__fastcall **)(TouchKeyboardExperienceManagerCF *))(*(_QWORD *)v5 + 16LL))(v5);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  return 0LL;
}
