/*
 * XREFs of ??$MakeAndInitialize@VWindowingEnvironmentManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800A4FF0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VWindowingEnvironmentManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A4F50 (-CreateInstance@-$SimpleClassFactory@VWindowingEnvironmentManager@@$0A@@WRL@Microsoft@@UEAAJPEAU.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800998F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_1800998F0.c)
 *     ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x1800A5098 (-RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ.c)
 *     ??0WindowingEnvironmentManager@@QEAA@XZ @ 0x1800A56A4 (--0WindowingEnvironmentManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WindowingEnvironmentManager,IUnknown,>(
        WindowingEnvironmentManager **a1)
{
  void *v2; // rax
  WindowingEnvironmentManager *v4; // rbx
  volatile int *v5; // rdx
  int v6; // edi
  volatile int *v7; // rdx
  void *v8; // [rsp+40h] [rbp+8h] BYREF
  void *v9; // [rsp+48h] [rbp+10h]
  void *v10; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v2 = operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v2;
  v9 = v2;
  if ( v2 )
  {
    v10 = v2;
    v4 = WindowingEnvironmentManager::WindowingEnvironmentManager((WindowingEnvironmentManager *)v2);
    v8 = 0LL;
    v6 = WindowingEnvironmentManager::RuntimeClassInitialize(v4);
    if ( v6 >= 0 )
    {
      *a1 = v4;
      (*(void (__fastcall **)(WindowingEnvironmentManager *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( v4 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>::Release(
          (__int64)v4,
          v7);
      return 0;
    }
    else if ( v4 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>::Release(
        (__int64)v4,
        v5);
    }
    return (unsigned int)v6;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
    return 2147942414LL;
  }
}
