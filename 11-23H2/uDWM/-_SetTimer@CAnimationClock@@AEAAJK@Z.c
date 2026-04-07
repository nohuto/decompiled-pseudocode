/*
 * XREFs of ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x1800118F4
 * Callers:
 *     ?_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z @ 0x1800111AC (-_SetState@CAnimationClock@@AEAAJW4AnimationClockState@@@Z.c)
 *     ?Reset@CAnimationClock@@QEAAJK@Z @ 0x1800A9B8C (-Reset@CAnimationClock@@QEAAJK@Z.c)
 * Callees:
 *     ?IsSet@CTimer@@QEAA_NXZ @ 0x1800119DC (-IsSet@CTimer@@QEAA_NXZ.c)
 *     ?Start@CTimer@@QEAAJK@Z @ 0x180011A38 (-Start@CTimer@@QEAAJK@Z.c)
 *     ?_OnTimerCallback@CAnimationClock@@AEAAXXZ @ 0x180011B08 (-_OnTimerCallback@CAnimationClock@@AEAAXXZ.c)
 *     ?Cancel@CTimer@@QEAAJXZ @ 0x180011C8C (-Cancel@CTimer@@QEAAJXZ.c)
 *     ??0CTimer@@QEAA@XZ @ 0x180012658 (--0CTimer@@QEAA@XZ.c)
 *     ?SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z @ 0x180013048 (-SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClock::_SetTimer(CAnimationClock *this, unsigned int a2)
{
  int v2; // edi
  CTimer *v6; // rax
  CTimer *v7; // rax

  v2 = 0;
  if ( !*((_QWORD *)this + 8) )
  {
    v6 = (CTimer *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     80LL);
    if ( v6 )
    {
      v7 = CTimer::CTimer(v6);
      *((_QWORD *)this + 8) = v7;
      if ( v7 )
      {
        v2 = CTimer::SetTimerCallback(
               v7,
               (struct ITimerCallbackListener *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
        if ( v2 < 0 )
          return (unsigned int)v2;
        goto LABEL_2;
      }
    }
    else
    {
      *((_QWORD *)this + 8) = 0LL;
    }
    return (unsigned int)-2147024882;
  }
LABEL_2:
  if ( !CTimer::IsSet(*((CTimer **)this + 8)) || (v2 = CTimer::Cancel(*((CTimer **)this + 8)), v2 >= 0) )
  {
    if ( a2 )
      return (unsigned int)CTimer::Start(*((CTimer **)this + 8), a2);
    else
      CAnimationClock::_OnTimerCallback(this);
  }
  return (unsigned int)v2;
}
