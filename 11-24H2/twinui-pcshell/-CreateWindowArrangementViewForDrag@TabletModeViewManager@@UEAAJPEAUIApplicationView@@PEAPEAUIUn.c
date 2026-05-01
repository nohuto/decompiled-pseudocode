/*
 * XREFs of ?CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x180521430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1804BB6FC (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV2@PEAUIWindowArrangementView@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEAPEAVTabletModeViewManager@@$$QEAPEAUIWindowArrangementView@@@Z @ 0x180520BD0 (--$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV.c)
 *     ?GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@PEAPEAUIAppLayout@@@Z @ 0x1805216E4 (-GetAppLayoutForDropFeedback@TabletModeViewManager@@AEAAJPEAUIApplicationView@@W4SHOW_WINDOW_ARR.c)
 *     ?WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18052E8CC (-WindowArrangementView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModeViewManager::CreateWindowArrangementViewForDrag(
        TabletModeViewManager *this,
        struct IApplicationView *a2,
        struct IUnknown **a3)
{
  unsigned int v6; // ebx
  const struct _GUID *v7; // rcx
  int Instance; // eax
  int AppLayoutForDropFeedback; // eax
  __int64 v10; // rdx
  IUnknown **p_punk; // [rsp+30h] [rbp-10h] BYREF
  char v13; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  IUnknown *punk; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+80h] [rbp+40h] BYREF
  IUnknown *v17; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0LL;
  if ( !*((_QWORD *)this + 5) )
  {
    punk = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    Instance = WindowArrangementView_CreateInstance(v7, (void **)&punk);
    v6 = Instance;
    if ( Instance >= 0 )
    {
      IUnknown_SetSite(punk, (IUnknown *)this - 11);
      p_punk = &punk;
      v13 = 1;
      v16 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      AppLayoutForDropFeedback = TabletModeViewManager::GetAppLayoutForDropFeedback((char *)this - 88, a2, 3LL, &v16);
      v6 = AppLayoutForDropFeedback;
      if ( AppLayoutForDropFeedback >= 0 )
      {
        AppLayoutForDropFeedback = ((__int64 (__fastcall *)(IUnknown *, struct IApplicationView *, __int64, __int64, int))punk->lpVtbl[1].QueryInterface)(
                                     punk,
                                     a2,
                                     v16,
                                     3LL,
                                     3);
        v6 = AppLayoutForDropFeedback;
        if ( AppLayoutForDropFeedback >= 0 )
        {
          v17 = punk;
          p_punk = (IUnknown **)((char *)this - 88);
          AppLayoutForDropFeedback = Microsoft::WRL::Details::MakeAndInitialize<TabletModeViewManager::CachedWindowArrangementViewLifetime,IUnknown,TabletModeViewManager *,IWindowArrangementView *>(
                                       a3,
                                       (__int64 *)&p_punk,
                                       (__int64 *)&v17);
          v6 = AppLayoutForDropFeedback;
          if ( AppLayoutForDropFeedback >= 0 )
          {
            Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)this + 6, (__int64 *)&punk);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
            v6 = 0;
            goto LABEL_13;
          }
          v10 = 214LL;
        }
        else
        {
          v10 = 212LL;
        }
      }
      else
      {
        v10 = 211LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)AppLayoutForDropFeedback);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      IUnknown_SetSite(punk, 0LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCB,
        (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)(unsigned int)Instance);
    }
LABEL_13:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    return v6;
  }
  v6 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC8,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)0x8007139FLL);
  return v6;
}
