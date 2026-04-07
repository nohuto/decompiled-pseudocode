/*
 * XREFs of ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180046174
 * Callers:
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003F738 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x180045818 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z @ 0x180096AB0 (-StartAnimation@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAAXHH@Z.c)
 *     ?StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z @ 0x1800A1AA4 (-StartAnimation@CAccentTransition@@QEAAJPEBUACCENT_POLICY@@PEAVCAccent@@@Z.c)
 *     ?StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E16EC (-StartFirstAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800E1BA0 (-StartSecondAnimation@ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@AE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x18004629C (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180095474 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationEngine::ScheduleStartAnimation(
        CAnimationEngine *this,
        const struct std::nothrow_t *a2,
        __int64 a3,
        unsigned int *a4)
{
  int v6; // r14d
  unsigned int v8; // ebx
  struct IAnimatedVisual **v9; // rsi
  unsigned __int128 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // r9d
  int started; // eax
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+70h] [rbp+18h] BYREF

  v6 = (int)a2;
  v8 = -2147024809;
  v9 = 0LL;
  if ( *(_DWORD *)(a3 + 24) )
  {
    v15 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v10 = *(unsigned int *)(a3 + 24) * (unsigned __int128)8u;
    if ( !is_mul_ok(*(unsigned int *)(a3 + 24), 8uLL) )
      *(_QWORD *)&v10 = -1LL;
    v9 = (struct IAnimatedVisual **)operator new[](v10, *((const struct std::nothrow_t **)&v10 + 1));
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
      started = CAnimationEngine::ScheduleStartAnimation(this, v6, v9, v12, a4);
      v8 = started;
      if ( started >= 0 )
      {
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        goto LABEL_9;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0xA1u, 0LL);
    }
    else
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x9Bu, 0LL);
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  }
LABEL_9:
  CDisplayBlackCurtainAnimatedVisual::operator delete(v9, a2);
  return v8;
}
