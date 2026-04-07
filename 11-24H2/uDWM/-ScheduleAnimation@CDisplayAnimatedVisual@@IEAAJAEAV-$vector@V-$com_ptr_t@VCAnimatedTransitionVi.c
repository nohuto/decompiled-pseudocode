/*
 * XREFs of ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800BD4E8
 * Callers:
 *     ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x180080D80 (-OnGlobalTimeUpdatedImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x18008A154 (-ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800BDF4C (-CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BE9A8 (-ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleExitAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800BEC80 (-ScheduleExitAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BF2BC (-CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BF6A4 (-ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800BFD38 (-ScheduleEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BFEB0 (-StartImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800C046C (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180020554 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z @ 0x18004615C (-SetTransitionStoryboardAndTarget@CAnimatedTransitionVisual@@QEAAXHH@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x18004629C (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180087274 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009AE3C (--1-$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDisplayAnimatedVisual::ScheduleAnimation(
        CAnimatedTransitionVisual *a1,
        CAnimatedTransitionVisual ***a2,
        struct IAnimationListener *a3,
        int a4,
        int a5,
        unsigned int *a6)
{
  CAnimationEngine *v10; // rsi
  unsigned int v11; // ebx
  CAnimatedTransitionVisual **v12; // r14
  CAnimatedTransitionVisual **v13; // rdi
  unsigned int v14; // ebx
  struct IAnimatedVisual *v15; // r8
  unsigned int v16; // edx
  int v17; // eax
  int started; // eax
  __int64 v19; // rdx
  struct IAnimatedVisual **v20[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-Ch]
  unsigned int v22; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  CAnimatedTransitionVisual *v24; // [rsp+80h] [rbp+30h] BYREF
  CAnimationEngine *v25; // [rsp+88h] [rbp+38h] BYREF

  v24 = a1;
  if ( *a2 == a2[1] )
    return 0LL;
  v10 = CDesktopManager::AcquireAnimationEngine();
  v25 = v10;
  if ( v10 )
  {
    CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)v20);
    v12 = a2[1];
    v13 = *a2;
    v14 = v22;
    while ( v13 != v12 )
    {
      CAnimatedTransitionVisual::SetTransitionStoryboardAndTarget(*v13, a4, a5);
      v15 = *v13;
      v24 = *v13;
      v16 = v14 + 1;
      if ( v14 + 1 >= v14 )
      {
        if ( v16 > v21 )
        {
          v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v20, 8, 1, &v24);
          if ( v17 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xBEu, 0LL);
          v14 = v22;
        }
        else
        {
          v20[0][v14++] = v15;
          v22 = v16;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
      }
      ++v13;
    }
    started = CAnimationEngine::ScheduleStartAnimation(v10, a4, v20[0], v14, a6);
    v11 = started;
    if ( started >= 0 )
    {
      started = CAnimationEngine::RegisterForAnimationCompleteNotification(v10, a3);
      v11 = started;
      if ( started >= 0 )
      {
        DynArrayImpl<0>::~DynArrayImpl<0>((void **)v20);
        v11 = 0;
        goto LABEL_21;
      }
      v19 = 520LL;
    }
    else
    {
      v19 = 518LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)started);
    DynArrayImpl<0>::~DynArrayImpl<0>((void **)v20);
  }
  else
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F8,
      (__int64)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)0x8007000ELL);
  }
LABEL_21:
  wil::com_ptr_t<CAnimationEngine,wil::err_returncode_policy>::~com_ptr_t<CAnimationEngine,wil::err_returncode_policy>(&v25);
  return v11;
}
