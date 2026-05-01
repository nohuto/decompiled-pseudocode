/*
 * XREFs of ??$MakeAndInitialize@VCMultitaskingViewFrameElement@@UIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU2@AEAPEAU2@AEAPEAU2@AEAPEAUIAnimationCoordinator@@@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewElement@@AEBUFrameMetrics@@AEAPEAUHWND__@@AEBVAsyncFrameEvents@@AEAPEAUISwitchThumbnailFactory@@AEAPEAU3@55AEAPEAUIAnimationCoordinator@@@Z @ 0x1804CB018
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1804BBB40 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CMultitaskingViewFrameElement@@QEAA@XZ @ 0x1804CB154 (--0CMultitaskingViewFrameElement@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@44PEAUIAnimationCoordinator@@@Z @ 0x1804CC5E4 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewFrameElement,IMultitaskingViewElement,FrameMetrics const &,HWND__ * &,AsyncFrameEvents const &,ISwitchThumbnailFactory * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,IAnimationCoordinator * &>(
        _QWORD *a1,
        const struct FrameMetrics *a2,
        HWND *a3,
        const struct AsyncFrameEvents *a4,
        struct ISwitchThumbnailFactory **a5,
        struct IMultitaskingViewElement **a6,
        struct IMultitaskingViewElement **a7,
        struct IMultitaskingViewElement **a8,
        struct IAnimationCoordinator **a9)
{
  void *v13; // rax
  int v14; // edi
  CMultitaskingViewFrameElement *v15; // rbx
  void *v17; // [rsp+80h] [rbp+8h] BYREF

  *a1 = 0LL;
  v13 = operator new(0x248uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v13;
  if ( v13 )
  {
    v15 = CMultitaskingViewFrameElement::CMultitaskingViewFrameElement((CMultitaskingViewFrameElement *)v13);
    v17 = 0LL;
    v14 = CMultitaskingViewFrameElement::RuntimeClassInitialize(v15, a2, *a3, a4, *a5, *a6, *a7, *a8, *a9);
    if ( v14 >= 0 )
    {
      v14 = (**(__int64 (__fastcall ***)(CMultitaskingViewFrameElement *, GUID *, _QWORD *))v15)(
              v15,
              &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
              a1);
      (*(void (__fastcall **)(CMultitaskingViewFrameElement *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    else if ( v15 )
    {
      (*(void (__fastcall **)(CMultitaskingViewFrameElement *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  else
  {
    v14 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v17);
  return (unsigned int)v14;
}
