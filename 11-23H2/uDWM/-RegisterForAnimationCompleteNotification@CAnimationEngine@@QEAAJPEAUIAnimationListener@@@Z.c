/*
 * XREFs of ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180058438
 * Callers:
 *     ?_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ @ 0x180014C18 (-_ScheduleStartAnimations@CAnimationScheduler@@AEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180054FEC (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800A1CF0 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7BD4 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJAEAV-$vector@V-$com_ptr_t@VCAnimatedTransitionVi.c)
 *     ?ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationListener@@HHPEAI@Z @ 0x1800B7DC0 (-ScheduleAnimation@CDisplayAnimatedVisual@@IEAAJPEAVCAnimatedTransitionVisual@@PEAUIAnimationLis.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D714C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D7644 (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800E4564 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800EDE58 (-StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F59E8 (-StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 *     ?StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5EF0 (-StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitio.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::RegisterForAnimationCompleteNotification(
        CAnimationEngine *this,
        struct IAnimationListener *a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // r9d
  struct IAnimationListener ***v7; // rdi
  struct IAnimationListener **v8; // rdx
  struct IAnimationListener ***v9; // r10
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+8h] BYREF
  struct IAnimationListener *v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = a2;
  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( !*((_BYTE *)this + 120) )
  {
    v3 = -2147221008;
    v14 = 550;
    goto LABEL_20;
  }
  v3 = 0;
  v4 = -1;
  v5 = 0;
  v6 = *((_DWORD *)this + 24);
  if ( !v6 )
  {
    v9 = (struct IAnimationListener ***)((char *)this + 72);
    v7 = (struct IAnimationListener ***)((char *)this + 72);
LABEL_13:
    v11 = *((_DWORD *)v9 + 6);
    v12 = v11 + 1;
    if ( v11 + 1 >= v11 )
    {
      if ( v12 <= *((_DWORD *)v9 + 5) )
      {
        (*v7)[*((unsigned int *)v9 + 6)] = v16;
        *((_DWORD *)v9 + 6) = v12;
      }
      else
      {
        v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v9, 8, 1, &v16);
        v3 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u, 0LL);
      }
      goto LABEL_11;
    }
    v3 = -2147024362;
    v14 = 181;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v14, 0LL);
    goto LABEL_11;
  }
  v7 = (struct IAnimationListener ***)((char *)this + 72);
  v8 = *v7;
  while ( *v8 != v16 )
  {
    if ( v4 < 0 && !*v8 )
      v4 = v5;
    ++v5;
    ++v8;
    if ( v5 >= v6 )
    {
      v9 = v7;
      if ( v4 < 0 )
        goto LABEL_13;
      (*v7)[v4] = v16;
      break;
    }
  }
LABEL_11:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v3;
}
