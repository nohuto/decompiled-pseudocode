/*
 * XREFs of ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7BD4
 * Callers:
 *     ?CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800B8E28 (-CaptureAndScheduleExitAnimation@CDisplayDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?OnGlobalTimeUpdatedImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800B9060 (-OnGlobalTimeUpdatedImpl@CDisplayDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B9AD8 (-ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleExitAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B9E00 (-ScheduleExitAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BA548 (-CaptureAndScheduleExitAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ @ 0x1800BAA38 (-ScheduleEntranceAnimations@CDisplayExtendAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ @ 0x1800BB138 (-ScheduleEntranceAnimation@CDisplayExtendToDuplicateAnimatedVisual@@AEAAJXZ.c)
 *     ?StartImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ @ 0x1800BB2E0 (-StartImpl@CDisplayExtendToDuplicateAnimatedVisual@@EEAAJXZ.c)
 *     ?CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800BB978 (-CaptureAndScheduleExitAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 *     ?ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ @ 0x1800BBF78 (-ScheduleEntranceAnimation@CDisplayMixedModeAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18005608C (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800560C0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x1800562C8 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180058438 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B6F88 (--1-$com_ptr_t@VCAnimationEngine@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDisplayAnimatedVisual::ScheduleAnimation(
        struct IAnimatedVisual *a1,
        _QWORD *a2,
        struct IAnimationListener *a3,
        int a4,
        int a5,
        unsigned int *a6)
{
  struct IAnimationListener *v7; // r13
  struct IAnimatedVisual ***v8; // rdx
  CAnimationEngine *v9; // rdi
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  unsigned int v12; // ebx
  struct IAnimatedVisual **v13; // r15
  struct IAnimatedVisual **v14; // rsi
  int v15; // r13d
  struct IAnimatedVisual *v16; // rax
  struct IAnimatedVisual *v17; // r8
  unsigned int v18; // edx
  int v19; // eax
  int started; // eax
  __int64 v21; // rdx
  struct IAnimatedVisual **v23[2]; // [rsp+30h] [rbp-20h] BYREF
  int v24; // [rsp+40h] [rbp-10h]
  __int64 v25; // [rsp+44h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct IAnimatedVisual *v27; // [rsp+90h] [rbp+40h] BYREF
  CAnimationEngine *v28; // [rsp+98h] [rbp+48h] BYREF
  struct IAnimationListener *v29; // [rsp+A0h] [rbp+50h]

  v29 = a3;
  v27 = a1;
  v7 = a3;
  if ( *a2 != a2[1] )
  {
    v9 = CDesktopManager::AcquireAnimationEngine();
    v28 = v9;
    if ( !v9 )
    {
      v10 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F8,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)0x8007000ELL);
LABEL_20:
      wil::com_ptr_t<CAnimationEngine,wil::err_returncode_policy>::~com_ptr_t<CAnimationEngine,wil::err_returncode_policy>(&v28);
      return v10;
    }
    *(_OWORD *)v23 = 0LL;
    v24 = 0;
    v11 = 0;
    v25 = 0LL;
    v12 = 0;
    v13 = v8[1];
    v14 = *v8;
    if ( *v8 != v13 )
    {
      v15 = a5;
      do
      {
        v16 = *v14;
        *((_DWORD *)v16 + 184) = a4;
        *((_DWORD *)v16 + 185) = v15;
        v17 = *v14;
        v27 = *v14;
        v18 = v12 + 1;
        if ( v12 + 1 >= v12 )
        {
          if ( v18 > v11 )
          {
            v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v23, 8, 1, &v27);
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0xC0u);
            v12 = HIDWORD(v25);
            v11 = v25;
          }
          else
          {
            v23[0][v12++] = v17;
            HIDWORD(v25) = v18;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        ++v14;
      }
      while ( v14 != v13 );
      v7 = v29;
    }
    started = CAnimationEngine::ScheduleStartAnimation(v9, a4, v23[0], v12, a6);
    v10 = started;
    if ( started < 0 )
    {
      v21 = 518LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
        (const char *)(unsigned int)started);
      DynArrayImpl<0>::~DynArrayImpl<0>(v23);
      goto LABEL_20;
    }
    started = CAnimationEngine::RegisterForAnimationCompleteNotification(v9, v7);
    v10 = started;
    if ( started < 0 )
    {
      v21 = 520LL;
      goto LABEL_19;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(v23);
    CAnimationEngine::Release(v9);
  }
  return 0LL;
}
