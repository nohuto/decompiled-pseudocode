/*
 * XREFs of ??$MakeAndInitialize@VViewHostItemPropertyChangedArgs@@V1@AEAY0BC@$$CBG@Details@WRL@Microsoft@@YAJPEAPEAVViewHostItemPropertyChangedArgs@@AEAY0BC@$$CBG@Z @ 0x180406B4C
 * Callers:
 *     ?_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18040DCC8 (-_RaiseFrameworkViewTypeChanged@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4FRAMEWORK_VI.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1800AB40C (-InternalAddRef@-$ComPtr@VCStartExperienceManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x180217B80 (--$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ViewHostItemPropertyChangedArgs@@QEAA@XZ @ 0x180407AA0 (--0ViewHostItemPropertyChangedArgs@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x18040A47C (-InternalRelease@-$ComPtr@VViewHostItemPropertyChangedArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewHostItemPropertyChangedArgs,ViewHostItemPropertyChangedArgs,unsigned short const (&)[18]>(
        ViewHostItemPropertyChangedArgs **a1,
        const unsigned __int16 *a2)
{
  void *v4; // rax
  unsigned int v5; // ebx
  ViewHostItemPropertyChangedArgs *v6; // rax
  ViewHostItemPropertyChangedArgs *v7; // rdi
  HRESULT v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  ViewHostItemPropertyChangedArgs *v11; // [rsp+40h] [rbp+8h] BYREF
  void *v12; // [rsp+50h] [rbp+18h] BYREF
  const unsigned __int16 *v13; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v4;
  if ( v4 )
  {
    v6 = ViewHostItemPropertyChangedArgs::ViewHostItemPropertyChangedArgs((ViewHostItemPropertyChangedArgs *)v4);
    v12 = 0LL;
    v7 = v6;
    v11 = v6;
    v13 = a2;
    *((_DWORD *)v6 + 12) = 5;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v6 + 7, 0LL);
    v8 = Microsoft::WRL::Wrappers::HString::Set<unsigned short *>((HSTRING *)v7 + 12, &v13);
    v5 = v8;
    if ( v8 >= 0 )
    {
      Microsoft::WRL::ComPtr<CStartExperienceManager>::InternalAddRef((__int64 *)&v11);
      *a1 = v7;
      Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease(&v11);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<ViewHostItemPropertyChangedArgs>::InternalRelease(&v11);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v12);
  return v5;
}
