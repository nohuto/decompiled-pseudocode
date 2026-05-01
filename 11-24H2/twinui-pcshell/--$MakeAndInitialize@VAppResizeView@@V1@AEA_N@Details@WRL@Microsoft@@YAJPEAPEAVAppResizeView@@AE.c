/*
 * XREFs of ??$MakeAndInitialize@VAppResizeView@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeView@@AEA_N@Z @ 0x18052EF1C
 * Callers:
 *     ?AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z @ 0x18052F23C (-AppResizeView_CreateInstance@@YAJ_NAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalRelease@?$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x18021B238 (-InternalRelease@-$ComPtr@VCAllUpViewService@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0AppResizeView@@QEAA@XZ @ 0x18052EFB0 (--0AppResizeView@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@VAppResizeView@@@WRL@Microsoft@@IEBAXXZ @ 0x18052FB64 (-InternalAddRef@-$ComPtr@VAppResizeView@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppResizeView,AppResizeView,bool &>(_QWORD *a1, char *a2)
{
  unsigned int v4; // ebx
  void *v5; // rax
  AppResizeView *v6; // rax
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // r8
  AppResizeView *v11; // [rsp+30h] [rbp+8h] BYREF
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x1F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v5;
  if ( v5 )
  {
    v6 = AppResizeView::AppResizeView((AppResizeView *)v5);
    v7 = *a2;
    v11 = v6;
    v12 = 0LL;
    *((_BYTE *)v6 + 492) = v7;
    Microsoft::WRL::ComPtr<AppResizeView>::InternalAddRef(&v11, v8, v6);
    *a1 = v9;
    Microsoft::WRL::ComPtr<CAllUpViewService>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v12);
  return v4;
}
