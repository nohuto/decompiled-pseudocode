/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800561B0
 * Callers:
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x1800074A8 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x180054FEC (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800A1CF0 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D714C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800D7644 (-PreDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x1800EDE58 (-StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F59E8 (-StartFirstAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transition.c)
 *     ?StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5EF0 (-StartSecondAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitio.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x1800562C8 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        int a2,
        __int64 a3,
        unsigned int *a4)
{
  unsigned int v8; // ebx
  struct IAnimatedVisual **v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r9d
  int started; // eax
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+60h] [rbp+18h] BYREF

  v8 = -2147024809;
  v9 = 0LL;
  if ( *(_DWORD *)(a3 + 24) )
  {
    v15 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v10 = 8LL * *(unsigned int *)(a3 + 24);
    if ( !is_mul_ok(*(unsigned int *)(a3 + 24), 8uLL) )
      v10 = -1LL;
    v9 = (struct IAnimatedVisual **)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 8LL))(
                                      WPF::g_pProcessHeap,
                                      v10);
    v11 = 0LL;
    if ( v9 )
    {
      v12 = *(_DWORD *)(a3 + 24);
      if ( v12 )
      {
        do
        {
          v9[v11] = *(struct IAnimatedVisual **)(*(_QWORD *)a3 + 8 * v11);
          v11 = (unsigned int)(v11 + 1);
          v12 = *(_DWORD *)(a3 + 24);
        }
        while ( (unsigned int)v11 < v12 );
      }
      started = CAnimationEngine::ScheduleStartAnimation(this, a2, v9, v12, a4);
      v8 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0xA3u, 0LL);
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x9Du, 0LL);
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  }
  (*(void (__fastcall **)(WPF::HeapBase *, struct IAnimatedVisual **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v9);
  return v8;
}
